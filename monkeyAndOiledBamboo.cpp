#include<iostream>
using namespace std;

typedef long long int ll;

bool isPossibleToReach(ll arr[], ll k, ll total)
{
ll curr = 0;

for( ll i=0; i<total; i++)
{
 if( (arr[i]-curr) >k)
          return false;
 else if( (arr[i]- curr) ==k)
         {
             k-=1;
             curr=arr[i];
         }
   else{
             curr = arr[i];
       }

 
}
 return true;
}

int main()
{

ll t,totalRungs,rungHeight,testCase=1; cin>>t;

while(testCase<=t)
{

ll arr[100005] = {0};
cin>>totalRungs;
for(ll i = 0; i<totalRungs; i++)
{
cin>>arr[i];
}

ll low = 0, high = 10000000, ans = 0;

while(low<=high)
{
 ll mid = low + (high-low)/2;
 
 if(isPossibleToReach(arr,mid,totalRungs))
            {
                   ans = mid;
                   high = mid-1;
            }
  else
            low = mid+1;
}
   cout<<"Case "<<testCase<<": "<<ans<<"\n";
   testCase+=1;
}
return 0;
}
