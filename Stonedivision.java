import java.util.*;

public class Stonedivision {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        long n = in.nextLong();
        int m = in.nextInt();
        long[] s = new long[m];
        for(int i = 0; i < m; i++) {
            s[i] = in.nextLong();
        }
        System.out.println(solution(n, s));

        in.close();
    }
    private static String solution(long n, long[] s) {
        Map<Long, Long> map = new HashMap<>();
        map.put(n, 1L);
        
        int lose = solve(map, s, 1);
        if(lose % 2 == 1) {
            return "Second";
        } else {
            return "First";
        }
    }
    
    private static int solve(Map<Long, Long> map, long[] s, int round) {
        Set<long[]> solutions = new HashSet<>();
        for(long k: map.keySet()) {
            for(long d: s) {
               if(k % d == 0) {
                   long[] item = new long[2];
                   item[0] = k;
                   item[1] = d;
                   solutions.add(item); 
               }
            }
        }
        if(solutions.isEmpty()) {
            return round;
        }
        
        for(long[] sol: solutions) {
            Map<Long,Long> map2 = new HashMap<>(map);
            if(map2.get(sol[0]) > 1) {
                map2.put(sol[0], map2.get(sol[0])-1);
            } else {
                map2.remove(sol[0]);
            }
            long k = sol[0]/sol[1];
            long num = sol[1] % 2;
            
            if(map2.containsKey(k)) {
                map2.put(k, map2.get(k)+num);
            } else {
                if(num > 0) {
                    map2.put(k, num);
                }
            }
            //System.out.println(map2.toString());
            int lose = solve(map2, s, round+1);
            if(lose % 2 != round % 2) {
                return round+1;
            }
        }
        return round;
    }
}
