import java.math.BigInteger;
import java.util.Scanner;

/**
 * Created by MD AZIZUL HAKIM on 16/02/2017.
 */
public class Main {

    static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {

        BigInteger a1, d1, k1, a2, d2, k2, sum, sum1, sum2; //div1, plus1, mul1, mul2, sub1, mul3, mul4, mul5, mul6, div2, sub2, test1, test2;
        int T = input.nextInt();

        for (int i = 1; i <= T; i++) {
            a1 = input.nextBigInteger();
            d1 = input.nextBigInteger();
            k1 = input.nextBigInteger();
            a2 = input.nextBigInteger();
            d2 = input.nextBigInteger();
            k2 = input.nextBigInteger();

            BigInteger x = BigInteger.valueOf(2);
            // BigInteger mod = BigInteger.valueOf(100007);

            BigInteger y = BigInteger.valueOf(1);

            // final long startTime = System.nanoTime();

            sum1 = (k1.multiply((a1.multiply(x)).add((k1.subtract(y)).multiply(d1)))).divide(x);
            sum2 = (k2.multiply((a2.multiply(x)).add((k2.subtract(y)).multiply(d2)))).divide(x);
            sum = sum1.add(sum2);

            System.out.println(sum);

            //  final long duration = System.nanoTime() - startTime;
            // System.out.println(duration);


            // div1 = k1.divide(x);
          /*  mul1 = a1.multiply(x).mod(mod);
            sub1 = k1.subtract(y);
            mul2 = sub1.multiply(d1).mod(mod);
            mul3 = mul1.add(mul2);
            test1 = k1.multiply(mul3).mod(mod);


            sum1 = test1.divide(x);

            // System.out.println(sum1);

            // div2 = k2.divide(x);
            mul4 = a2.multiply(x).mod(mod);
            sub2 = k2.subtract(y);
            mul5 = sub2.multiply(d2).mod(mod);
            mul6 = mul4.add(mul5);
            test2 = k2.multiply(mul6).mod(mod);
            sum2 = test2.divide(x);

            // System.out.println(sum2);

            sum = sum1.add(sum2);

            System.out.println(sum); */

            // System.out.println(sum1);


        }
    }
}
