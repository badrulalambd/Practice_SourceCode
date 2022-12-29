//Binary operator overloading

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
	
		Number operator - (Number ob);
};

Number Number :: operator - (Number ob){
	Number tmp;
	tmp.x = x - ob.x;
	tmp.y = y - ob.y;
	return tmp;
}

int main()
{
	Number ob1(7,10),ob2(6,5),ob3;
	
	ob3 = ob1 - ob2;
	
	ob1.print();
	ob2.print();
	ob3.print();
	
	return 0;
}
