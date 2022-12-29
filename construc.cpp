#include<iostream>

using namespace std;

class Number{
	int x, y;
	public:
		Number()
		{
			cout<<"Constructor 1"<<endl;
			x =0 , y=0;
		}
		Number(int a, int b)
		{
			cout<<"Constructor 2"<<endl;
			x = a, y = b;
		}
};

int main()
{
	
	Number ob1(1,3), ob2, ob3(4,5);
	
	
	return 0;
}
