#include<iostream>

using namespace std;

int main()
{
int arr[10005] ={0}, n;
cin>>n;
while(n!=0)
{
for(int i=0;i<n;i++)
   cin>>arr[i];

int ans=0,pre =0;

for(int i=0;i<n;i++)
   {
     pre+=arr[i];
     if(pre>ans)
        ans = pre;
     if(pre<0)
          pre =0;
   }
if(ans<=0)
     cout<<"Losing streak.\n";
else
     cout<<"The maximum winning streak is "<<ans<<".\n";
cin>>n;
} 
return 0;
}
