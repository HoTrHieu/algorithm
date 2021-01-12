//http://codeforces.com/problemset/problem/169/A
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
//giam dan: greater<int>()); 
 
using namespace std;
 
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    vector<int> vec;
    
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        vec.push_back(temp);
    }
    
    sort(vec.begin(),vec.begin()+vec.size());
    cout<<vec[b]-vec[b-1];
    
    return 0;
}