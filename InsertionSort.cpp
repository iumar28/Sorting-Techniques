#include<bits/stdc++.h>
using namespace std;
void Insertion(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int j=i-1;
        int x=a[i];

        while(j>-1 && a[j]>x)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=x;
    }
}
int main()
{
    int n;
    cout<<"Enter the number of elements you want to Enter\n";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter "<<i+1<<"th element\n";
        cin>>a[i];
    }
    Insertion(a,10);
    for(int i=0;i<n;i++)
    {cout<<a[i]<<" ";}


    return 0;
}