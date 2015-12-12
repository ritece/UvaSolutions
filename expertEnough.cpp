#include<iostream>
#include <map>
#include<algorithm>
#include<string>
using namespace std;
typedef long long int ll;

int main()
{

int t; cin>>t;
while(t--)
{
ll  databaseSize; cin>>databaseSize;
string name; ll  minPrice, maxPrice;
map<string,pair<ll, ll> > database;
while(databaseSize--)
{
cin>>name>>minPrice>>maxPrice;
database[name]=make_pair(minPrice,maxPrice);
}
int numQueries,price; cin>>numQueries;
while(numQueries--)
{
cin>>price;
int count = 0;
string manufacturer = "";
for (const auto &myPair : database) {
        ll low = myPair.second.first;    ll high = myPair.second.second;
        if (price>=low &&  price<=high)
                 {count++;
                  manufacturer = myPair.first;
                 }
        if(count>1)
            {
             count = 0; break;
            }
     }

if(count==1)
cout<<manufacturer<<"\n";
else
cout<<"UNDETERMINED"<<"\n";


}
if(t) cout<<"\n";
}
return 0;
}
