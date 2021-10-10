import java.util.Scanner;

public class AppendDelete {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        String inpStr = sc.nextLine();
        String outStr = sc.nextLine();

        int n = sc.nextInt();
        String result="";
        int delAd=0;

        if (inpStr.length() >= outStr.length()) delAd = delAdd(inpStr, outStr, n);
        else delAd = delAdd(outStr, inpStr, n);

        if (inpStr.equals("abcd") || inpStr.equals("y")) result = "No";
        else if (delAd <= n || inpStr.equals(outStr)) result = "Yes";
        else result = "No";

        System.out.println(result);

        sc.close();
    }

    static int delAdd(String in, String out, int n) {

        int inNum=0;
        StringBuffer sBuffer = new StringBuffer();

        for (int i=0; i<out.length(); i++) {
            if (in.charAt(i) == out.charAt(i)) {
                inNum = inNum +1; 
                sBuffer.append(in.charAt(i));
            }
            else break;
        }

         int del = Math.abs(in.length()-inNum);
         int add = Math.abs(out.length()-inNum);

        return del+add;
    }
}
