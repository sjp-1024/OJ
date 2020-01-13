#include<iostream>
using namespace std;
 
int f (int);
 
int main (){
	  int x;
	    cin >> x;
		  
		  long long ans;
		    ans = f (x);
			  
			  cout << ans << endl;
			    return 0;
}
 
int f (int x){
	  if (x <= 0) return 0;
	    if (x == 1) return 1;
		  if (x % 2 == 0) return 3 * f (x / 2) - 1;
		    return 3 * f ((x + 1) / 2) - 1;
}

