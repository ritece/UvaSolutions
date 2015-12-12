#include<iostream>

using namespace std;
typedef long long int ll;

bool isPossibleToFill(ll capacityArray[], ll containerSize, ll totalVessels, ll totalContainer )
{
    ll start = 0;
    
     while(start< totalVessels and totalContainer > 0)
       {
          if(capacityArray[start]> containerSize)
                      return false;
          
          else{
                ll currentContainerSize = containerSize;     
                currentContainerSize -= capacityArray[start];
                start+=1;  
                while(start< totalVessels and currentContainerSize >= capacityArray[start])
                         {
                             currentContainerSize -= capacityArray[start];
                             start+=1;
                         }
               totalContainer-=1;
              }
      }
      if(start<totalVessels and totalContainer == 0)
                  return false;
      else
                  return true;
}

int main()
{
ll numVessels, numContainer;

while(cin>>numVessels)
{
   cin>>numContainer;
ll capacityArray[1000000] = {0};

 for(ll i=0;i<numVessels; i++)
{
    cin>>capacityArray[i];
}

  ll low =0, high = 1000000000000, ans = 0;
  while(low<=high)
  {
    ll mid = low + (high-low)/2;
    if(isPossibleToFill(capacityArray, mid, numVessels, numContainer))
       {
            ans = mid;
            high = mid-1;
       }
    else
            low = mid+1;

  }
    cout<< ans <<"\n";
}   

return 0;
}
