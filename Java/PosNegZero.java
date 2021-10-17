import java.math.RoundingMode;
import java.text.DecimalFormat;
import java.util.Scanner;

public class PosNegZero {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        
        DecimalFormat df = new DecimalFormat("#.000000");
        df.setRoundingMode(RoundingMode.CEILING);

        int n = sc.nextInt();
        double posResult=0, negResult=0, zeroResult=0;

        int[] a = new int[n];

        for (int i=0; i<a.length; i++) {
            a[i] = sc.nextInt();
        }

        for (int i=0; i<a.length; i++) {
            if (a[i] > 0) {
                posResult++;
            }
            else if (a[i] < 0) {
                negResult++;
            }
            else {
                zeroResult ++;
            }
        }

        System.out.println(df.format(posResult/n) +"\n" +df.format(negResult/n)
                            +"\n" +df.format(zeroResult/n));

        sc.close();
    }
}
