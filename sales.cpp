#include<iostream>

using namespace std;

int main()
{
int testCases;  cin>>testCases;
while(testCases--)
{
int n; cin>>n;  
int salesAmountList[1005]; 

for(int i =0; i<n; i++)
{
cin>>salesAmountList[i];
}

int total = 0;

for(int curr= 1; curr<n; curr++)
 for(int pre=0; pre<curr; pre++)
          if(salesAmountList[pre]<=salesAmountList[curr])
                     total+=1;
cout<<total<<"\n";                     
}
return 0;
}
