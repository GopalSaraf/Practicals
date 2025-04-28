import ReverseModule.ReversePOA;
import java.lang.String;

public class ReverseImpl extends ReversePOA {
    ReverseImpl() {
        super();
        System.out.println("Reverse object created");
    }

    public String reverseString(String str) {
        StringBuffer buffer = new StringBuffer(str);
        buffer.reverse();
        return "Reversed: " + buffer.toString();
    }
}
