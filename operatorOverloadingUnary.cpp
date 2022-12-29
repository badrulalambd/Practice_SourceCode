//Unary operator overloading

#include<iostream>

using namespace std;

class Number{
	int x,y;
	public:
		Number()
		{
			x=0, y=0;
		}
		Number(int a, int b){
			x = a, y = b;
		}
		void get(int &a, int &b){
			a=x, b=y;
		}
		void set(int a, int b){
			x=a, y=b;
		}
		void print(){
			cout<<x<<"  "<<y<<endl;
		}
	
		void operator ++ ();
};

void Number :: operator ++ (){
	x = x + 10;
	y = y + 20;
}

int main()
{
	Number ob1(7,10),ob2(6,5),ob3;
	
	ob1.print();
	ob2.print();
	
	++ob1; 
	++ob2;
	
	ob1.print();
	ob2.print();
	
	
	return 0;
}






