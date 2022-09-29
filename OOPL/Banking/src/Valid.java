public final class Valid {

    private static final boolean validation = true;

    static boolean isValidName(String name) { // Name validation
        if (!validation)
            return true;
        return name.matches("^[\\p{L} .'-]+$");
    }

    static boolean isValidAge(int age) {
        if (!validation)
            return true;
        return age >= 18 && age < 120;
    }

    static boolean isValidMobile(String mobileNo) { // Mobile number validation
        if (!validation)
            return true;
        return mobileNo.matches("[0-9]{10}");
    }

    static boolean isValidPassword(int password) {
        if (!validation)
            return true;
        return password >= 1000 && password <= 9999;
    }

    static boolean isValidAccNo(int accNo) {
        return !Database.isAccountExist(accNo);
    }
}
