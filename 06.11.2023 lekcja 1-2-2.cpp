 #include <iostream>
 using namespace std;
 
 int main(){
 /*internatacja
 i = i +1
 i += 1
 i++
 dekrementacja
 1 = 1
 1--
 */
 //for (wartoscpoczatkowa; warunkonczacy; krok)
 for (int i=0; i < 5; i++){
 	cout << "wartosc i: " << i << endl;
 }
int wysokosc, szerokosc;
//zadajemy pytanie 
cout << "podaj szerokosc: ";
cin >> szerokosc;
cout << "podaj wysokosc :";
cin >> wysokosc;
//pobieramy wartosc 
//zadajemy pytanie
//pobieramy wartosc

 
 for(int i=0; i<wysokosc; i++){
 	for(int j =0; j<szerokosc; j++){
 		cout << " " << i << j;
	 }
	 cout << endl;
 }
 
 cout << endl;
 system("pause");
 }