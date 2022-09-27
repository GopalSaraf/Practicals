public class Main {
    public static void main(String[] args) {
        Database.addAccount(1, 123, 1000, "Name1", 20, "1234");
        Database.addAccount(2, 234, 2000, "Name2", 19, "5678");

        var map = Database.getAccountInfo(2);

        assert map != null;
        String[] key = map.keySet().toArray(new String[0]);

        String[] value = map.values().toArray(new String[0]);

        for (int i = 0; i < map.size(); i++) {
            System.out.println("{" + key[i] + "=" + value[i] + "}");
        }

        Database.updateBalance(2, 5000);

        var mapp = Database.getAccountInfo(2);

        assert mapp != null;
        String[] keyy = mapp.keySet().toArray(new String[0]);

        String[] valuee = mapp.values().toArray(new String[0]);

        for (int i = 0; i < mapp.size(); i++) {
            System.out.println("{" + keyy[i] + "=" + valuee[i] + "}");
        }
    }
}