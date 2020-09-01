#include <iostream>
#include <cstdio>
using namespace std;

int main(void)
{
	int x =10;
	int* y = &x;
	
	printf("x= %i, y= %p",x, y);
	printf(",*y= %i",*y);
	cout << endl;
	
	void* pi;
	pi=&x;
	printf("*(int*) pi= %i", *(int*)pi);
	cout << endl;
	
	pi=NULL;
	printf("%p", pi);
	
	}
