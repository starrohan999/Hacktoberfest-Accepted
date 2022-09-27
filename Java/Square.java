import java.util.Scanner;

public class Square {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int testCases = sc.nextInt();
        int t=1;

        while (t <= testCases) {

            long b = sc.nextInt();
            long e = sc.nextInt();
            long count=0;

            for (long i=b; i<=e;i++) {
                int sqrt = (int) Math.sqrt(i);

                if (sqrt*sqrt == i) {
                    i=i+sqrt+sqrt;
                    count++;
                }
            }
            System.out.println(count);
            t++;
        }
        sc.close();
    }
}

