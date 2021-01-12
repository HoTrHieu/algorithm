//http://codeforces.com/problemset/problem/224/B
#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    int n,k;
    cin>>n>>k;
    
    vector<int> vec;
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        vec.push_back(temp);
    }
    
    //mảng đếm số lượng của mỗi phần tử
    int cmt[100001] = {0};
    //đếm số phần tử khác nhau
    int count = 0;
    
    int start =0;
    for(int end = 0; end < n; end ++){
        cmt[vec[end]]++;
        if(cmt[vec[end]] == 1){
            count ++;
        }
        
        //đã tìm xong end
        //đi tìm start
        while(count == k){
            cmt[vec[start]]--;
            if(cmt[vec[start]]==0){
                cout<< start + 1<<" " <<end + 1;
                return 0;
            }
            start++;
        }
    }
    
    cout<<-1 <<" "<<-1;
 
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
 
// int main()
// {
//     int n, k;
//     cin>>n>>k;
//     int i, a[n], l, r, flag=0;
//     map<int, int> m;
//     for(i=0;i<n;i++) cin>>a[i];
//     for(i=0;i<n;i++)
//     {
//         m[a[i]]++;
//         if(m.size()==1) l=i;
//         if(m.size()==k) {r=i; flag=1; break;}
//     }
//     if(flag==0) l=-2, r=-2;
//     cout<<l+1<<" "<<r+1<<endl;
// }