//
// Created by yukun on 1/14/2023.
//
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, x;
    cin >> n;
    set<int> s;

    for (int i = 0; i < n; i++){
        cin >> x;
        s.insert(x);
    }

    cout << s.size();
}