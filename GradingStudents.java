import java.util.Scanner;

class GradingStudents {
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        int arr[] = new int[n];

        for (int i=0; i<arr.length; i++) {
            arr[i] = sc.nextInt();

            int temp = compare(arr[i]);
            arr[i] = temp;
        }

        System.out.println("Ans: ");

        for (int i : arr) {
            System.out.println(i);
        }
        sc.close();
    }

    static int compare(int ele) {
        int res=0;
        int temp=ele;
        while (temp%5!=0) 
            temp=temp+1;

        if (temp-ele < 3) res = temp;
        else if (temp-ele == 3 || temp-ele == 4) res = ele;
        
        if (temp<40) res = ele;
        return res;
    }
}