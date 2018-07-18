//Huda Fatkhur Rahman
//INFORMATIKA 2017 kelas 11
//17.11.1613

#include <iostream>
using namespace std;
#define pi 3.14

class bangunruang

{
public :
      double luas, volume, s, la, jst, ls, r, t;
      void bola ()
      {
            cout<<" Luas dan Volume Bola "<<endl;
            cout<<" --------------------- "<<endl;
            cout<<"Input Jari-jari = ";cin>>r;
            luas = 4 * r * r;
            volume =(4/3) * pi * r * r;
            cout<<"Luas Bola       = "<<luas<<endl;
            cout<<"Volume Bola     = "<<volume<<endl;
            cout<<endl;
      }

      void limas ()
      {
            cout<<" Luas dan Volume Limas "<<endl;
            cout<<" --------------------- "<<endl;
            cout<<"Input Luas Alas        = ";cin>>la;
            cout<<"Input Jumlah Sisi Tegak      = ";cin>>jst;
            luas = la * jst;
            volume = 0.33 * jst;
            cout<<"Luas Limas       = "<<luas<<endl;
            cout<<"Volume Limas           = "<<volume<<endl;
            cout<<endl;
      }

      void kerucut ()
      {
            cout<<" Luas dan Volume Kerucut "<<endl;
            cout<<" ----------------------- "<<endl;
            cout<<"Input Luas Alas        = ";cin>>la;
            cout<<"Input Luas Selimut     = ";cin>>ls;
            cout<<"Input Jari-jari        = ";cin>>r;
            cout<<"Input Tinggi Kerucut   = ";cin>>t;
            luas = la * ls;
            volume = 0.33 * pi * r * r * t;
            cout<<"Luas Kerucut           = "<<luas<<endl;
            cout<<"Volume Kerucut         = "<<volume<<endl;
            cout<<endl;
      }

      void kubus ()
      {
            cout<<" Luas dan Volume Kubus "<<endl;
            cout<<" --------------------- "<<endl;
            cout<<"Input Sisi Kubus = ";cin>>s;
            luas = 6 * s * s;
            volume = s * s * s;
            cout<<"Luas Kubus = "<<luas<<endl;
            cout<<"Volume Kubus     = "<<volume<<endl;
            cout<<endl;
      }

};
int main()
{
      int pilihan;
      atas :
      bangunruang x;
      cout<<" Menu Pilihan "<<endl;
      cout<<" 1. Luas dan Volume Bola "<<endl;
      cout<<" 2. Luas dan Volume Limas "<<endl;
      cout<<" 3. Luas dan Volume Kerucut "<<endl;
      cout<<" 4. Luas dan Volume Kubus "<<endl;
      cout<<" 0. Exit Program "<<endl;
      cout<<endl;
      cout<<" Input Nomor Menu Pilihan = ";cin>>pilihan;
      cout<<endl;

      switch (pilihan)
      {
      case 1 : x.bola ();
            goto atas;
            break;
      case 2 : x.limas ();
            goto atas;
            break;
      case 3 : x.kerucut ();
            goto atas;
            break;
      case 4 : x.kubus ();
            goto atas;
            break;
      case 0 : exit:
            cout<<" Anda Kembali ke Halaman Program "<<endl;
            break;
      default: cout <<"Anda Salah Input Pilihan"<<endl;
            goto atas;

      }
      system ("pause");
      return 0;
}
