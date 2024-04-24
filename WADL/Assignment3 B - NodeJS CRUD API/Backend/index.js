const express = require("express");
const mongoose = require("mongoose");
const bodyParser = require("body-parser");
const cors = require("cors");

const DB_URL = "mongodb://localhost:27017/angular-auth";

const app = express();

app.use(cors());
app.use(bodyParser.json());

mongoose.connect(DB_URL);
const db = mongoose.connection;
db.on("error", (error) => console.error(error));
db.once("open", () => console.log("Connected to database"));

const userSchema = new mongoose.Schema({
  name: String,
  email: String,
  password: String,
});

const User = mongoose.model("User", userSchema);

app.get("/", (req, res) => {
  res.send("Angular Auth Server");
});

app.post("/register", async (req, res) => {
  const { name, email, password } = req.body;

  const existingUser = await User.findOne({ email });

  if (existingUser) {
    return res.status(400).json({ message: "Email already exists" });
  }

  const newUser = new User({ name, email, password });
  await newUser.save();
  res.status(200).json({ id: newUser._id });
});

app.post("/login", async (req, res) => {
  const { email, password } = req.body;

  const user = await User.findOne({ email });

  if (!user || user.password !== password) {
    return res.status(401).json({ message: "Invalid email or password" });
  }

  res.status(200).json({ id: user._id, name: user.name, email: user.email });
});

app.listen(3000, () => {
  console.log("Server is running on port 3000");
});
