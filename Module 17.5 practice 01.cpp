for(int k=1;k<=n;k=k*2)
{
for(int i=1;i<=n;i++)
{
cout<<k<<" "<<i<<"\n";
}
}


for(int k=1;k<=n;k++)
{
if(k==1){
for(int i=1;i<=n;i++)
{
cout<<k<<" "<<i<<"\n";
}
}
}



for(int k=1;k<=n;k++)
{
if(k%2==0){
for(int i=1;i<=n;i++)
{
cout<<k<<" "<<i<<"\n";
}
}
}









pb--------01:::O(nlogn)
pb---------02:::O(n^2)
pb___________03::O(nlogn)
