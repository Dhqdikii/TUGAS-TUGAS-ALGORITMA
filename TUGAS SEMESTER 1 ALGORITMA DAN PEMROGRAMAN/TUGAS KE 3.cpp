/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

   #include <iostream>

using namespace std;

int main()
{
	int Harga;
	int total = 0;
	int jumlahTiket;
	int Diskon;
	
	int Ekonomi = 100000;
	int Bisnis = 200000;
	int Eksekutif = 300000;
	
	
	string jenistiket;
    string pilih;
    
        cout<<" SELAMAT DATANG DI PEMESANAN TIKET KERETA API INDONESIA "<< endl;
	    cout << " JENIS TIKET KERETA API INDONESIA : " << endl << endl;
	    cout << " 1. EKONOMI (Rp. 100.000)" << endl;
	    cout << " 2. BISNIS (Rp. 200.000)" << endl;
	    cout << " 3. EKSEKUTIF (Rp. 300.000)" << endl << endl;
	
	int pilihan;
	cout << "Masukkan pilihan tiket (1 untuk kelas Ekonomi/ 2 untuk kelas Bisnis/ 3 untuk kelas Eksekutif): ";
	cin >> pilihan;
	
	cout << "Masukan Jumlah Tiket Yang Ingin Di Pesan : ";
	cin >> jumlahTiket;
	
	if(pilih == "1"){
	        jenistiket = "EKONOMI";
	        total+= Ekonomi*jumlahTiket;
	    } 
	   else if(pilih =="2"){
	       jenistiket= "BISNIS";
	       total+= Bisnis*jumlahTiket;
	   }  
	   else if (pilih =="3"){
	       jenistiket= "EKSEKUTIF";
	       total+= Eksekutif*jumlahTiket;
	   }
	
 	switch (pilihan) {
        case 1:
            total =  100000 * jumlahTiket;
            jenistiket = "EKONOMI";
            break;
            
        case 2:
            total = 200000 * jumlahTiket;
            jenistiket = "BISNIS";
            break;
			
		case 3:
            total = 300000 * jumlahTiket;
            jenistiket = "EKSEKUTIF";
            break;	    
			
	}
	

	cout<< endl;
	cout<<"TIKET YANG ANDA PESAN: " << jenistiket << endl << " JUMLAH TIKET YANG ANDA PESAN : " << jumlahTiket << endl << " DENGAN TOTAL : RP. " << total << endl;
	
 	if(total >= 500000){
	    Diskon = total * 90 / 100;
	    cout << "ANDA DAPAT DISKON 10%, TOTAL SAAT INI RP. " << Diskon;
	}else if(total >= 300000){
	    Diskon = total * 95 / 100;
	    cout << "ANDA DAPAT DISKON 5%, TOTAL SAAT INI RP. " << Diskon;
	}else if(total > 200000){
	    Diskon = total * 98 / 100;
	    cout << "ANDA DAPAT DISKON 2%, TOTAL SAAT INI RP. " << Diskon;
	}
	
 cout<< " TOTALNYA " << endl;
 cout<< " TIKET : " << jenistiket << endl << " JUMLAH TIKET YANG ANDA PESAN : " << jumlahTiket << endl << " DENGAN  HARGA SEBELUM DISKON : RP." << Diskon << endl << " ANDA BAYAR DENGAN JUMLAH : Rp. " << total - Diskon << endl;
 
{ 
    
}
	
	
return 0;	
}