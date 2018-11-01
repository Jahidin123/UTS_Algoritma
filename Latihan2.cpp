#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int a,b,c;

	cout<<"masukan nilai pertama:";
	cin>>a;
	cout<<"masukan nilai kedua:";
	cin>>b;
	cout<<"masukan nilai ketiga:";
	cin>>c;

	if (a>b){
		if(b>c)
		cout<< a <<" "<< b <<" "<< c ;
		else{
			if (a<c)
				cout<<a<<" "<<c<<" "<<b;
			else
				cout<<c<<" "<<a<<" "<<b;

		    }
	    }
	else
	{
		if (a<c)
		cout<< a <<" "<< b <<" "<< c;
		else{
			if (b>c)
			cout<<b<<" "<<c<<" "<<a;
			else
			cout<<c<<" "<<b<<" "<<a;
			
			
		}
	}
	
	return 0;
}
