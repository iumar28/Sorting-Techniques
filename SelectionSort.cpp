#include<bits/stdc++.h>
using namespace std;
void SelectionSort(int a[],int n)
{
    int i,j,k;
    for( i=0;i<n-1;i++)
    {
        for(int j=k=i;j<n;j++)
        {
            if(a[j]<a[k])
            {k=j;}
        }
        swap(a[i],a[k]);
    }
}
int main()
{
    cout<<"Enter The Number of Elements\n";
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter "<<i+1<<"th element\n";
        cin>>a[i];
    }
    //int a[]={3,7,9,10,6,5,12,4,11,2},n=10;
    SelectionSort(a,10);
    cout<<"The Soted Data is \n";
    for(int i=0;i<n;i++)
    {cout<<a[i]<<" ";}


    return 0;
}