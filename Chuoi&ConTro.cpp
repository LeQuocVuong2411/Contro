#include <iostream>
using namespace std;
int stringlen(char *s){
	int len=0;
	while(*s!='\0'){
		len++;
		s++;
		}
	return len;
	}
void stringcopy(char *str1,char *str2){
	while(*str1!='\0'){
		*str2=*str1;
		str1++;
		str2++;
	}
	*str2='\0';
}
void concatString(char *str1,char *str2){
	while(*str1!='\0'){
		str1++;
		}
	while(*str2!='\0'){
		*str1=*str2;
		str1++;
		str2++;
		}
	*str1='\0';	
	}
void daochuoi(char *str){
	char *start = str;
	char *end = str;
	while(*end!='\0'){
		end++;
		}
		end--;
	while(start<end){
		char temp = *start;
	    *start=*end;
	    *end = temp;
	    start++;
	    end--;
		}
	}
int main(){
	char str1[100];
	char str2[100];
	char str3[100];
	cout<<"nhap chuoi 1"<<endl;
	cin.getline(str1,100);
	cout<<"nhap chuoi 2"<<endl;
	cin.getline(str2,100);
	cout<<"do dai chuoi la "<<stringlen(str1)<<endl;
	stringcopy(str1,str3);
	cout<<"chuoi khi copy la "<<str3<<endl;
	concatString(str1,str2);
	cout<<"chuoi sau khi noi la "<<str1<<endl;
	daochuoi(str1);
	cout<<"chuoi sau khi dao la "<<str1<<endl;
	return 0;
	
	}
