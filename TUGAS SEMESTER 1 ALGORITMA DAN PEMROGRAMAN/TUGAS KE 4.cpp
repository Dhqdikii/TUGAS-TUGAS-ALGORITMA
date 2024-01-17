/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

  #include <iostream>

using namespace std;

int main()
{
    string JenisKarakter;
    string Pilihan;
    
    string MemilihKarakter;
    string Karakter;
    
    string AkunPemain;
    string NamaPemain;
    
    string Mode;
    string Next;
    string TingkatKesulitan;
    string Akibat;
    
    int HP;
    int Kekuatan;
    
    int HPMusuh;
    int Serangan;
    
    int Obat = 5;
   
    
        cout<<" MASUKAN AKUN ANDA"<<endl<<endl;
        cout<<"1.FACEBOOK"<<endl;
        cout<<"2.GOOGLE"<<endl;
        cout<<"3.APPLE ID"<<endl;
        cout<<endl;
    
        cout<<"MASUKAN AKUN ANDA : ";
        cin>>AkunPemain;
        cout<<endl;
        
        cout << "\033[2J\033[1;1H";
        
        cout<<"MASUKAN NICK NAME ANDA : ";
        cin>> NamaPemain; 
        cout<<endl;
        
         while(true){
        
        cout << "\033[2J\033[1;1H";
        
        cout << endl;
        cout << " 1. EASY" << endl;
        cout << " 2. NORMAL" << endl;
        cout << " 3. HARD" << endl;
                    
        cout << endl;
        cout << " SILAHKAN PILIH MODE : ";
        cin >> Pilihan;
                    
            if(Pilihan == "1"){
                Mode = "EASY";
                HP = 200;
                Kekuatan = 50;
                            
                HPMusuh = 150;
                Serangan = 20;
                            
                break;
            }
                        
            else if(Pilihan == "2"){
                Mode = "NORMAL";
                HP = 170;
                Kekuatan = 40;
                            
                HPMusuh = 175;
                Serangan = 25;
                            
                break;
            }
                        
            else if(Pilihan == "3"){
                Mode = "HARD";
                HP = 150;
                Kekuatan = 30;
                            
                HPMusuh = 200;
                Serangan = 30;
                            
                break;
            }
                        
            else{
                
            continue;
            }
        
    }
        
        
        cout << endl;
    cout << " ANDA MEMILIH MODE " << Mode;
                    
    cout << endl;
    cout << " KETIK APA SAJA UNTUK MELANJUTKAN : ";
    cin >> Next;
    
    while(true){
        
        cout << "\033[2J\033[1;1H";
                    
        cout << endl;
        cout << " 1. KESATRIA" << endl;
        cout << " 2. PEMANAH" << endl;
        cout << " 3. MEDIS" << endl;
                    
        cout << endl;
        cout << " SILAHKAN PILIH KARAKTER : ";
        cin >> Pilihan;
                    
            if(Pilihan == "1"){
            Karakter = "KSATRIA";
            break;
            }
                        
            else if(Pilihan == "2"){
            Karakter = "PEMANAH";
            break;
            }
                        
            else if(Pilihan == "3"){
            Karakter = "BADAGE";
            break;
            }
            
            else{
            continue;
            }
                        
    }
    
        cout << endl;
        cout << " ANDA MEMILIH KARAKTER " << Karakter;
                        
        cout << endl;
        cout << " KETIK APA SAJA UNTUK MELANJUTKAN : ";
        cin >> Next;
                        
        while(true){
                        
        cout << "\033[2J\033[1;1H";
        
        cout << endl;
        cout << " " << Karakter << ", STATUS KESEHATAN :" << endl;
                        
        cout << endl;
        cout << " HP = " << HP << endl;
        cout << " KEKUATAN = " << Kekuatan << endl;
        
            if(HP <= 0){
            cout << endl;
            cout << " KAMU KALAH, GAME BERAKHIR" << endl;
          
            cout << endl;
            cout << " KETIK APA SAJA UNTUK MELANJUTKAN : ";
            cin >> Next;
                        
            break;
            }    
            
            cout << endl;
    cout << " KETIK APA SAJA UNTUK MELANJUTKAN : ";
    cin >> Next;
                    
    Akibat = " MUSUH MENGHADANG DAN BERLARI KEARAHMU";
                    
    while(true){
                        
    cout << "\033[2J\033[1;1H";
                    
    cout << endl;
    cout << Akibat << endl;
                    
    cout << endl;
    cout << " HP MU = " << HP << endl;
    cout << " SISA OBAT = " << Obat << endl;
                    
    cout << endl;
    cout << " HP MUSUH = " << HPMusuh << endl;
    
        if(HP <= 0){
        cout << endl;
        cout << " KAMU TERBUNUH OLEH MUSUH" << endl;
                    
        break;
        }
                
        else if(HPMusuh <= 0){
        cout << endl;
        cout << " KAMU MENANG, MUSUH TELAH TERBUNUH OLEHMU" << endl;
                                
        break;
        }
    
    cout << endl;
    cout << " 1. SERANG" << endl;
    cout << " 2. SEMBUHKAN LUKA" << endl;
                    
    cout << endl;
    cout << " MASUKKAN PILIHAN : ";
    cin >> Pilihan;
                    
        if(Pilihan == "1"){
        Akibat = " MUSUH TERKENA SERANGANMU";
        HP -= Serangan;
        HPMusuh -= Kekuatan;
        continue;
        }
                        
        else if(Pilihan == "2"){
                            
            if(Obat >= 1){
            Akibat = " BERHASIL MENYEMBUHKAN LUKA, HP BERTAMBAH";
            Obat -= 1;
            HP += 20;
            continue;
            }
                            
            else if(Obat < 1){
            Akibat = " OBATMU TELAH HABIS";
            continue;
            }
        }
                        
        else{
        continue;
        }
                        
    }
    
    break;
    
    }
    
    return 0;
    
}