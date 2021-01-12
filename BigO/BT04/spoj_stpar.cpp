//https://www.spoj.com/problems/STPAR/
#include<iostream>
#include<stack>
#include<queue>
#include<vector>
#include <algorithm>

using namespace std;

void handleArray(int n) {
    vector<int> vec;
    queue<int> que;
    stack<int> stac;

    int temp;
    for(int i=0; i< n; i++) {
        cin>>temp;
        que.push(temp);
        vec.push_back(temp);
    }

    sort(vec.begin(),vec.begin()+vec.size(), greater<int>());

    while (!que.empty())
    {
        int val = que.front();
        

        if(val == vec.back()) {
            vec.pop_back();
            que.pop();
            continue;
        }

        if(!stac.empty() && vec.back() == stac.top()) {
            vec.pop_back();
            stac.pop();
            continue;
        }

        stac.push(val);
        que.pop();
    }

    while (!stac.empty() && stac.size() > 1)
    {
        int a = stac.top();
        stac.pop();
        int b = stac.top();
        if(a > b) {
            cout<<"no"<<endl;
            return;
        }
    }

    if(stac.empty() || stac.size() == 1) {
        cout<<"yes"<<endl;
    } else {
        cout<<"no"<<endl;
    }
}

int main() {
    int temp;
    while(true){
        cin>>temp;
        if (temp == 0){
            return 0;
        }
        handleArray(temp);
    }
    return 0;
}