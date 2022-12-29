#include<iostream>

using namespace std;

class Number{
	int x,y; //private member variable
	public:
		Number(){
			x = 0, y = 0;
		}
		Number(int a, int b){
			x = a, y = b;
		}
		Number(int a){
			x = a, y = 0;
		}
		
		void print()
		{
			cout<<x<<"	"<<y<<endl;
		}
		
};

class Number1{
	int x; //private member variable
	public:
		Number1(){
			x = 0;
		}
		Number1(int a){
			x = a;
		}
		void print()
		{
			cout<<x<<endl;
		}
		
		operator Number()
		{
			Number tmp(x);
			return tmp;
		}
		
};

int main()
{
	Number n1(4,5), n2(3,6), n3;
	Number1 x1(10);
	//class->class
	//x1 = 10;
	n1 = x1;
	n1.print();
	return 0;
}
