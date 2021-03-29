#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n], hash[n]={0};
    for (int i = 1; i <=n; i++) {
        cin >> a[i];
        hash[a[i]]++;
    }
    for (int i =1l; i <n; i++) {

//        cout<<hash[i]<<" ";
        if(hash[i]==0)
        {cout<<i<<" is absent\n";
        }
        else if(hash[i]>1)
        {cout<<i<<" is repeated\n";}
    }

    return 0;

}