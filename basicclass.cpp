#include<iostream>
using namespace std;
class Number{
	private: int a,b;
	public: Number()
		{
			cout<<"enter the numbers"<<endl;
			cin>>a>>b;
		}
		void add()
		{
			cout<<"addition result"<<a+b<<endl;
		}
		~Number()
		{
			cout<<"program end"<<endl;
		}
};
int main()
{
	Number n1;
	n1.add();
}

