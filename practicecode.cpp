#include<iostream>

using namespace std;

class Student{
	private:
		int stId = 202;
		void getData();
		friend void show(Student ob);
	public:
		void setData(){
			stId = 101;
		}
};

void show(Student ob){
	cout<<"I am inside the show method  and stId = "<<ob.stId<<endl;
}

void getData(){
	cout<<"Hello"<<endl;
}

int main()
{
		Student st;
		show(st);
	
	return 0;
}