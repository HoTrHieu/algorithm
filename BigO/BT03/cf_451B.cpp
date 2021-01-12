//http://codeforces.com/problemset/problem/451/B
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
//giam dan: greater<int>()); 
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    vector<int> vec;
    
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        vec.push_back(temp);
    }
    
    int indexS = 0;
    int indexE = 0;
    for(int i = 0;i<vec.size()-1;i++){
        if(vec[i]>vec[i+1]){
            indexS = i;
            break;
        }
    }
    for(int i = vec.size()-1;i>=0;i--){
        if(vec[i]<vec[i-1]){
            indexE = i;
            break;
        }
    }
    
    //cách 1
    reverse(vec.begin()+indexS,vec.begin()+indexE +1);
    
    for(int i = indexS; i < indexE; i++){
        if(vec[i]>vec[i+1]){
            cout<<"no";
            return 0;
        }
    }

    //cách 2
    /*
    for(int i = indexS; i< indexE; i++){
        if(vec[i] < vec[i+1]){
            cout<<"no";
            return 0;
        }
    }
    */

    cout<<"yes"<<endl<<indexS+1<<" "<<indexE+1;
    return 0;
}