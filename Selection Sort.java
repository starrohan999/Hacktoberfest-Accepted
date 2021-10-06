import java.util.Scanner;

/**
  * Reads in 10 numbers, invokes selection sort method, and displays sorted numbers
*/
public class Ex7_20 {
  public static void main(String[] args) {
    Scanner s = new Scanner(System.in); //scanner class for inputs
    
    double[] inputs = new double[10]; //array variable for 10 numbers
    
    System.out.println("Enter ten numbers: ");
    
    //for loop to assign inputs to array
    for(int i = 0; i < 10; i++) {
      inputs[i] = s.nextDouble();
    } 
    //call selection sort method
    selectionSort(inputs);
    
    //for loop to print out numbers from array 
    for(int j = 0; j < 10; j++){
      System.out.println(inputs[j]);
    }
  }
  /**
    * selectionSort
    * Sorts numbers using selection sort method (altered to find biggest number and swap with last)
  */
  public static void selectionSort(double[] list) {
    //for loops  to run through array and find maximum value
    for(int i = list.length - 1; i >= 0; i--) {
      double currentMax = list[i]; //current max set to size of list
      int currentMaxIndex = i; //index of current max set to first index
      
      for(int j = i - 1; j >= 0; j--) {
        if(currentMax < list[j]) { //if current max is less than next value
          currentMax = list[j]; //current max now equals this value
          currentMaxIndex = j; //index of current max set to this index
        }
      }
      //swap list[i] with list[currentMaxIndex] if necessary
      if(currentMaxIndex != i) {
        list[currentMaxIndex] = list[i];
        list[i] = currentMax;
      }
    }
  }
}