/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

 using namespace std;
int main(){
	
	int A;
	int B;
	
	
	cout << "Masukan bilangan ganjil : " ;
	cin >> A;
	
	cout << "Masukan bilangan genap : " ;
	cin >> B;
	
	if( A % 2 != 0 && B % 2 == 0 ){
		cout<< "Benar, " << A << " Bilangan Ganjil " <<  B << " Bilangan Genap" << endl;
		
	} else if ( A % 2 == 0 && B % 2 != 0){
		cout << "Salah, " << A << " Bilangan Genap dan " <<  B << " Bilangan Ganjil" << endl;
		
	} else if ( A % 2 == 0){
		cout << "Salah, " << A << " Bilangan Genap";
	} else if ( B % 2 != 0){
		cout << "Salah, " << B << " Bilangan Ganjil";
	}	
	
	return 0;
		

	
	
	
}