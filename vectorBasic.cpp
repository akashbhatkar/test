#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int> v1;
v1.pushback(40);
 v1.pushback(50);
 v1.pushback(60);
 v1.pushback(70);
 v1.pushback(80);
 vector<int>::iterator it;
for(it=v1.begin();it<v1.end();it++)
{
cout<<*it<<" ";
cout<<endl;
}
}