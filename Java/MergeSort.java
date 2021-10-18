import java.util.Arrays;

public class MergeSort {

    public static void main(String[] args) {
        int[] arr = {1, 3, 5, 10, 2, 30, 20, 15, 12, 8};
        
        MergeS(arr);

        System.out.println(Arrays.toString(arr));
    }

    private static void MergeS(int[] arr) 
    {
        if(arr.length < 2) return;

        int mid = arr.length / 2;

        int[] left = new int[mid];
        int[] right = new int[arr.length - mid];

        for(int i = 0; i < mid; i++)
        {
            left[i] = arr[i];
        }

        for(int i = mid; i < arr.length; i++)
        {
            right[i - mid] = arr[i]; // i = mid , 
        }

        MergeS(left);
        MergeS(right);

        MergeIt(left, right, arr, left.length, right.length);
    }

    private static void MergeIt(int[] left, int[] right, int[] arr, int L, int R) 
    {
        int i = 0, j = 0, k = 0;

        while(i < L && j < R)
        {
            if(left[i] <= right[j])
            {
                arr[k] = left[i];
                i++;
            }
            else{
                arr[k] = right[j];
                j++;
            }

            k++;
        }

        //exhausted
        if( i < L)
        {
            while(i < L)
            {
                arr[k] = left[i];
                i++; k++;
            }
        }
        else{
            while(j < R)
            {
                arr[k] = right[j];
                j++; k++;
            }
        }
    }
    
}
