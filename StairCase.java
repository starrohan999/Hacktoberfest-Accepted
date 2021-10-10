import java.util.Scanner;

public class StairCase {
	public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
		int hashRow = sc.nextInt();
        int i=0, j=0;

        for (i=0; i<hashRow; i++) {   
            for (j=hashRow-i-2; j>=0; j--) {    
                    System.out.print(" ");   
                }   
            for (j=0; j<=i; j++ ) {         
                System.out.print("#");   
            }
        System.out.println();   
	    }
    }
}
