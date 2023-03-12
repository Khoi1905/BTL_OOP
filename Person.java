public class Person {
    private String name;
    private String address;

    /**
     * hi method.
     *
     * @return this
     */
    public String getName() {
        return name;
    }

    /**
     * hi method.
     *
     * @return address
     */
    public String getAddress() {
        return address;
    }

    /**
     * hi method.
     *
     * @param address is diachi
     */
    public void setAddress(String address) {
        this.address = address;
    }

    /**
     * hi method.
     *
     * @return this
     */
    public String toString() {
        return "Person["
                + "name=" + name
                + ",address=" + address
                + ']';
    }

    /**
     * contructor method.
     *
     * @param name    is name
     * @param address is address
     */
    public Person(String name, String address) {
        this.name = name;
        this.address = address;
    }
}