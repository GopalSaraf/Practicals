import java.util.*;

public class BookShopInventory {
    private final Map<Book, Integer> booksAndQuantities;
    private final Scanner sc = new Scanner(System.in);

    public BookShopInventory() {
        booksAndQuantities = new HashMap<>();
        booksAndQuantities.put(new Book("Fundamentals of Wavelets", "Goswami, Jaideva", "tech", "signal_processing", 228, "Wiley"), 10);
        booksAndQuantities.put(new Book("Data Smart", "Foreman, John", "tech", "data_science", 235, "Wiley"), 10);
        booksAndQuantities.put(new Book("God Created the Integers", "Hawking, Stephen", "tech", "mathematics", 197, "Penguin"), 10);
        booksAndQuantities.put(new Book("Superfreakonomics", "Dubner, Stephen", "science", "economics", 179, "HarperCollins"), 10);
        booksAndQuantities.put(new Book("Orientalism", "Said, Edward", "nonfiction", "history", 197, "Penguin"), 10);
        booksAndQuantities.put(new Book("Drunkard's Walk, The", "Mlodinow, Leonard", "science", "mathematics", 197, "Penguin"), 10);
        booksAndQuantities.put(new Book("Data Scientists at Work", "Sebastian Gutierrez", "tech", "data_science", 230, "Apress"), 10);
        booksAndQuantities.put(new Book("Slaughterhouse Five", "Vonnegut, Kurt", "fiction", "classic", 198, "Random House"), 10);
        booksAndQuantities.put(new Book("Birth of a Theorem", "Villani, Cedric", "science", "mathematics", 234, "Bodley Head"), 10);
        booksAndQuantities.put(new Book("Age of Wrath, The", "Eraly, Abraham", "nonfiction", "history", 238, "Penguin"), 10);
        booksAndQuantities.put(new Book("Trial, The", "Kafka, Frank", "fiction", "classic", 198, "Random House"), 10);
        booksAndQuantities.put(new Book("Data Mining Handbook", "Nisbet, Robert", "tech", "data_science", 242, "Apress"), 10);
        booksAndQuantities.put(new Book("New Machiavelli, The", "Wells, H. G.", "fiction", "novel", 180, "Penguin"), 10);
        booksAndQuantities.put(new Book("Physics & Philosophy", "Heisenberg, Werner", "philosophy", "science", 197, "Penguin"), 10);
        booksAndQuantities.put(new Book("Making Software", "Oram, Andy", "tech", "computer_science", 232, "O'Reilly"), 10);
        booksAndQuantities.put(new Book("Analysis, Vol I", "Tao, Terence", "tech", "mathematics", 248, "HBA"), 10);
        booksAndQuantities.put(new Book("Signal and the Noise, The", "Silver, Nate", "tech", "data_science", 233, "Penguin"), 10);
        booksAndQuantities.put(new Book("Python for Data Analysis", "McKinney, Wes", "tech", "data_science", 233, "O'Reilly"), 10);
        booksAndQuantities.put(new Book("Introduction to Algorithms", "Cormen, Thomas", "tech", "computer_science", 234, "MIT Press"), 10);
        booksAndQuantities.put(new Book("Outsider, The", "Camus, Albert", "fiction", "classic", 198, "Penguin"), 10);
        booksAndQuantities.put(new Book("Wealth of Nations, The", "Smith, Adam", "science", "economics", 175, "Random House"), 10);
        booksAndQuantities.put(new Book("Pillars of the Earth, The", "Follett, Ken", "fiction", "novel", 176, "Random House"), 10);
        booksAndQuantities.put(new Book("Mein Kampf", "Hitler, Adolf", "nonfiction", "autobiography", 212, "Rupa"), 10);
        booksAndQuantities.put(new Book("Tao of Physics, The", "Capra, Fritjof", "science", "physics", 179, "Penguin"), 10);
        booksAndQuantities.put(new Book("Farewell to Arms, A", "Hemingway, Ernest", "fiction", "classic", 179, "Rupa"), 10);
        booksAndQuantities.put(new Book("Veteran, The", "Forsyth, Frederick", "fiction", "novel", 177, "Transworld"), 10);
        booksAndQuantities.put(new Book("False Impressions", "Archer, Jeffery", "fiction", "novel", 177, "Pan"), 10);
        booksAndQuantities.put(new Book("Last Lecture, The", "Pausch, Randy", "nonfiction", "autobiography", 197, "Hyperion"), 10);
        booksAndQuantities.put(new Book("Return of the Primitive", "Rand, Ayn", "philosophy", "objectivism", 202, "Penguin"), 10);
        booksAndQuantities.put(new Book("Jurassic Park", "Crichton, Michael", "fiction", "novel", 174, "Random House"), 10);
        booksAndQuantities.put(new Book("Russian Journal, A", "Steinbeck, John", "nonfiction", "history", 196, "Penguin"), 10);
        booksAndQuantities.put(new Book("Freakonomics", "Dubner, Stephen", "science", "economics", 197, "Penguin"), 10);
        booksAndQuantities.put(new Book("Hidden Connections, The", "Capra, Fritjof", "science", "physics", 197, "HarperCollins"), 10);
        booksAndQuantities.put(new Book("Story of Philosophy, The", "Durant, Will", "philosophy", "history", 170, "Pocket"), 10);
        booksAndQuantities.put(new Book("Asami Asami", "Deshpande, P L", "fiction", "novel", 205, "Mauj"), 10);
        booksAndQuantities.put(new Book("Journal of a Novel", "Steinbeck, John", "fiction", "classic", 196, "Penguin"), 10);
        booksAndQuantities.put(new Book("Once There Was a War", "Steinbeck, John", "nonfiction", "history", 196, "Penguin"), 10);
        booksAndQuantities.put(new Book("Moon is Down, The", "Steinbeck, John", "fiction", "classic", 196, "Penguin"), 10);
        booksAndQuantities.put(new Book("Brethren, The", "Grisham, John", "fiction", "novel", 174, "Random House"), 10);
        booksAndQuantities.put(new Book("In a Free State", "Naipaul, V. S.", "fiction", "novel", 196, "Rupa"), 10);
        booksAndQuantities.put(new Book("Catch 22", "Heller, Joseph", "fiction", "classic", 178, "Random House"), 10);
        booksAndQuantities.put(new Book("Complete Mastermind, The", "BBC", "nonfiction", "trivia", 178, "BBC"), 10);
        booksAndQuantities.put(new Book("Dylan on Dylan", "Dylan, Bob", "nonfiction", "autobiography", 197, "Random House"), 10);
        booksAndQuantities.put(new Book("Econometric Analysis", "Greene, W. H.", "tech", "economics", 242, "Pearson"), 10);
        booksAndQuantities.put(new Book("Learning OpenCV", "Bradsky, Gary", "tech", "signal_processing", 232, "O'Reilly"), 10);
        booksAndQuantities.put(new Book("Let Us C", "Kanetkar, Yashwant", "tech", "computer_science", 213, "Prentice Hall"), 10);
        booksAndQuantities.put(new Book("Amulet of Samarkand, The", "Stroud, Jonathan", "fiction", "novel", 179, "Random House"), 10);
        booksAndQuantities.put(new Book("Crime and Punishment", "Dostoevsky, Fyodor", "fiction", "classic", 180, "Penguin"), 10);
        booksAndQuantities.put(new Book("Angels & Demons", "Brown, Dan", "fiction", "novel", 178, "Random House"), 10);
        booksAndQuantities.put(new Book("Argumentative Indian, The", "Sen, Amartya", "nonfiction", "history", 209, "Picador"), 10);
        booksAndQuantities.put(new Book("Sea of Poppies", "Ghosh, Amitav", "fiction", "novel", 197, "Penguin"), 10);
        booksAndQuantities.put(new Book("Idea of Justice, The", "Sen, Amartya", "philosophy", "economics", 212, "Penguin"), 10);
        booksAndQuantities.put(new Book("Raisin in the Sun, A", "Hansberry, Lorraine", "fiction", "novel", 175, "Penguin"), 10);
        booksAndQuantities.put(new Book("All the President's Men", "Woodward, Bob", "nonfiction", "history", 177, "Random House"), 10);
        booksAndQuantities.put(new Book("Prisoner of Birth, A", "Archer, Jeffery", "fiction", "novel", 176, "Pan"), 10);
        booksAndQuantities.put(new Book("Scoop!", "Nayar, Kuldip", "nonfiction", "history", 216, "HarperCollins"), 10);
        booksAndQuantities.put(new Book("Ahe Manohar Tari", "Deshpande, Sunita", "nonfiction", "autobiography", 213, "Mauj"), 10);
        booksAndQuantities.put(new Book("Last Mughal, The", "Dalrymple, William", "nonfiction", "history", 199, "Penguin"), 10);
        booksAndQuantities.put(new Book("Gun Gayin Awadi", "Deshpande, P L", "nonfiction", "misc", 212, "Mauj"), 10);
        booksAndQuantities.put(new Book("Aghal Paghal", "Deshpande, P L", "nonfiction", "misc", 212, "Mauj"), 10);
        booksAndQuantities.put(new Book("Maqta-e-Ghalib", "Garg, Sanjay", "nonfiction", "poetry", 221, "Mauj"), 10);
        booksAndQuantities.put(new Book("Beyond Degrees", "", "philosophy", "education", 222, "HarperCollins"), 10);
        booksAndQuantities.put(new Book("Manasa", "Kale, V P", "nonfiction", "misc", 213, "Mauj"), 10);
        booksAndQuantities.put(new Book("Great Indian Novel, The", "Tharoor, Shashi", "fiction", "novel", 198, "Penguin"), 10);
        booksAndQuantities.put(new Book("O Jerusalem!", "Lapierre, Dominique", "nonfiction", "history", 217, "vikas"), 10);
        booksAndQuantities.put(new Book("City of Joy, The", "Lapierre, Dominique", "fiction", "novel", 177, "vikas"), 10);
        booksAndQuantities.put(new Book("Freedom at Midnight", "Lapierre, Dominique", "nonfiction", "history", 167, "vikas"), 10);
        booksAndQuantities.put(new Book("On Education", "Russell, Bertrand", "philosophy", "education", 203, "Routledge"), 10);
        booksAndQuantities.put(new Book("Free Will", "Harris, Sam", "nonfiction", "psychology", 203, "FreePress"), 10);
        booksAndQuantities.put(new Book("Bookless in Baghdad", "Tharoor, Shashi", "nonfiction", "history", 206, "Penguin"), 10);
        booksAndQuantities.put(new Book("Theory of Everything, The", "Hawking, Stephen", "science", "physics", 217, "Jaico"), 10);
        booksAndQuantities.put(new Book("New Markets & Other Essays", "Drucker, Peter", "science", "economics", 176, "Penguin"), 10);
        booksAndQuantities.put(new Book("Electric Universe", "Bodanis, David", "science", "physics", 201, "Penguin"), 10);
        booksAndQuantities.put(new Book("Burning Bright", "Steinbeck, John", "fiction", "classic", 175, "Penguin"), 10);
        booksAndQuantities.put(new Book("Age of Discontuinity, The", "Drucker, Peter", "nonfiction", "economics", 178, "Random House"), 10);
        booksAndQuantities.put(new Book("Doctor in the Nude", "Gordon, Richard", "fiction", "novel", 179, "Penguin"), 10);
        booksAndQuantities.put(new Book("Identity & Violence", "Sen, Amartya", "philosophy", "philosophy", 219, "Penguin"), 10);
        booksAndQuantities.put(new Book("Beyond the Three Seas", "Dalrymple, William", "nonfiction", "history", 197, "Random House"), 10);
        booksAndQuantities.put(new Book("Talking Straight", "Iacoca, Lee", "nonfiction", "autobiography", 175, ""), 10);
        booksAndQuantities.put(new Book("Phantom of Manhattan, The", "Forsyth, Frederick", "fiction", "classic", 180, ""), 10);
        booksAndQuantities.put(new Book("We the Living", "Rand, Ayn", "fiction", "novel", 178, "Penguin"), 10);
        booksAndQuantities.put(new Book("Selected Short Stories", "", "fiction", "classic", 215, "Jaico"), 10);
        booksAndQuantities.put(new Book("Rationality & Freedom", "Sen, Amartya", "science", "economics", 213, "Springer"), 10);
        booksAndQuantities.put(new Book("Uncommon Wisdom", "Capra, Fritjof", "nonfiction", "anthology", 197, "Fontana"), 10);
        booksAndQuantities.put(new Book("One", "Bach, Richard", "nonfiction", "autobiography", 172, "Dell"), 10);
        booksAndQuantities.put(new Book("Karl Marx Biography", "", "nonfiction", "autobiography", 162, ""), 10);
        booksAndQuantities.put(new Book("To Sir With Love", "Braithwaite", "fiction", "classic", 197, "Penguin"), 10);
        booksAndQuantities.put(new Book("Half A Life", "Naipaul, V S", "fiction", "novel", 196, ""), 10);
        booksAndQuantities.put(new Book("Discovery of India, The", "Nehru, Jawaharlal", "nonfiction", "history", 230, ""), 10);
        booksAndQuantities.put(new Book("Apulki", "Deshpande, P L", "nonfiction", "misc", 211, ""), 10);
        booksAndQuantities.put(new Book("Unpopular Essays", "Russell, Bertrand", "philosophy", "philosophy", 198, ""), 10);
        booksAndQuantities.put(new Book("Deceiver, The", "Forsyth, Frederick", "fiction", "novel", 178, ""), 10);
        booksAndQuantities.put(new Book("Char Shabda", "Deshpande, P L", "nonfiction", "misc", 214, ""), 10);
        booksAndQuantities.put(new Book("Rosy is My Relative", "Durrell, Gerald", "fiction", "novel", 176, ""), 10);
        booksAndQuantities.put(new Book("Moon and Sixpence, The", "Maugham, William S", "fiction", "classic", 180, ""), 10);
        booksAndQuantities.put(new Book("Political Philosophers", "", "philosophy", "politics", 162, ""), 10);
        booksAndQuantities.put(new Book("Trembling of a Leaf, The", "Maugham, William S", "fiction", "novel", 205, ""), 10);
        booksAndQuantities.put(new Book("Doctor on the Brain", "Gordon, Richard", "fiction", "novel", 204, ""), 10);
        booksAndQuantities.put(new Book("Pattern Classification", "Duda, Hart", "tech", "data_science", 241, ""), 10);
        booksAndQuantities.put(new Book("From Beirut to Jerusalem", "Friedman, Thomas", "nonfiction", "history", 202, ""), 10);
        booksAndQuantities.put(new Book("Code Book, The", "Singh, Simon", "science", "mathematics", 197, ""), 10);
        booksAndQuantities.put(new Book("Age of the Warrior, The", "Fisk, Robert", "nonfiction", "history", 197, ""), 10);
        booksAndQuantities.put(new Book("Final Crisis", "", "fiction", "comic", 257, ""), 10);
        booksAndQuantities.put(new Book("Killing Joke, The", "", "fiction", "comic", 283, ""), 10);
        booksAndQuantities.put(new Book("Flashpoint", "", "fiction", "comic", 265, ""), 10);
        booksAndQuantities.put(new Book("Batman Earth One", "", "fiction", "comic", 265, ""), 10);
        booksAndQuantities.put(new Book("Crisis on Infinite Earths", "", "fiction", "comic", 258, ""), 10);
        booksAndQuantities.put(new Book("Superman Earth One - 1", "", "fiction", "comic", 259, ""), 10);
        booksAndQuantities.put(new Book("Superman Earth One - 2", "", "fiction", "comic", 258, ""), 10);
        booksAndQuantities.put(new Book("Death of Superman, The", "", "fiction", "comic", 258, ""), 10);
        booksAndQuantities.put(new Book("History of the DC Universe", "", "fiction", "comic", 258, ""), 10);
        booksAndQuantities.put(new Book("Batman: The Long Halloween", "", "fiction", "comic", 258, ""), 10);
        booksAndQuantities.put(new Book("Life in Letters, A", "Steinbeck, John", "nonfiction", "autobiography", 196, ""), 10);
        booksAndQuantities.put(new Book("Information, The", "Gleick, James", "science", "mathematics", 233, ""), 10);
        booksAndQuantities.put(new Book("Power Electronics - Rashid", "Rashid, Muhammad", "tech", "computer_science", 235, ""), 10);
        booksAndQuantities.put(new Book("Power Electronics - Mohan", "Mohan, Ned", "tech", "computer_science", 237, ""), 10);
        booksAndQuantities.put(new Book("Neural Networks", "Haykin, Simon", "tech", "data_science", 240, ""), 10);
        booksAndQuantities.put(new Book("Grapes of Wrath, The", "Steinbeck, John", "fiction", "classic", 196, ""), 10);
        booksAndQuantities.put(new Book("Vyakti ani Valli", "Deshpande, P L", "nonfiction", "misc", 211, ""), 10);
        booksAndQuantities.put(new Book("Mossad", "Baz-Zohar, Michael", "nonfiction", "history", 236, ""), 10);
        booksAndQuantities.put(new Book("Jim Corbett Omnibus", "Corbett, Jim", "nonfiction", "history", 223, ""), 10);
        booksAndQuantities.put(new Book("Batatyachi Chal", "Deshpande P L", "fiction", "novel", 200, ""), 10);
        booksAndQuantities.put(new Book("Hafasavnuk", "Deshpande P L", "fiction", "novel", 211, ""), 10);
        booksAndQuantities.put(new Book("Urlasurla", "Deshpande P L", "fiction", "novel", 211, ""), 10);
        booksAndQuantities.put(new Book("Pointers in C", "Kanetkar, Yashwant", "tech", "computer_science", 213, ""), 10);
        booksAndQuantities.put(new Book("Design with OpAmps", "Franco, Sergio", "tech", "computer_science", 240, ""), 10);
        booksAndQuantities.put(new Book("Think Complexity", "Downey, Allen", "tech", "data_science", 230, ""), 10);
        booksAndQuantities.put(new Book("Devil's Advocate, The", "West, Morris", "fiction", "novel", 178, ""), 10);
        booksAndQuantities.put(new Book("Ayn Rand Answers", "Rand, Ayn", "philosophy", "objectivism", 203, ""), 10);
        booksAndQuantities.put(new Book("Philosophy: Who Needs It", "Rand, Ayn", "philosophy", "objectivism", 171, ""), 10);
        booksAndQuantities.put(new Book("Broca's Brain", "Sagan, Carl", "science", "physics", 174, ""), 10);
        booksAndQuantities.put(new Book("Men of Mathematics", "Bell, E T", "science", "mathematics", 217, ""), 10);
        booksAndQuantities.put(new Book("Arthashastra, The", "Kautiyla", "philosophy", "philosophy", 214, ""), 10);
        booksAndQuantities.put(new Book("We the People", "Palkhivala", "philosophy", "philosophy", 216, ""), 10);
        booksAndQuantities.put(new Book("We the Nation", "Palkhivala", "philosophy", "philosophy", 216, ""), 10);
        booksAndQuantities.put(new Book("Courtroom Genius, The", "Sorabjee", "nonfiction", "autobiography", 217, ""), 10);
        booksAndQuantities.put(new Book("Dongri to Dubai", "Zaidi, Hussain", "nonfiction", "history", 216, ""), 10);
        booksAndQuantities.put(new Book("City of Djinns", "Dalrymple, William", "nonfiction", "history", 198, ""), 10);
        booksAndQuantities.put(new Book("India's Legal System", "Nariman", "nonfiction", "legal", 177, ""), 10);
        booksAndQuantities.put(new Book("More Tears to Cry", "Sassoon, Jean", "fiction", "novel", 235, ""), 10);
        booksAndQuantities.put(new Book("Ropemaker, The", "Dickinson, Peter", "fiction", "novel", 196, ""), 10);
        booksAndQuantities.put(new Book("Angels & Demons", "Brown, Dan", "fiction", "novel", 170, ""), 10);
        booksAndQuantities.put(new Book("Judge, The", "", "fiction", "novel", 170, ""), 10);
        booksAndQuantities.put(new Book("Attorney, The", "", "fiction", "novel", 170, ""), 10);
        booksAndQuantities.put(new Book("Prince, The", "Machiavelli", "fiction", "classic", 173, ""), 10);
        booksAndQuantities.put(new Book("Eyeless in Gaza", "Huxley, Aldous", "fiction", "novel", 180, ""), 10);
        booksAndQuantities.put(new Book("Tales of Beedle the Bard", "Rowling, J K", "fiction", "novel", 184, ""), 10);
        booksAndQuantities.put(new Book("Girl who played with Fire", "Larsson, Steig", "fiction", "novel", 179, ""), 10);
        booksAndQuantities.put(new Book("Batman Handbook", "", "fiction", "comic", 270, ""), 10);
        booksAndQuantities.put(new Book("Murphy's Law", "", "philosophy", "psychology", 178, ""), 10);
    }

