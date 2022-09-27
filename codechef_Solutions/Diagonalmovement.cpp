//                          Problem link : https://www.codechef.com/START14C/problems/DIAGMOVE
//Problem Statment : Given the coordinates (x,y) of a point in 2-D plane. Find if it is possible to reach (x,y) from (0,0). The only possible moves from any coordinate (i,j) are as follows:

/*
--Go to the point with coordinates (i+1,j+1).
--Go to the point with coordinates (i+1,j−1)
--Go to the point with coordinates (i−1,j+1).
--Go to the point with coordinates (i−1,j−1).
*/

//Input Format : 
/*
---Sample Input 1 
6
0 2
1 2
-1 -3
-1 0
-3 1
2 -1
---Sample Output 1 
YES
NO
YES
NO
YES
NO
*/
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int sum=x+y;
	    if(sum%2==0){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
