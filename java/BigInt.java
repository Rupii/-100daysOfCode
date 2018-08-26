
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.math.BigInteger;
import java.util.*;

class BigInt {
    static BigInteger fact(int N) {
        BigInteger f = BigInteger.ONE;
        for (int i = 1; i < N; i++)
            f = f.multiply(BigInteger.valueOf(i));
        return f;
    }

    public static void main(String[] args) throws Exception {
        // Scanner sc = new Scanner(System.in);
        BufferedReader b = new BufferedReader(new InputStreamReader(System.in));
        int s = Integer.parseInt(b.readLine());

        System.out.println(fact(s));
    }
}