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
		
		void print()
		{
			cout<<x<<"	"<<y<<endl;
		}
};

int main()
{
	Number n1(4,5), n2(3,6), n3;
	
	int a = 15; 
	float b;
	b = a;
	
	printf("a = %d\nb = %f\n",a, b);
	 
	return 0;
}
