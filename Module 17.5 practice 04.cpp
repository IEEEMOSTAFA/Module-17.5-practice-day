/*
#include<bits/stdc++.h>
using namespace std;
int sum_function(int arr[],int n)
{
    if(n<=0)
        return 0;
    return (sum_function(arr,n-1)+arr[n-1]);
}
int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   cout<<sum_function(arr,n);



}
*/
#include<bits/stdc++.h>
using namespace std;
int sum_arr(int arr[],int n)
{
    if(n<=0)
    {
        return 0;
    }
    return(sum_arr(arr,n-1)+arr[n-1]);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<sum_arr(arr,n);
}
