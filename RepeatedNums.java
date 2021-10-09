import java.util.*;

public class RepeatedNumbers {
    public static void main(String[] args){
        
        Scanner sc = new Scanner(System.in);
        
        Set<Integer> repeatedSet = new HashSet<>();
        Map<Integer, Integer> repeatMap = new HashMap<>();
        int count=0;
        
        int size = sc.nextInt();
        
        int array[] = new int[size];
        
        for(int i=0; i<array.length; i++) {
            array[i] = sc.nextInt();
        }
        
        Arrays.sort(array);
        
        for (int i=0; i<array.length-1; i++) {
            if (array[i] == array[i+1]) {
                repeatedSet.add(array[i]);
                count++;
                repeatMap.put(array[i], count);
            }
            else {
                count = 0;
            }
        }
        
        System.out.println("No. of repeated elements: "+repeatedSet);
        System.out.println("Count of repeated elements: "+repeatMap);
    }  
}