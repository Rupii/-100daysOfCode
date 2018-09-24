import java.util.Vector;

class SubSet {

    // static void search(int k, int n) {
    // if (k == n) {
    // System.out.println(v);

    // } else {
    // search(k + 1, n);
    // v.add(k);
    // search(k + 1, n);
    // v.remove(v.size() - 1);
    // }
    // }

    public static void main(String[] args) {
        int n = 4;
        for (int b = 0; b < (1 << n); b++) {
            Vector v = new Vector();

            for (int i = 0; i < n; i++) {
                if ((b & (1 << i)) >= 0)
                    v.add(i);
            }
        }
    }
}