#include <iostream>
using namespace std;
int main()
{
	int N,X,T,BATAS;
	cin>>N;
	BATAS = N + 100;
	X=20;
	T=N;
	while (T<=BATAS)
	{
		T=T+X;
		X=X+10;
	}
	cout<<T;
	return 0;
}
