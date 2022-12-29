#include<iostream>

using namespace std;

class MyClass{
	
};

class Sample{
	int x;
	int y;
	public:
		void setValue(){
			x = 20, y = 25;
		}
		friend float mean(Sample s);
};

    float mean(Sample s){
			return float(s.x + s.y)/2.0;
		}
		
		
int main()
{
	Sample x;
	x.setValue();
	
	cout<<"Mean value = "<<mean(x);
	
	return 0;
}
