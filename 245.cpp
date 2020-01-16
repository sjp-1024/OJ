#include<iostream>
using namespace std;
#define MAX_N 100000
int arr[MAX_N+5];
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++) cin>>arr[i];
	nth_element(arr,arr+n/2,arr+2,arr+n);
	int pos=arr[n/2],ans=0;
	for(int i=0;i<n;i++){
		ans+=abs(abs[i]-pos);
	}
	cout<<ans<<endl;
	return 0;
}
