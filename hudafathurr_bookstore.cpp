//Huda Fatkhur Rahman
//17.11.1613
//Informatia 11 2017
#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

class book	{
private:
	char *pencipta,*judul,*penerbit;
	float *harga;
	int *stock;
public:
	book()	{
	pencipta= new char[20];
	judul=new char[20];
	penerbit=new char[20];
	harga= new float;
	stock=new int;
	}
	void feeddata();
	void editdata();
	void showdata();
	int search(char[],char[]);
	void beli();

};

void book::feeddata()	{
	cin.ignore();
	cout<<"\nInput nama pencipta : ";      cin.getline(pencipta,20);
	cout<<"Input nama judul : ";       cin.getline(judul,20);
	cout<<"Input nama penerbit : ";   cin.getline(penerbit,20);
	cout<<"Input nama harga: ";            cin>>*harga;
	cout<<"Input jumlah stock: ";   cin>>*stock;

}

void book::editdata()	{

	cout<<"\nInput nama pencipta : ";      cin.getline(pencipta,20);
	cout<<"Input nama judul : ";       cin.getline(judul,20);
	cout<<"Input nama penerbit : ";   cin.getline(penerbit,20);
	cout<<"Input nama harga: ";            cin>>*harga;
	cout<<"Input jumlah stock: ";   cin>>*stock;

}

void book::showdata()	{
	cout<<"\npencipta Name: "<<pencipta;
	cout<<"\njudul Name: "<<judul;
	cout<<"\npenerbit Name: "<<penerbit;
	cout<<"\nharga: "<<*harga;
	cout<<"\nPosisi stock: "<<*stock;

}

int book::search(char tbeli[20],char abeli[20] )	{
	if(strcmp(tbeli,judul)==0 && strcmp(abeli,pencipta)==0)
		return 1;
	else return 0;

}

void book::beli()	{
	int count;
	cout<<"\nMasukan jumlah buku yang dibeli: ";
	cin>>count;
	if(count<=*stock)	{
		*stock=*stock-count;
		cout<<"\nBuku berhasil dibeli";
		cout<<"\nJumlah harga : Rp. "<<(*harga)*count;
	}
	else
		cout<<"\nSalinan yang Diperlukan tidak dalam stock";
}

int main()	{
	book *B[20];
	int i=0,r,t,choice;
	char judulbeli[20],penciptabeli[20];
	while(1)	{
		cout<<"\n\n\t\tMENU"
		<<"\n1. Masukan antrean buku baru"
		<<"\n2. Beli buku"
		<<"\n3. Cari buku"
		<<"\n4. Edit detail buku"
		<<"\n5. Exit"
		<<"\n\nInput pilihan: ";
		cin>>choice;

		switch(choice)	{
			case 1:	B[i] = new book;
				B[i]->feeddata();
				i++;	break;

			case 2: cin.ignore();
				cout<<"\nInput judul Of Book: "; cin.getline(judulbeli,20);
				cout<<"Input pencipta Of Book: ";  cin.getline(penciptabeli,20);
				for(t=0;t<i;t++)	{
					if(B[t]->search(judulbeli,penciptabeli))	{
						B[t]->beli();
						break;
					}
				}
				if(t==1)
				cout<<"\n Buku tidak ada dalam stock";

				break;
			case 3: cin.ignore();
				cout<<"\nInput judul buku: "; cin.getline(judulbeli,20);
				cout<<"Input nama pencipta: ";  cin.getline(penciptabeli,20);

				for(t=0;t<i;t++)	{
					if(B[t]->search(judulbeli,penciptabeli))	{
						cout<<"\nBuku berhasil ditemukan";
						B[t]->showdata();
						break;
					}
				}
				if(t==i)
				cout<<"\n Buku tidak ada dalam stock";
				break;

			case 4: cin.ignore();
				cout<<"\nInput judul buku: "; cin.getline(judulbeli,20);
				cout<<"Input nama pencipta: ";  cin.getline(penciptabeli,20);

				for(t=0;t<i;t++)	{
					if(B[t]->search(judulbeli,penciptabeli))	{
						cout<<"\nBuku berhasil ditemukan";
						B[t]->editdata();
						break;
					}
				}
				if(t==i)
				cout<<"\nBuku tidak ada dalam stock";
				break;

			case 5:
			cout<<" Terima Kasih"<<endl;
			exit(0);
			default: cout<<"\nSalah dalam memilih pilihan";

		}
	}




	return 0;
}
