import java.util.Arrays;
import java.util.Scanner;

class Hackerrank {
   public static void main(String[] args) {
       Scanner sc = new Scanner(System.in);

       int i=0;
       int num = sc.nextInt();

       int arr[] = new int[num];

       for (i=0; i<num; i++) {
           arr[i] = sc.nextInt();
       }

       System.out.println(findSmallest(arr));

       sc.close();
   }

   static int smallNum(int a[]) {
       int index=0;
    for (int i=0; i<a.length-1; i++) {
        for (int j=i+1; j<a.length; j++) {
            
            if (a[j] < a[i]) {
                index = j;
                }
            }
    }
    return index;
   }

   static void swapNum(int a[]) {
      int temp=0, count=0;

        for (int i=0; i<a.length-1; i++) {
            int smallValue = findSmallest(a);
                // for (int j=i+1; j<a.length; j++) {
                    
                //     if (a[j] < a[i]) {
                //         temp = a[j];
                //         a[j] = a[i];
                //         a[i] = temp;
                //         }
                //     }

                if (a[i] < a[smallValue]) {
                    temp = a[i];
                    a[i] = a[smallValue];
                    a[smallValue] = temp;
                    count++;
                }
             }
    System.out.println(count);
    System.out.println(Arrays.toString(a));
   }

   public static int findSmallest(int [] arr1) {
    int index = 0;
    int min = arr1[index];

    for (int i=1; i<arr1.length; i++) {
    
        if (arr1[i] < min) {
            min = arr1[i];
            index = i;
        }
    }
    return index;
}
}
