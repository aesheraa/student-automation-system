



#include "stdafx.h"
#include<iostream>
#include<string>
#include<conio.h>
#define MAX 150 
#define MAX 15
#define MAX 10

using namespace std;

void gorevli_menu();
void ana_menu();

class ogrenci {

public:

	string ad, soyad;
	int numara, vize, final;
	double ort;
	ogrenci() {};
	void yenikayit(string, string, int);

};



ogrenciler[MAX], ogrenciler1[MAX3];
void ogrenci::yenikayit(string a, strings, int n) {
	ad = a;

	soyad = s;
	numara = n;
}


class ogretmen {

public:

	string ogretmen_ad, ogretmen_soyad, sifre;
	string ders;

	int ogretmen_no;
	void yenikayit1(int, string, string, string, string);
	void ogretmen_menu();
};

ogretmenler[MAX2];


void ogretmen::yenikayit1(int n, string a, string s, string d, string pass) {

	ogretmen_no = n;
	ogretmen_ad=a;
	ogretmen_soyad = s;
	ders = d;
	sifre = pass;
}

void ogretmen::ogretmen_menu() {

	int secim, n;
	static double total;
	static int d = -1;

	system("cls");

	cout << " ogretmen not sistemi " << endl;
	cout << "______________________________" << endl;
	cout << "1. not girisi: ";
	cout << "2. sinif not ortalamasi";
	cout << " ogrenci listesi";
	cout << " 4. ana menu";

	secim = getch();


	switch (secim) {
	case '1':
		system("cls");
		cout << " notunu girmek icin ogrenci numarasini girin" << endl;
		cin >> n;
		for (int c = 0; c < 150; c++) {
			if (ogrenciler[c].numara  a == n) {

				system("cls")
					cout << " vize girin";
				cin >> ogrenciler[c].vize;
				cout << " final girin";
				cin >> ogrenciler[c].final;
				cout << " islem basarili" << endl;
				d++;

				ogrenciler[c].ort = double(ogrenciler[c].vize * 0.3 + ogrenciler[c].final + 0.7);

				ogrenciler1[d] = ogrenciler[c];

				system("pause");
				ogretmen_menu();
			}
		}

		cout << " ogrenci bulunamadi " << endl;
		system("pause");
		ogretmen_menu();

	case'2' :
		system("cls");
		cout << " sinifin not ortalamasi:";

		if (d < 0) {
			cout << " bu dersi alan ogrenci yok " << endl;
			system("pause");
			ogretmen_menu();

		}

		else {

			for (int x = 0; x <= d; x++)
				total += ogrenciler[x].ort;


			cout << total / (d + 1) << endl;
			system("pause");
			ogretmen_menu();
		}

	case'3':
		system("cls");
		for (int x = 0; x <= d; x++) {
			for (y = 0; y <= d; y++) {
				if (ogrenciler1[x].numara == ogrenciler[y].numara)

					cout << "ad : " << ogrenciler[x].ad << "\t soyad:" << ogrenciler[x].soyad << "\t numara " << "\t ortalamasi" << ogrenciler[x].ort << endl;
			}
		}

		system("pause");
		ogretmen_menu();
	case'4':
		system("cls");
		ana_menu();
	}
}

int main() {

	ana_menu();
	system("pause");
	return 0;
}

