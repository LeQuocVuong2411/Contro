#include <iostream>
using namespace std;
void swap(int *a,int *b){
	 int temp = *a;
	 *a=*b;
	 *b=temp;
	}
int main(){
	int x;
	cout<<"nhap x"<<endl;
	cin>>x;
	int *p = &x;
	cout<<"con tro co gia tri la "<<*p<<endl;
	int y;
	cout<<"nhap gia tri moi cua x "<<endl;
	cin>>y;
	*p = y;
	cout<<"x co gia tri moi la "<<x<<endl;
	int a;
	int b;
	cout<<"nhap a va b"<<endl;
	cin>>a>>b;
	swap(a,b);
	cout<<"so a sau khi swap la "<<a<<endl;
	cout<<"so b sau khi swap la "<<b<<endl;
	}
