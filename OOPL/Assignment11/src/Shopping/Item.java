package Shopping;

public class Item {
    private String productUPCCode;
    private String productName;
    private float productPrice;

    public Item(String productUPCCode, String productName, float productPrice) {
        this.productUPCCode = productUPCCode;
        this.productName = productName;
        this.productPrice = productPrice;
    }

    public Item() {
        this("", "", 0);
    }

    public String getProductUPCCode() {
        return productUPCCode;
    }

    public void setProductUPCCode(String productUPCCode) {
        this.productUPCCode = productUPCCode;
    }

    public String getProductName() {
        return productName;
    }

    public void setProductName(String productName) {
        this.productName = productName;
    }

    public float getProductPrice() {
        return productPrice;
    }

    public void setProductPrice(float productPrice) {
        this.productPrice = productPrice;
    }
}