void ana_menu() {

	system("cls");
	int secim, b, num;
	string sifre;

	string  k_id, k_sifre;
	cout << " okul otomasyonu" << endl;
	cout << "____________________" << endl;
	cout << "1. gorevli girisi" << endl;
	cout << "2. gorevli girisi" << endl;
	cout << " 3. cikis" << endl;
	secim = getch();
	switch (secim) {

	case'1':
		system("cls");
		cout << "kullanici adi";
		cin >> k_id;

		if (k_id == "1") {

			cout << "sifre : ";
			cin >> k_sifre;

			if (k_sifre == "1") {
				gorevli_menu();

			}

			else {

				cout << " sifre yanlis !!!" << endl;
				system("pause");
				ana_menu();
			}
		}

		else {

			cout << "hatali giris " << endl;
			system("pause");
			ana_menu();

		}
	case'2':
		system("cls");
		cout << "numara girin:";
		cin >> num;

		for (b = 0; b < 15; b++) {

			if (ogretmenler[b].ogretmen_no == num) {
				cout << "sifre girin";
				cin >> sifre;
				if (ogretmenler[b].sifre == sifre) {
					cout << " sifre dogru";
					system("pause");
					ogretmenler[b].ogretmen_menu();

				}

				else {

					cout << "sifre yanliss";
					system("pause");
					ana_menu();

				}

			}

			else {

				cout << "numara yanliss";
				system("pause");
				ana_menu();
			}

		}

	case'3':
		exit(0);
	default:ana_menu();
	}

}

void gorevli_menu() {

	int secim, no, aranan;
	static int numara = 0, i = -1, a = -1;
	string ad, soyad, ders, s;
	system("cls");

	cout << "okul otomasyonu" << endl;
	cout << "____________________" << endl;

	cout << " 1.yeni ogrenci kayit" << endl;
	cout << " 2. ogrenci kayit sil" << endl;
	cout << " 3. ogrenci kayit listele" << endl;
	cout << " 4. yeni ogretmen kayit" << endl;
	cout << " 5. ogretmen kayit sil" << endl;
	cout << " 6. ogretmen listele " << endl;
	cout << " 7. ana menu " << endl;
	
	secim = getch();
	switch (secim) {

	case'1':
		system("cls");
		cout << "ad girin:";
		cin >> ad;
		cout << "soyad girin:" << endl;
		cin >> soyad;
		cout << "numara girin:";
		cin >> no;
		i++;
		ogrenciler[i].yenikayit(ad, soyad, no);
		gorevli_menu();

	case'2':
		system("cls");
		cout << "numara girin";
		cin >> aranan;
		for (int j = 0; j <= i; j++) {

			if (ogrenciler[j].numara == aranan) {
				for (int k = j; k < i; k++)
					ogrenciler[k] = ogrenciler[k + 1];
				cout << "kayit silindi" << endl;
				i--;
				system("pause");
				gorevli_menu();
			}
		}

		cout << " kayit bulunamadi" << endl;
		system("pause");
		gorevli_menu();

	case'3':
		system("cls");
		for (int j = 0; j <= i; j++)
			cout << "ad:" << ogrenciler[j].ad << "\t soyad: " << ogrenciler[j].soyad << "\t numara : " << ogrenciler[j].numara << endl;
		system("pause");
		gorevli_menu;

	case'4':

		system("cls");
		cout << "ad girin";
		cin >> ad;
		cout << "soyad girin";
		cin >> soyad;
		cout << " verecegi ders";
		cin >> ders;
		cout << " ogretmenin sifresi :";
		cin >> s;
		a++;
		numara++;
		ogretmenler[a].yeni_kayit1(numara, ad, soyad, ders, s);
		gorevli_menu();
	case'5':
		system(" cls ");
		cout << " numara girin";
		cin >> aranan;
		for (int j = 0; j <= a; j++) {
			if (ogretmenler[j].ogretmen_no == aranan) {
				for (int k = j; k < a; k++)
					ogretmenler[k] = ogretmenler[k + 1];
				cout << " kayit silindi" << endl;
				a--;
				system("pause");
				gorevli_menu();

			}
		}

		cout << " kayit bulunamadi" << endl;
		gorevli_menu();


	case'6':

			system("cls");
			for (int j = 0; j <= a; j++)
				cout << "no: " << ogretmenler[j].ogretmen_no << "\t ad: " << ogretmenler[j].ogretmen_ad << " \t soyad:" << ogretmenler[j].ogretmen_soyad << "\t verdigi ders" << ogretmenler[j].ders << endl;
			system("pause");
			gorevli_menu();

	case'7':
		ana_menu();
	defaut:
		cout << " hata!!!";
		gorevli_menu();

	}


}