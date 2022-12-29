#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

class MyClass{
	public:
		int x;
		int y;
		char str[50];
};

int main()
{
	MyClass ob1;
	ob1.x = 10;
	ob1.y= 20;
	
	cout<<ob1.x<<endl;
	cout<<ob1.y<<endl;
	
	return 0;
}
