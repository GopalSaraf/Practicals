import Database.AccountsDatabase;
import Helper.CustomerHelper.LoggedInPage;
import Helper.MainPage;

public class Main {
    public static void main(String[] args) {
//        new MainPage();
        new LoggedInPage(AccountsDatabase.getAccount(4036));
    }
}