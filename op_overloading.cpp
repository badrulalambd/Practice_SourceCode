#include<iostream>
using namespace std;
class coord
{
	int x,y;
	public:
	coord()
	{
		x=0; y=0;
	}
	coord(int i, int j)
	{
		x=i; y=j;
	}
	friend coord operator+(int i, coord ob);
	public : void display()
	{
		cout<<"X = "<<x<<endl<<"Y = "<<y;
	}
};
coord operator+(int i, coord ob)
 {
 	coord temp;
 	temp.x=ob.x+i;
 	temp.y=ob.y+i;
 	return temp;
 }
 
 
 int main()
 {
 	   coord O1(10,10);
 	   cout<<"Before operator overloading"<<endl;
 	    O1.display();
 	   O1=99+O1;
 	   cout<<"\nAfter operator overloading"<<endl;
 	   O1.display();
 }
