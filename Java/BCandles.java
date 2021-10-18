import java.util.Scanner;

class BCandles {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        int a[] = new int[n];
        int big = 0;
        for(int i=0; i < n; i++){
            a[i] = sc.nextInt();

            if(a[i] > big){
                big = a[i];
            }
        }
 
            int count = 0;
            for(int i=0; i<n; i++){
                if(big == a[i])
                    count++;
            }
            System.out.println(count);

        sc.close();
    }
}
