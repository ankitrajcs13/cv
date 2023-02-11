#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y; cin>>x>>y;
	    
	    int profit = (10 * x)/100;
	    int t = profit + x;
	    int d = x-y;
	    // cout<<t-d<<endl;
        cout<<profit<<endl;
	}
	return 0;
}
