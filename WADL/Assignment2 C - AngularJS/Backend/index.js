const express = require("express");
const fs = require("fs");
const bodyParser = require("body-parser");
const cors = require("cors");

const app = express();

app.use(cors());
app.use(bodyParser.json());

app.get("/", (req, res) => {
  res.send("Angular Auth Server");
});

let users = [];
const dbPath = "db.json";
if (fs.existsSync(dbPath)) {
  const data = fs.readFileSync(dbPath);
  users = JSON.parse(data);
}

function saveUsers() {
  fs.writeFileSync(dbPath, JSON.stringify(users, null, 4));
}

app.post("/register", (req, res) => {
  const { name, email, password } = req.body;

  const existingUser = users.find((user) => user.email === email);
  if (existingUser) {
    return res.status(400).json({ message: "Email already exists" });
  }

  const id = users.length > 0 ? users[users.length - 1].id + 1 : 1;
  const newUser = { id, name, email, password };
  users.push(newUser);
  saveUsers();
  res.status(200).json({ id });
});

app.post("/login", (req, res) => {
  const { email, password } = req.body;

  const user = users.find((user) => user.email === email);

  if (!user || user.password !== password) {
    return res.status(401).json({ message: "Invalid email or password" });
  }

  res.status(200).json({ id: user.id, name: user.name, email: user.email });
});

app.listen(3000, () => {
  console.log("Server is running on port 3000");
});
