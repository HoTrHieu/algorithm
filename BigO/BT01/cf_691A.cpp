//http://codeforces.com/problemset/problem/691/A
#include <iostream>
#include <vector>
using namespace std;
 
int c[2]{0,0};
 
int main(){
	int n;
	cin>>n;
	
	for(int x;cin>>x;c[x]++);
	cout<<((n==1? c[1]:c[0]==1)? "YES":"NO");

/*
	int n;
    cin >> n;
    vector<int> a;
    int temp;
    for(int i = 0; i<n;i++){
        cin>>temp;
        a.push_back(temp);
    }
    
    if(n==1){
        a[0] == 1 ? cout<<"YES": cout<<"NO";
        return 0;
    }
    
    int count=0;
    for(int i=0;i<n;i++){
        count = a[i] == 0 ? (count + 1) : count;
    }
    
    count == 1 ? cout<< "YES": cout<< "NO";
*/

    return 0;
}