    public void showCurrentBooks() {
        List<String> header = List.of("Book No", "Title", "Author", "Genre", "SubGenre", "height", "Publisher", "Quantities");

        List<List<String>> rows = new ArrayList<>();
        int bookNo = 1;

        for (Map.Entry<Book, Integer> bookIntegerEntry : booksAndQuantities.entrySet()) {
            Book book = bookIntegerEntry.getKey();
            int quantity = bookIntegerEntry.getValue();
            rows.add(List.of(String.valueOf(bookNo++), book.getTitle(), book.getAuthor(), book.getGenre(), book.getSubGenre(), String.valueOf(book.getHeight()), book.getPublisher(), String.valueOf(quantity)));
        }
        TableFormat.show(header, rows);
    }

    public void issueBook() {
        showCurrentBooks();
        System.out.println();
        System.out.print("Enter book number you want to issue > ");
        int bookNo = sc.nextInt();
        if (bookNo <= 0 || bookNo > 150) {
            System.out.println("Book not found");
        } else {
            Book book = (Book) booksAndQuantities.keySet().toArray()[bookNo - 1];
            System.out.println("You have issued book : " + book.getTitle());
            booksAndQuantities.put(book, booksAndQuantities.get(book) - 1);
        }
    }

    public void returnBook() {
        showCurrentBooks();
        System.out.println();
        System.out.print("Enter book number you want to return > ");
        int bookNo = sc.nextInt();
        if (bookNo <= 0 || bookNo > 150) {
            System.out.println("Book not found");
        } else {
            Book book = (Book) booksAndQuantities.keySet().toArray()[bookNo - 1];
            System.out.println("You have returned book : " + book.getTitle());
            booksAndQuantities.put(book, booksAndQuantities.get(book) + 1);
        }
    }
}
