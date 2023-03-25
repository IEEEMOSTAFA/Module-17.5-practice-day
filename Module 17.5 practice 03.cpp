/*
#include<bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    if(n==0)
        return 1;
    return n*factorial(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<factorial(n)<<" \n";
}
*/

#include<bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if(n==0)
        return 0;
    if(n==1)
       return 1;

        return fib(n-1)+fib(n-2);
}
int main()
{
int n;
cin>>n;
    cout<<fib(n);
    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;
int fib(int x)
{
    if((x==1)|| (x==0))
    {
        return (x);
    }
    else
    {
        return (fib(x-1)+fib(x-2));
    }
}

int main()
{
    int n;
    cin>>n;

    int i;
    int temp =0;
    for(i=0;i<=n;i++)
    {
        cout<<" " <<fib(i);
        temp++;
    }
    cout<<endl<<temp;
}
*/
