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
		operator int()
		{
			return x+y;
		}
};

int main()
{
	Number n1(4,5), n2(3,6), n3(50);
	
	//class->build
	int a;
	a = n3;
	cout<<a<<endl;
	
	return 0;
}
