import Database.AccountsDatabase;
import Helper.CustomerHelper.LoggedInPage;
import Helper.MainPage;

public class Main {
    public static void main(String[] args) {
        new LoggedInPage(AccountsDatabase.getAccount(4036));
    }
}