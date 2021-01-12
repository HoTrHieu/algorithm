//http://codeforces.com/problemset/problem/731/A
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
 
int main()
{
    string str;
    cin >> str;
    
    char curStr = 'a';
    int count = 0;
    for(int i=0; i< str.length(); i++){
        count += min(abs(str[i] - curStr), 26- abs(str[i] - curStr));
        curStr = str[i];
    }
    
    
    cout<<count;
 
    return 0;
}