#include<iostream>
#include<cmath>

typedef long long int ll;
using namespace std;

int main()
{
int n; cin>>n;
int caseNum = 1;
while(n!=0)
{
ll arr[1005]={0};
for(int i =0; i<n; i++)  cin>>arr[i];

int m,sum; cin>>m;
cout<<"Case "<<caseNum<<":\n";
caseNum++;

while(m--)
{
cin>>sum;

ll closetSum=arr[0]+arr[1];

for(int i=0;i<n;i++)
    for(int j=0;j<i;j++)
             {
               ll currSum = arr[i]+arr[j];
               ll currDiff = abs(sum - currSum);
               ll oldDiff  = abs(sum - closetSum);
               if(currDiff< oldDiff)
                       closetSum = currSum;
                     
             } 
cout<<"Closest sum to "<<sum<<" is "<<closetSum<<".\n";         
}

cin>>n;
}


return 0;
}
