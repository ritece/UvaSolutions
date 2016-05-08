#include<iostream>
#include<string>

using namespace std;

int arr[30];

bool isPossible(int total, int availableBars, int current, int index)
{
    if(current == total)
    {
        return true;
    }
    if(index >= availableBars)
        return false;
    else
    
       return (isPossible(total, availableBars, current+arr[index], index+1)
              || isPossible(total, availableBars, current, index+1) );
    
}
int main()
{
   int t; 
   cin>>t;
   while(t--)
    {
       int total; 
       cin>>total;
       int availableBars; cin>>availableBars;
       for(int i = 0; i < availableBars; i++)
           cin>>arr[i];
       if(isPossible(total, availableBars, 0, 0))
           cout<<"YES"<<endl;
       else
           cout<<"NO"<<endl;
     }
}
