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

int main()
{
	Number n1(4,5), n2(3,6), n3;
	//build->class
	int a = 15;
	n1.print();
	n1 = a;
	n1.print();
	
	//class->build
	
	return 0;
}
