#include <iostream>
using namespace std;
class sinhvien{
	private:
		string ten;
		int tuoi;
		float gpa;
	public:
		void nhap(){
			cout<<"nhap ten"<<endl;
			getline(cin,ten);
			cout<<"nhap tuoi"<<endl;
			cin>>tuoi;
			cout<<"nhap diem"<<endl;
			cin>>gpa;
			cin.ignore();
			}
		void in(){
			cout<<"ten la "<<ten<<endl;
			cout<<tuoi<<" tuoi "<<endl;
			cout<<"diem : "<<gpa<<endl;
			
			}
};
int main(){
	sinhvien *sv = new sinhvien;
	cout<<"nhap thong tin sinh vien "<<endl;
	sv->nhap();
	cout<<"thong tin cua sinh vien "<<endl;
	sv->in();
	int n;
	cout<<"nhap so sinh vien"<<endl;
	while(!(cin>>n)){
		cout<<"nhap sai nhap lai n"<<endl;
		cin.clear();
		cin.ignore(1000,'\n');
	
		}
	sinhvien *ds= new sinhvien[n];
		cin.ignore();
	for(int i=0;i<n;i++){
		cout<<"nhap thong tin sinh vien thu "<<i+1<<endl;
		ds[i].nhap();
		}
	for(int i=0;i<n;i++){
		cout<<"thong tin sinh vien thu "<<i+1<<endl;
		ds[i].in();
		}
	return 0;
	}
