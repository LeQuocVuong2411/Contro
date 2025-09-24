#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"nhap so luong phan tu trong mang"<<endl;
    cin>>n;
    int arr[100];
    cout<<"nhap cac phan tu trong mang"<<endl;
    for(int i=0;i<n;i++){
    	cin>>arr[i];
		}
	int *p=arr;
	cout<<"gia tri phan tu trong mang la ";
	for(int i=0;i<n;i++){
	    cout<<*(p+i);
		}
	cout<<endl;
	cout<<"tong cac phan tu trong mang la ";
	int tong = 0;
	for(int i=0;i<n;i++){
		tong +=*(p+i);
		}
	cout<<tong<<endl;
	cout<<"phan tu co gia tri lon nhat la ";
	int max=*p;
	for(int i=0;i<n;i++){
		if(max<*(p+i)){
			max=*(p+i);
			}
		}
	cout<<max<<endl;
	}
	
