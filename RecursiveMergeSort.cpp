#include<bits/stdc++.h>
using namespace std;
void Merge(int a[],int l,int mid,int h)
{
    int i=l,j=mid+1,k=l;
    int b[100];
    while(i<=mid && j<=h)
    {
        if(a[i]<a[j])
            b[k++]=a[i++];
        else b[k++]=a[j++];
    }
    for(;i<=mid;i++)
        b[k++]=a[i];
    for(;j<=h;j++)
    {b[k++]=a[j++];}

    for(int i=l;i<=h;i++)
    {a[i]=b[i];}
}

void RecursiveMerge(int a[],int l,int h)
{
    int mid;
    if(l<h)
    {
        mid=(l+h)/2;
        RecursiveMerge(a,l,mid);
        RecursiveMerge(a,mid+1,h);
        Merge(a,l,mid,h);
    }
}
int main()
{
    int a[]={3,7,9,10,6,5,12,4,11,2},n=10;
    RecursiveMerge(a,0,n-1);

    for(int i=0;i<n;i++)
    {cout<<a[i]<<" ";}
    cout<<endl;


    return 0;
}