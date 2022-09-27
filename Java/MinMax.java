import java.util.Scanner;

public class MinMax {
	public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long a[] = new long[5];
        for (int i = 0; i < 5; i++) {
            a[i] = sc.nextLong();
        }
        long min = 0, max = 0;
        for (int i = 0; i < 5; i++) {
            long minfunc = sumOfNumbers(i, a);
            long maxfunc = sumOfNumbers(i, a);
            if (i == 0) {
                min = minfunc;
                max = maxfunc;
            }
            if (minfunc < min) {
                min = minfunc;
            }
            if (maxfunc > max) {
                max = maxfunc;
            }
        }
        System.out.println(min+ " " +max);
    }
 
    static long sumOfNumbers(int a, long[] arr) {
        long sum = 0;
        for (int i = 0; i < 5; i++) {
            if (a != i) {
                sum += arr[i];
            }
        }
        return sum;
    }

}
