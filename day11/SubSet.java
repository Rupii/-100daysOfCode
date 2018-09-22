import java.util.Vector;

class SubSet {
    static Vector v = new Vector();

    static void search(int k, int n) {
        if (k == n) {
            System.out.println(v);

        } else {
            search(k + 1, n);
            v.add(k);
            search(k + 1, n);
            v.remove(v.size() - 1);
        }
    }

    public static void main(String[] args) {
        search(0, 3);
    }
}