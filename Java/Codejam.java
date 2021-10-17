
import java.util.Arrays;
import java.util.Scanner;

public class Codejam {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int test_cases = sc.nextInt();
        int t = 1;
        while(t <= test_cases) {
            int n = sc.nextInt();
            int a[] = new int[n];
            int i=0;

            for (i=0; i<a.length; i++) {
                a[i] = sc.nextInt();
            }

            int jValue = smallestNum(a, 0);
            System.out.println(reverseSort(a, 0, jValue));
        
            t++;
        }
        sc.close();
    }

    static String reverseSort(int arr[], int m, int n) {
        int count=0;

        if (arr[n] < arr[m]) {
            count ++;
            int temp = arr[m];
            arr[m] = arr[n];
            arr[n] = temp;
            m++;
            int jValue = smallestNum(arr, m);
            reverseSort(arr, m, jValue);
            System.out.println(m+" "+n);
        }
        //System.out.println("i= " +m+"\n"+"j= " +n);
        return Arrays.toString(arr);
    }

    static int smallestNum(int arr[], int m) {
        int temp=0, j=0;
        for(int i = m; i<=arr.length; i++ ){
            for(j = i+1; j<arr.length; j++){
               if(arr[i]>arr[j]){
                temp = j;
               }
            }
         }
        return temp;
    }
}