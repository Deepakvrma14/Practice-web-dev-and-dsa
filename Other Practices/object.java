public class object {
    public static class obj {
        public int a;
        public int b;
        public obj(int a, int b) {
            this.a = a;
            this.b = b;
        }
    }

    public static void main(String[] args) {
        obj t = new obj(1, 2);
        System.out.println(t.a);
    }
}
