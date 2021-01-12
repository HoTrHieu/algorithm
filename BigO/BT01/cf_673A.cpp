//http://codeforces.com/problemset/problem/673/A
//http://codeforces.com/problemset/problem/673/A
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
 
int main()
{
    int n;
    cin >>n;
    
    vector<int> vec;
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        vec.push_back(temp);
    }
    vec.push_back(90);
    
    int count =0;
    int befoVal = 0;
    for(int i = 0;i< vec.size();i++){
        int subVal = vec[i] - befoVal;
        if(subVal > 15){
            count += 15;
            break;
        }else{
            count += subVal;
            befoVal = vec[i];
        }
    }
    
    cout << count;
 
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
 
// int main() {
//   int b;
//   int c;
  
//   cin >> b;
//   cin >> b;
  
//   while (b != c || c - b <= 15) {
//     cin >> c;
    
//     swap (b, c);
//   }
  
//   if (b == c) {
//     cout << 90;
//     return 0;
//   }
  
//   cout << b+15;
  
// 	return 0;
// }