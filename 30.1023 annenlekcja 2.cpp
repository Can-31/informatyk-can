#include<iostream>
using namespace std;
	int main(){
		//liczby całkowite - short, int, long long , unsigned short 
	short a, b;
	cout << "podaj a : ";
	cin >>a;
	cout <<"podaj b: ";
	cin>>b;
	
	// instrukcja warunka - if (warunek)
	if (a> b){
		cout << a <<">"<<b;}
		// = operator przypisania
		//== operator porowania
		else if (a==b){// sprawdziamy kolejny , warunek jeże powyżej sie nie sapłni 
	       cout <<a<< "==" <<b;
		}
	else {//w przeciwnym przypadku , jeżeli warunek sie nie spełni
	   cout << a <<"<"<<b;
	   } 
}
 