#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <vector>
#include <cstring>
using namespace std;

/*
// dikt�rgenin alan�

int main() {
cout << "merhaba" << endl;
int en, boy, alan;

cout << "lutfen diktorgenin enini giriniz:";
cin >> en;
cout << endl;

cout << " lutfen diktorgenin boyunu giriniz:";
cin >> boy;
cout << endl;

alan = en * boy;
cout << "Dikdortgenin alani=" << alan << " metrekaredir.";

return 0;
}



// ekrana girilen sayiyi g�sterme

int main() {
	int deger;
	cout << "sayi giriniz:";
	cin >> deger;
	cout << "sayi:" << deger << "\n";
	system("pause");
	return 0;
}

// �rnek6 - girilen say�lar�n toplam� ve ortalmas� ve
t�rk�e karakter aktifle�tirme

int main() {
	setlocale(LC_ALL, "Turkish");
	double s1, s2;
	double ort, top;
	
	cout << "1.say�y� giriniz: ";
	cin >> s1;
	
	cout << "2. say�y� giriniz: ";
	cin >> s2;

	top = s1 + s2;
	ort = top / 2;

	cout << "say�lar�n toplam�: " << top << endl;
	cout << "say�lar�n ortalamas�: " << ort << endl;
	return 0;
}

//�rnek 7- de�erlerin ortalamas�n� bulup yazd�rma

int main() {
	int y1 = 50;
	double y2 = 20;
	int y3 = 40;
	double ort = (y1 + y2 + y3) / 3;
	cout << "ortalama : " << ort << endl;
	return 0;
}

//�rnek 8- i de�i�keni yerel de�i�kene (main) tan�mland���ndan fonk1 i�inde kullan�lamaz.

int fonk1() {
	cout << "sayi degeri 2:" << i << endl;
	return 0;
}
int main() {
	int i = 5;
	cout << "sayi degeri 1:" << i << endl;
	fonk1();
	return 0;
}


//�rnek 9- k�resel de�i�ken tan�mlama

int i = 5; 
int fonk1() {
	cout << "sayi degeri2: " << i << endl;
	return 0;
}
int main() {
	cout << "sayi degeri1: " << i << endl;
	fonk1();
	return 0;
}

//�rnek 10 - de�i�mez tan�mlama "const" arac�l��� ile yap�l�r

int const yasi = 15;
char const cins = 'e';

int main() {
	cout << "yas: " << yasi << endl;
	cout << "cinsiyeti : " << cins << endl;
	return 0;

}

//�rnek 13 - yaz�l� ortalams� hesaplayark kald� ge�ti yazd�rma
int main() {
	setlocale(LC_ALL, "turkish");
	double y1, y2, y3;
	double ort;
	
	cout << "1.yaz�l�y� giriniz: ";
	cin >> y1;
	cout << "2.yaz�l�y� giriniz: ";
	cin >> y2;
	cout << "3.yaz�l�y� giriniz: ";
	cin >> y3;
		ort = (double)(y1 + y2 + y3) / 3;
	cout << "ortalama : " << ort << endl;
	if (ort < 50)
		cout << "kald�n�z." << endl;
	else
		cout << "ge�tiniz." << endl;
	return 0;
}

�rnek- 14
//girilen ssay�lar�n negatif olmas�n� belirleme

int main() {
	int sayi1, sayi2;
	cout << "birinci sayiyi giriniz: ";
	cin >> sayi1;
	cout << "ikinci sayiyi giriniz: ";
	cin >> sayi2;
	if (sayi1 > 0 && sayi2 > 0)
		cout << "her iki sayi pozitiftir." << endl;
	else
		cout << "sayilardan en az biri negatif" << endl;
	return 0;
}

// �rnek 15- girilen say�n�n tek veya �ift oldu�unu g�sterme

int main() {
	int sayi;
	cout << "sayiyi giriniz: ";
	cin >> sayi;
	if (sayi % 2 == 0)
		cout << "girilen sayi cifttir." << endl;
	else
		cout << "girilen sayi tektir." << endl;
	return 0;
}

//�rnek 16- girilen say�n�n 3 ve 5 e tam b�l�nebiliyormu?
int main() {
	setlocale(LC_ALL, "turkish");
	int sayi;
	cout << "sayiyi giriniz lutfen.";
	cin>> sayi;
	if (sayi % 3 == 0 && sayi % 5 == 0)
		cout << "sayi 3 ve 5'e tam b�l�nebiliyor." << endl;
	else
		cout << "sayi tam b�l�nemiyor. :(" << endl;
	return 0;
}

//�rnek 17 - if ile kar��la�t�rma - say�n�n b�y�k olma durumu
int sayi;
int main() {
cout << "sayiyi giriniz:" << endl;
cin >> sayi;
if (sayi > 11)
cout << "kosul dogru" << endl;
else
cout << "kosul yanlis" << endl;
return 0;
}

//�rnek 18- say�n�n pozitif veya negatif olma tespiti
int sayi;
int main() {
	setlocale(LC_ALL, "turkish");
	cout << "l�tfen say�y� giriniz. " << endl;
	cin >> sayi;
	if (sayi > 0)
		cout << "say�n�z pozitiftir." << endl;
	else if (sayi < 0)
		cout << "say�n�z negatiftir." << endl;
	else
		cout << "say�n�z n�tr yani s�f�rd�r." << endl;
	return 0;
}

// �rnek 19 - 
// (x^2 - 10x + 21 = 0) denkleminin k�klerini bulma.
// (b^2 - 4ac) hesaplan�r �nce
// delta > 0 ise 2 k�k var. delta < 0 ise k�k yoktur
// delta = 0 ise tek k�k vard�r.

int main() {
	int a = 1;
	int b = -10;
	int c = 21;
	float x1, x2, delta;
	delta = b * b - 4 * a * c;
	if (delta > 0.0) {
		x1 = (-b + sqrt(delta)) / 2 * a;
		x2 = (-b - sqrt(delta)) / 2 * a;
		cout << "x1=" << x1 << endl;
		cout << "x2=" << x2 << endl;
	}
	else if (delta == 0.0) {
		x1 = -b / (2 * a);
		cout << "x1=" << x1 << endl;
	}
	else
		cout << "gercek kok yok." << endl;
	return 0;
	}


//�rnek 20 - k���k hesap makinesi yap�m�
int main() {
	setlocale(LC_ALL, "turkish");
	int secim;
	double i, j;
	cout << "bir i�lem se�iniz." << endl;
	cout << "1> karek�k alma" << endl;
	cout << "2> �s alma" << endl;
	cout << "3> e taban�nda logaritma" << endl;
	cout << "4> 10 taban�nda logaritma" << endl;
	cin >> secim;
	if (secim == 1) 
	{
		cout << "sayiyi girniz:";
		cin >> i;
		cout << sqrt(i) << endl;
	}
	else if (secim == 2)
	{
		cout << "taban say�s�n� giriniz: ";
		cin >> i;
		cout << "�s say�s�n� giriniz: ";
		cin >> j;
		cout << pow(i, j) << endl;
	}
	else if (secim == 3)
	{
		cout << "sayiyi giriniz:";
		cin >> i;
		cout << log(i) << endl;
	}
	else if (secim == 4)
	{
		cout << "sayiyi giriniz:";
		cin >> i;
		cout << log10(i) << endl;

	}
	else cout << "Hatal� se�im yapt�n�z.L�tfen ge�erli i�lem se�iniz";
	return 0;
	}

//�rnek 21 - 1ile 100 aras�nda ki �ift say�lar bul.
int main() {
	for (int i = 1; i <= 100; i++) {
		if (i % 2 == 0)
			cout << i << endl;
	}
	return 0;
}

//�rnek 23 - verilen say�n�n fakt�ryelini bul
int main() {
	int i, sayi ;
	int faktoriyel = 1;
baslat:
	cout << "sayi:";
	cin >> sayi;
	if (sayi>0)
		for (i = 1; i <= sayi;i++)
		{
			faktoriyel *= i;
		}
	else
	{
		cout << "negatif sayi girdiniz.";
		cout << "lutfen pozitif sayi giriniz"<<endl;
		goto baslat;
	}
	cout << sayi << "! :" << faktoriyel << endl;
	return 0;
}

// �rnek 24 - 5 say�n�n ortalamas�
int main() {
	int sayi, ort, toplam = 0;
	for (int i = 1; i <= 5; i++)
	{
		cout << i << ".sayiyi giriniz: ";
		cin >> sayi;
		toplam += sayi;
	}
	ort = toplam / 5;
	cout << "girilen 5 sayinin ortalamas�:" << ort << endl;
	return 0;
}



//�rnek 25 - 5 den k���k tam say�lar� listele (while)
int i = i;
int n = 5;
int main() {
	while (i < n)
		cout << i++ << endl;
	return 0;
}

//�rnek 26- say�n�n fakt�ryelini bulan kod
int main() {
	int sayi, i = 1, faktoriyel = 1;
	cout << "sayi:";
	cin >> sayi;
	while (i<= sayi)
	{
		faktoriyel *= i;
		i++;
	}
	cout << sayi << "!:" << faktoriyel << endl;
	return 0;
}


//d�ng�lerden ��k��
//�rnek 27 - 1 den b�y�k 32 den k���k t�m asal say�lar
int main() {
	int i;
	int n = 2;
	while (++n < 32) {
	i = 1;
	while (++i < n)
		if (n % i == 0)
			break;
	if (i == n)
		cout << n << endl;
}
		return 0;

}


// �rnek 28- 1 ile 15 aras�ndaki tam say�lar. 8 ve 13 aras� hari�
int i;
int main() {
	for ( i =1; i < 15; i++)
	{
		if (i > 8 && i < 13)
			continue;
		cout << i << endl;

	}
	return 0;
}

// �rnek 29- girilen say� asalm� de�ilmi bulan kod
int main() {
	int sayi, sayac = 0;
	cout << "bir sayi giriniz: ";
	cin >> sayi;
	for (int j = 2; j < sayi;j++) {
		if (sayi % j == 0) {
			sayac++; break;

		}
	}
	if (sayac == 0) {
		cout << "sayiniz asaldir." << endl;

	}
	else
		cout << "sayiniz asal degildir." << endl;
	return 0;
}

//switch kullanarak hesap makinesi yap�m�
//�rnek 30-4 i�lem yapan hesap makinesi
int main() {
	cout << "--hesap makinesi--" << endl << endl;
	cout << "toplama icin + kullaniniz" << endl;
	cout << "cikarma icin - kullaniniz" << endl;
	cout << "carpma icin * kullaniniz" << endl;
	cout << "bolme icin / kullaniniz" << endl << endl;

	double sayi1, sayi2, sonuc;
	char islem;

	cout << "birinci sayiyi giriniz: ";
	cin >> sayi1;
	cout << endl;

	cout << "islemi giriniz: ";
	cin >> islem;
	cout << endl;

	cout << "ikinci sayiyi giriniz: ";
	cin >> sayi2;
	cout << endl;
	
	switch (islem)
	{ 
	case '+':
		sonuc = sayi1 + sayi2;
		cout << "toplamanin sunucu: " << sonuc << endl; break;
	case'-':
		sonuc = sayi1 - sayi2;
		cout << "cikarmanin sonucu: " << sonuc << endl; break;
	case'*':
		sonuc = sayi1 * sayi2;
		cout << "carpmanin sonucu: " << sonuc << endl; break;
	case'/':
		sonuc = sayi1 / sayi2;
		cout << "b�lmenin sonucu:" << sonuc << endl; break;
	
	}
	return 0;
	
}

//�rnek 31 - dizilerin kullan�m�
int a[10];
int main() {
	a[0] = 2;
	a[1] = 7;
	a[2] = 0;
	a[3] = 3;
	a[4] = 9;
	cout << a[0] << endl;
	cout << a[1] << endl;
	cout << a[2] << endl;
	cout << a[3] << endl;
	cout << a[4] << endl;
	return 0;
}


// �rnek 32 - 
int i, topla = 0;
int a[5] = { 2,7,0,3,9 };
int main() {
	for (i = 0; i < 5, i++;)
		topla+=a[i];
	cout << "dizi elemanlarinin toplami: " << topla << endl;
	return 0;
}


//s�nav sorusu

int main()
{
	int i, sayi;
	unsigned long long int faktoriyel = 1;
baslat:
	cout << "sayi:";
	cin >> sayi;
	if (sayi > 0)
		for (i = 1; i <= sayi; i++)
		{
			faktoriyel *= i;
		}
	else
	{
		cout << "negatif sayi girdiniz.";
		cout << "lutfen pozitif sayi giriniz" << endl;
		goto baslat;
	}
	cout << sayi << "! :" << faktoriyel << endl;
	return 0;
}

//s�nav sorusu

int main()
{
	setlocale(LC_ALL, "turkish");
	int kt, io, so, syc;
	double ucret;

	printf("sayac�n ilk okuma de�erini giriniz : ");
	fflush(stdout);
	scanf_s("%d", &io);

	printf("sayac�n son okuma de�erini giriniz : ");
	fflush(stdout);
	scanf_s("%d", &so);

	syc = so - io;

	printf("elektrik kullan�m t�r� : [mesken=0 , i�yeri=1]\n");
	fflush(stdout);
	scanf_s("%d", &kt);

	if (kt == 1) ucret = syc * 3;
	else if (syc <= 80) ucret = syc * 2;
	else if (syc > 80 && syc <= 120)
		ucret = 160 + (syc - 80) * 3;
	else
		ucret = 160 + 120 + (syc - 120) * 5;
	printf("�cretiniz �u kadard�r : %g %s", ucret, "tl");
	return 0;

}

//�rnek 33
// girilen n tane say�n�n toplam�n� ve ortalamas�n� bulan program
int i, n, dizi[100], toplam;
float ortalama;
int main() {
	cout << "n degerini giriniz: ";
	cin >> n;
	for (i = 0; i < n; i++) {
		cout << "dizinin " << i << ".elemanini giriniz= ";
		cin >> dizi[i];
		toplam += dizi[i];
	}
	for (i = 0; i < n; i++) {
		cout << dizi[i] << "\n";
	}
	cout << "ortalama= " << toplam / n << "\n";
	return 0;
}


//�rnek 34
///girilen say�lardan en b�y�k olan� bulan kod

int i, n,dizi[10], enbuyuk;
int main() 
{
	cout << "kac sayi gireceksiniz ? "<<endl;
	cin >> n;
	for (i = 0; i < n; i++) 
	{
		cout << "dizinin " << i << ".elemanini girin= ";
		cin >> dizi[i];
	}
	enbuyuk = dizi[0];//ilk olarak bir tane referans buyuk de�er se�iliyor
	for (i = 0; i < n; i++) {
		if (dizi[i] > enbuyuk) 
		{ 
			enbuyuk = dizi[i]; 
		}
	}
	cout << "en buyuk eleman= " << enbuyuk << endl;
	return 0;
}




//�rnek 35
/*
//s�n�ftaki ��renci say�s�na g�re notlar� girilecek dersten 60 �st� alanlar� bulan kod
int i, n, gecensayisi;
int main() {
	setlocale(LC_ALL, "turkish");
	cout << "��renci say�s�n� giriniz: " << endl;
	cin >> n;
	float dizi[n];
	for (i = 0; i < n; i++) {
		cout << i + 1 << ". ��rencinin notunu giriniz: ";
		cin >> dizi[i];

	}
	for (i = 0; i < n; i++) {
		if (dizi[i] >= 60) {
			gecensayisi = gecensayisi + 1;

		}
	}
	cout << " Ge�en ��renci say�s�: " << gecensayisi << endl;
	return 0;
}
*/

//�rnek 35 do�ru ��z�m� vector ile
/*
int i, n, gecensayisi;
int main() {
	setlocale(LC_ALL, "turkish");
	cout << "��renci say�s�n� giriniz: " << endl;
	cin >> n;
	vector<float> dizi(n);
	for (i = 0; i < n; i++) {
		cout << i + 1 << ". ��rencinin notunu giriniz: ";
		cin >> dizi[i];

	}
	for (i = 0; i < n; i++) {
		if (dizi[i] >= 70) {
			gecensayisi = gecensayisi + 1;

		}
	}
	cout << " Ge�en ��renci say�s�: " << gecensayisi << endl;
	return 0;
}
*/
//�rnek 36-
/*
//girilen 10 adet say�y� bir diziye at�yoruz. att���m�z say�lar� birbiriyle 
//kar��la�t�r�l�p b�y�k olanla k���k olan� yer de�i�tiriyoruz.

int main() {
	int dizi[10], temp;
	for (int i = 0; i <= 9; i++) {
		cout << "sayi giriniz: ";
		cin >> dizi[i];

	}
	for (int a = 0; a <= 9; a++) {
		for (int b = 0; b <= 9; b++) {
			if (dizi[b] > dizi[b + 1]) {
				temp = dizi[b];
				dizi[b] = dizi[b + 1];
				dizi[b + 1] = temp;
			}
		}
	}
	for (int d = 0; d <= 9; d++) {
		cout << dizi[d] << endl;

	}
	return 0;
}
*/
//�rnek 37- not d�n�lecek
/*
//eleman say�s�n� belirledi�imiz bir dizinin i�ine 0 ile 100 aras� rasgele say�
//atayan ve toplam�n� ekrana yazd�ran kod

*/

//�rnek 38-
///�ok boyutlu diziler t�r {dizi.ad� [boyut1] [boyut2]}
//iki boyutlu diziye de�erler at�y�p ekrana yazd�r
/*
int dizi[5][2] = { {1,2},{7,9},{3,0},{5,1},{1,1} };
int main() {
	cout << "dizi elemanlari: " << endl;
	for(int i=0;i<5;i++)
		for (int j = 0; j < 2; j++) {
			cout << "[" << i << "][" << j << "]:";
			cout<< dizi[i][j] << endl;

		}
	return 0;
}
*/

//�rnek 39-
///klavyeden girilen 3*3 l�k matrisin toplam�n� bulan kod
/*
int main() {
	int bir[3][3], iki[3][3], sonuc[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; i < 3; i++) {
			cout << "birinci matris [" << i + 1 << "][" << j + 1 << "]=";
			cin >> bir[i][j];
		}
	}
	cout << endl;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "ikinci matris [" << i + 1 << "][" << j + 1 << "]=";
			cin >> iki[i][j];
		}

	}
	cout << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) {
			sonuc[i][j] = bir[i][j] + iki[i][j];
		}
	}
	cout << "matrislerin toplam�:\n\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) {
			cout << sonuc[i][j] << "	";
		}
		cout << endl << endl;

	}
	return 0;
}

*/

//�rnek 41-
///girilen metni alt alta yazd�ran kod
//get_s kullanarak metni okutuyoruz.katar kullanarak bo�luk �rnek
/*
char katar[50];
int i;
int main()
{
	gets_s (katar);
	for (i = 0; katar[i]; i++)
		cout << katar[i] << endl;
	return 0;
}
*/

//�rnek 42-
/// HATA VAR D�ZELT***************************************
// 
///katar kullanarak kopyalama(strcpy)
/*
char katar[50];
int i;
main() 
{
	strcpy_s(katar, "turkiye");
	for (i = 0; katar[i]; i++)
		cout << katar[i] << endl;
	return 0;
}
*/

//ornek 43
///katarlar�n birle�tirilmesi(strcat)
/*
char katar[50];
int i;
main()
{
	strcpy(katar, "Turkiye");
	strcat(katar, " ve kazakistan");
	cout << katar;
	cout << endl;
	return 0;
}
*/

//ornek 44
///katarlarin karsilastirlmasi
/*
char katar1[50], katar2[50];
int main() {
	strcpy_s(katar1, "kazakistan");
	strcpy_s(katar2, "kazak");
	if (strcmp(katar1, katar2))
		cout << "katarlar birbirinin farkli" << endl;
	else
		cout << "katarlar birbirinin ayni." << endl;
	return 0;
}
*/

//ornek 45
///katarlarin uzunlugunu bulamak
/*
char katar[50];
int main() {
	strcpy_s(katar, "kazakistan");
	cout << "kelime:" << katar << endl;
	cout << "harf sayisi:" << strlen(katar) << endl;
	return 0;
	
}
*/

//ornek 46
///katar dizilere baslangic degeri atamak
/*
int i, j;
char a[][80] = { "pazartesi","sali","carsamba","persembe","cuma","cumartesi","pazar" };
int main() {
	for (i = 0; a[i][0]; i++) {
		for (j = 0; a[i][j]; j++)
			cout << a[i][j];
		cout << endl;
	}
	return 0;
}
*/

//ornek 47
///pointer gosterge kavrami
//* isareti kullanilir & ile adres bulunur
/*
int main() {
	int a = 500;
	int* b;
	b=&a;
	cout << "a degiskenin degeri:" << a << endl;
	cout << "b gostergesinin adresi:" << b << endl;
	cout << "b gostergesinin degeri:" << *b << endl;
	cout << "a degiskenin adresi:" << &a << endl;
	cout << "b gostergesinin adresi:" << &b << endl;
	return 0;
}
*/

//ornek 50
/*
int us(int sayi, int ussu);
int main() {
	cout << "islem sonucu: " << us(5, 2) << endl;
	return 0;
}
int us(int sayi, int ussu) {
	int sonuc = 1;
	int i;
	for (i = 1; i <= ussu; i++)
		sonuc *= sayi;
	return 0;

}
*/

//ornek 51
/*
int us(int sayi, int ussu) {
	int sonuc = 1;
	int i;
	for (i = 1; i <= ussu; i++)
		sonuc *= sayi;
	return 0;
}
int main() {
	cout << "islem sonucu: " << us(5, 2) << endl;
	return 0;
}
*/

//ornek 52
/*
void mesaj();
int main() {
	mesaj();
	return 0;

}
void mesaj() {
	cout << "hos geldiniz.." << endl;
}
*/

//ornek 53
///\fonksiyonun deger dondurmesi
/*
int kare(int x) {
	int kare;
	kare = x * x;
	return (kare);
}
int main() {
	int s;
	cout << "lutfen sayi giriniz: ";
	cin >> s;
	cout << kare(s) << endl;
	return 0;
}
*/

//ornek 54
///dikdortgenin cevresi ve alani hesaplaniyor
/*
int alan(int kisa, int uzun) {
	return(kisa * uzun);
}
int cevre(int kisa, int uzun) {
	return (kisa + uzun) * 2;

}
int main() {
	int kk, uk;
	cout << "kisa kenar: ";
	cin >> kk;
	cout << "uzun kenar: ";
	cin >> uk;
	cout << "alan = " << alan(kk, uk) << endl;
	cout << "cevre = " << cevre(kk, uk) << endl;
	return 0;
}
*/

//ornek 55
///kuresel degisken
/*
int sayi;
int sayilar();
int main() {
	//sayi kuresel degisken. bu degiskenin degeri program sonuna kadar sabit kalir.
	sayi = 10;
	cout << "islem sonucu :" << sayilar() << endl;
	return 0;

}
int sayilar() {
	return (sayi);
}
*/

//ornek 56
///static degisken ile
/*
int sayilar();
int main(){
cout << "sonuc: " << sayilar() << endl;
cout << "sonuc: " << sayilar() << endl;
cout << "sonuc: " << sayilar() << endl;
return 0;
}
int sayilar() {
	static int sayi = 1;
	sayi *= 5;
	return(sayi);
}
*/

//ornek 58
/*
int fonk1(int x);
int main() {
	int sayi = 4;
	cout << "sonuc 1: " << fonk1(sayi) << endl;
	cout << "sonuc 2: " << sayi << endl;
	return 0;
}
int fonk1(int sayi) {
	sayi += 15;
	return(sayi);
}
*/

//ornek 59
///referans ile fonksiyon cagirilmasi
/*
int fonk1(int* x);
int main() {
	int sayi = 4;
	int* psayi;
	psayi = &sayi;
	cout << "sonuc 1: " << fonk1(psayi) << endl;
	cout << "sonuc 2: " << sayi << endl;
	return 0;
}
int fonk1(int* psayi) {
	*psayi = *psayi + 15;
	return(*psayi);
}
*/

//ornek 60
///gosterge kullanarak islem yapilmasi
/*
void fonk1(int& sayi) {
	sayi += 30;
}
int main() {
	int sayi = 5;
	fonk1(sayi);
	cout << "toplam: " << sayi << endl;
	return 0;
}
*/

//ornek 61
///gosterge kullanmadan basvurular kullanilarak islem yapilmasi
/*
void fonk1(int& sayi) {
	sayi += 30;
}
int main() {
	int sayi = 5;
	fonk1(sayi);
	cout << "toplam: " << sayi << endl;
	return 0;
}
*/

//ornek 62
/*
int main() {
	int sayi = 5;
	cout << cos(sayi) << endl;
	return 0;
}
*/

//ornek 63
///girilen sayinin karekokunu hesaplama
/*
int main() {
	double sayi;
	cout << "sayiyi gir: ";
	cin >> sayi;
	cout << "girilen sayinin karekoku: " << sqrt(sayi) << endl;
	return 0;
}
*/

//ornek 64
///Klavyeden girilen taban ve �s de�erine g�re sonucu veren C++ kod
/*
int main() {
	double taban, us, sonuc;
	cout << "taban: ";
	cin >> taban;
	cout << "us: ";
	cin >> us;
	cout << "sonuc: " << pow(taban, us) << endl;
	return 0;
}
*/

//ornek 65
///1�den N�e kadar olan t�m say�lar�n karelerini ekranda g�steriyor
/*
int main() {
	double s, n;
	cout << "n: ";
	cin >> n;
	for (s = 1; s <= n; s++)
		cout << "sayi=" << s << "\t karesi= " << pow(s, 2) << endl;
	return 0;
	
}
*/

//ornek 66
///Bir say�n�n mutlak de�erini bulan C++ Kod
/*
int main() {
	int sayi = -5;
	cout << sayi << " sayinin mutlak degeri : " << abs(sayi) << endl;
	return 0;
}
*/

//ornek 67
///�ki say�dan k���k olan� ve b�y�k olan� bulan C++ Kod
/*
int main() {
	double s1 = 10, s2 = 15;
	cout << "min: " << fmin(s1, s2) << endl;
	cout << "max: " << fmax(s1, s2) << endl;
	return 0;
}
*/

//ornek 68
///0-90 derece aras� sin�s de�erlerinin listeliyor.
/*
int main() {
	for (double i = 0; i <= 90; i++)
	{cout<<i<<": "<<sin(i)<<endl;

	}
	return 0;
}
*/

//ornek 69
///C++ dersinde 15 ��rencinin final s�nav�ndan ald�klar� notlar:15-60-68-68-68-98-92-48-78-52-63-65-10-2-59-86
//S�nav notlar�n�n ortalamas�n�, varyans�n� ve standart sapmas�n� hesaplayan program� yaz�n�z.
/*
void oku(int[], int);
void oku(int notDizi[], int boyut)
{
	cout << "notalari giriniz: " << endl;
	for (int i = 0; i < boyut; i++)
		cin >> notDizi[i];
}
int main()
{
	int mevcut;
	int* notlar;
	double aritmatik, var, std, toplam1 = 0, toplam2 = 0;
	
	cout << "sinava giren ogrenci sayisini giriniz: " << endl;
	cin >> mevcut;
	notlar = new int[mevcut];
	oku(notlar, mevcut);

	for (int i = 0; i < mevcut; i++) {
		toplam1 += notlar[i];
	}
	aritmatik = toplam1 / mevcut;

	for (int i = 0; i < mevcut; i++) {
		toplam2 += pow(notlar[i] - aritmatik, 2);

	}
	var = toplam2 / (mevcut - 1);
	std = sqrt(var);

	cout << "not ortalamasi= " << aritmatik << endl;
	cout << "varyansi= " << var <<endl;
	cout << "standart sapmasi= " << std <<endl;
	return 0;
}
*/
//ornek 70
///Zar deneyi program� yaz�n�z. Bu program, kullan�c�n�n se�ti�i at�� say�s� ve hedef say�ya g�re olas�l�k hesab� yapacak.
/*
int main() {
	double sayi, i, k, tut, devam, olasilik, hedef;
	while (1) {
		k = 0;
		cout << "zar kac kere atilacak: " << endl;
		cin >> i;
		tut = i;
	basla: 
		cout << "hangi durum hesaplansin ? [1,2,3,4,5,6]" << endl;
		cin >> hedef;
		if (hedef < 1 || hedef>6) {
			cout << "gecersiz secim yaptiniz..";
			goto basla;

		}
		srand(time(NULL));
		while (i != 0){
			sayi = rand() % 6 + 1;
			cout << "gelen zar: " << sayi << endl;
			if (sayi == hedef) {
				k += 1;
			}
			i--;
		}
		cout << endl;
		cout << "sectiginiz zarin gelme olasiligi: " << (k / tut) << endl;
		cout << "deney tekrari icin: 1 - deney sonucu icin: 2 --->";
		cin >> devam;
		if (devam == 1) {
			continue;
		}
		else {
			cout << "program sonlandi"; break;
		}
	}
	return 0;
}
*/

//ornek 71
///Para atma deneyi program� yaz�n�z. Bu program, kullan�c�n�n se�ti�i at�� say�s� ve yaz�-tura se�imine g�re olas�l�k hesab� yapacak.
/*
int main() {
	double sayi, i, k, tut, devam;
	double olsailik, gelen;
	while (1)
	{
		k = 0;
		cout << "para kac kere atilacak: " << endl;
		cin >> i;
		tut = i;
	basla: 
		cout << "yazi(0) olasiligi mi hesaplansin? " << endl;
		cout << "tura(1) olasiligi mi hesaplansin? " << endl;
		cin >> gelen;
		if (gelen != 0 && gelen != 1) {
			cout << "gecersiz secim yaptiniz! " << endl;
			goto basla;

		}
		srand(time(NULL));
		while (i!=0)
		{
			sayi = rand() % 2;
			cout << "gelen zar: " << sayi;
			if (sayi == 1) 
			{
				cout << " tura geldi" << endl;

			}
			else
			{
				cout << " yazi geldi" << endl;

			}
			if (sayi==gelen)
			{
				k += 1;

			}
			i--;
			

			}
		if (gelen==1){
			cout << "tura gelme olasiligi: " << (k / tut) << endl;

		}
		if (gelen == 0) {
			cout << "yazi gelme olasiligi: " << (k / tut) << endl;

		}
		cout << "program sonlandi"; break;
	}
	return 0;
}
*/

//ornek 72
///yapilar
/*
struct personel
{
	int numara;
	char adi[25];
	double ucret;
}p;
int main() {
	p.numara = 100;
	strcpy_s(p.adi, "burak");
	p.ucret = 200;
	cout << "sicil numarasi: " << p.numara << endl;
	cout << "personel adi: " << p.adi << endl;
	cout << "ucreti: " << p.ucret << endl;
	return 0;
}
*/

//ornek 73
/// birden fazla yapinin tanimlanmasi
/*
struct personel
{
	int numara;
	char adi[10];
	double ucret;

}p1,p2;
int main() {
	p1.numara = 100;
	strcpy_s(p1.adi, "burak");
	p1.ucret = 200;
	p2.numara = 250;
	strcpy_s(p2.adi, "ayse");
	p2.ucret = 340;

	cout << "sicil numarasi: " << p1.numara << endl;
	cout << "personel adi: " << p1.adi << endl;
	cout << "ucreti: " << p1.ucret << endl;
	cout << "\n\n";
	cout << "sicil numarasi: " << p2.numara << endl;
	cout << "personel adi: " << p2.adi << endl;
	cout << "ucreti: " << p2.ucret << endl;
	return 0;
}
*/

//ornek 74 
///baslangic degeri atamak
/*
struct koordinat
{
	int x, y;

}p = { 12,25 };
int main() {
	cout << "x degeri: " << p.x << endl;
	cout << "y degeri: " << p.y << endl;
	return 0;
}
*/

//ornek 75
///fonksiyon kullanimi
/*
struct sayi
{
	int i;
	int j;

}koordinat = { 5,23 };
void yaz(struct sayi x);
int main() {
	yaz(koordinat);
	return 0;
}
void yaz(struct sayi x) {
	cout << "x degeri: " << x.i << endl;
	cout << "y degeri: " << x.j << endl;
}
*/

//ornek 76
///yapilara gosterge bildirimi *p 'ile
/*
struct te
{
	int i;
	char katar[20];

}k,*p;
int main() {
	p = &k;
	k.i = 10;
	p->i = 20;
	strcpy_s(p->katar, "test");
	cout << k.i << endl;
	cout << p->i << endl;
	cout << p->katar << endl;
	return 0;
}
*/

//ornek 77
///birlikler
//HATA VAR COZZZZZZZZZZZ
/*
union personel
{
	int numara;
	char adi[5];
	double ucret;
}p;
int main() {
	p.numara = 100;
	strcpy_s(p.adi, "ahmet");
	p.ucret = 200;

	cout << "sicil numarai: " << p.numara << endl;
	cout << "personel adi: " << p.adi << endl; 
	cout << "ucreti: " << p.ucret << endl;
	return 0;


}
*/

//ornek 78
///bir kure nesnesi olusturmak ve kullanmak
/*
const double pi = 3.14159;
struct kure {
	float r;
	float x, y, z;
	float hacim() {
		return (r * r * r * 4 * pi / 3);
	}
	float alan() {
		return (r * r * 4 * pi);
	}
}k;
int main() {
	k.r = 1.0;
	k.r = 2.0;
	k.r = 3.0;
	k.r = 4.0;
	cout << "x=" << k.x;
	cout << ",y=" << k.y;
	cout << ",z=" << k.z;
	cout << ",r=" << k.r << endl;
	cout << "hacim= " << k.hacim() << endl;
	cout << "alan= " << k.alan() << endl;
	return 0;

}
*/

//ornek 79
///class ile sinif olusturma
/*
const double pi = 3.14159;
class kure {
public:
	float r;
	float x, y, z;
	float hacim() {
		return (r * r * r * 4 * pi / 3);
	}
	float alan() {
		return (r * r * 4 * pi);
	}
}k;
int main() {
	k.r = 1.0;
	k.r = 2.0;
	k.r = 3.0;
	k.r = 4.0;
	cout << "x=" << k.x;
	cout << ",y=" << k.y;
	cout << ",z=" << k.z;
	cout << ",r=" << k.r << endl;
	cout << "hacim= " << k.hacim() << endl;
	cout << "alan= " << k.alan() << endl;
	return 0;

}
*/

////ORNEK UYGULAMA SORULARI

//ORNEK 1= iki sayinin farkini alan program

/*
int main() {
	int a, b, fark;
	cout << "gir, iki sayi" << endl;
	cin >> a >> b;
	fark = a - b;
	cout << "fark...:"<<fark << endl;
	return 0;
}
*/
//ORNEK 2= girilen a ve b sayilarinin ortalamasini alan program
/*
int main() {
	int a, b;
	float ort;
	cout << ("iki sayi giriniz..:\n");
	cin >> a >> b;
	ort = (float)(a + b) / 2;
	cout << "ortalama..: " << ort << endl;
	return 0;
}
*/

//ORNEK 3= girilen sayilarin kucuk olani once yazdiran program
///HATALI COZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ
/*
int main()
{
	int a, b, c;
	printf("iki sayi giriniz\n");
	fflush(stdout);
	scanf("%d,%d ,&a,&b");
	if (a > b)
	{
		c = a;
		a = b;
		b = c;
	}
	fflush(stdout);
	printf("sirala %d,%d", a, b);
	return 0;
}
*/

//ORNEK 4= birbirinden farkli 3 sayi icerisinden en buyugunu bulan programi yaziniz
/*
int main() {
	int s1, s2, s3, enb;
	cout << "uc sayi giriniz\n";
	cin >> s1 >> s2 >> s3;
	enb = s1;
	if (s2 > enb)
		enb = s2;
	if (s3 > enb)
		enb = s3;
	cout << "en buyugu :" << enb << endl;
	return 0;
}
*/

//ORNEK 5= girilen bir sayinin tam kare olup olmadigini bulan programi yaziniz
/*
int main() {
	int a, b, c;
	cout << "bir sayi giriniz\n";
	cin >> a;
	b = sqrt(a);
	c = b * b;
	cout << ((a == c) ? "tam kare" : "tam kare degil");
	return 0;
}
*/

//ORNEK 6= 100luk sisteme gore girilen basari notunu harfli sistemne ceviren program
///ORNEK 7= girilen gun numarasina gore haftanin gununu ekran gosteren program

//ORNEK 8= 0 dan 24 e kadar olan cift sayilarin toplamini yazan program
/*
int main() {
	int i, t = 0;
	for (i = 0; i <= 24; i += 2)
	{
		t = t + i;		
	}
	cout << "toplam=" << t;
	return 0;
}
*/

//ORNEK 9= girilen sayi sifirdan farkli oldugu surece o sayinin karesini alan program
/*
int main()
{
	int a;
	do
	{
		cout << "bir sayi giriniz [cikis icin 0 a basiniz]\n";
			cin >> a;
		if (a == 0)break;
		cout << "karesi= " << a * a << endl;
	} 
	while (a != 0);
	cout << "donguden cikildi!";
	return 0;
}
*/

//ORNEK 10= girilen sayilarin ortalamasini bulan program
//kod hatalio fixleee


/*
int main()
{
	int s = 0, top = 0, n = 1;
	double ort;
	do
	{
		s++;
		cout << s << ".sayi :";
		cin >> n;
		top += n;
	} 
	while (n != 0);
	ort = (float) top / (s - 1);
	cout << "ortalama= " << ort << endl;
	return 0;
}
*/

//ORNEK 80=
/*
using namespace std;
bool buyuk_dort(int id)
{
	return(id > 4);
}
int main(void)
{
	//10 elemanli bir int vektor bildirimi yapar
	vector <int> iv = { 1,2,3,3,4,4,4,5,6,7 }; //c++11

	int id;

	//vektor icerigini ekrana yazma
	cout << "vektor icerigi: ";
	for (id = 0; id < (int)iv.size(); id++) cout << iv[id] << " ";
	cout << endl;

	//iv vektorunun eleman sayisini yazar.
	cout << "iv vektor eleman sayisi : " << iv.size() << endl;

	//vektordeki belirli degere sahip eleman sayisini ekrana yazma
	cout << "vektorde 3 degerine sahip eleman sayisi: " << count(iv.begin(), iv.end(), 3) << endl;
	cout << "vektorde 4 degerine sahip eleman sayisi: " << count(iv.begin(), iv.end(), 4) << endl;

	//vektorde 4 den buyuk degere sahip eleman sayisini ekrana yazma
	cout << "vektorde 4 den buyuk degere sahip eleman sayisi: " << count_if(iv.begin(), iv.end(), buyuk_dort);
	return 0;
}
*/


// count algorithm example
/*
int main() {

	// counting elements in array:

	int myints[] = { 10,20,30,30,20,10,10,20 }; // 8 elements
	int mycount = std::count(myints, myints + 8, 10);
	std::cout << "10 appears " << mycount << " times.\n";

	// counting elements in container:

	std::vector<int> myvector(myints, myints + 8);
	mycount = std::count(myvector.begin(), myvector.end(), 20);
	std::cout << "20 appears " << mycount << " times.\n";

	return 0;
}
*/


//ORNEK 81
///push back vector icine eleman atamak icin kullanilir.
/*
using namespace std;
int main(void) {
	vector<int> v;
	v.push_back(3);
	v.push_back(4);
	v.push_back(3);
	v.push_back(5);
	int cnt;
	cnt = count(v.begin(), v.end(), 3);
	cout << "number 3 occurs" << cnt << "times." << endl;
	return 0;
}
*/


//ORNEK 82
/*
using namespace std;
int main() {
	string str = "geeksforgeeks";
	cout << "number of times 'e' appears: " << count(str.begin(), str.end(), 'e');
	return 0;
}
*/

//ORNEK 83
///FIND ALGORITMASI
/*
using namespace std;
int dizi[] = { 25,43,11,56,77,81,13,90,123,900 };
int main() {
	int* p;
	int k;
	cout << "dizi: "; //dizi goruntuleniyor
	for (int i = 0; i < 10; i++)
		cout << dizi[i] << " " << "\n";
	cin >> k;
	p = find (dizi, dizi + 10, k);
	cout << "aranan elemanin konumu :" << (p + 1 - dizi) << endl;
	return 0;
}
*/

//ORNEK 84
///SEARCH ALGORITMASI
/*
using namespace std;
int dizi1[] = { 48,25,25,43,81,81,25,90,25,85 };
int dizi2[] = { 43,81,81 };
int main() {
	int* p;
	p = search(dizi1, dizi1 + 10, dizi2, dizi2 + 3);
	cout << "ana dizi: ";
	for (int i = 0; i < 10; i++)
		cout << dizi1[i] << " " << endl;
	cout << "aranan dizi : ";
	for (int j = 0; j < 3; j++)
		cout << dizi2[j] << " " << endl;
	if (p == dizi1 + 10)
		cout << "aranan dizi bulunamadi ";
	else
		cout << "eslesmenin basladigi konum : " << p + 1 - dizi1 << endl;
	return 0;

}
*/

//ORNEK 85 SORT ALGORITMASI
/*
using namespace std;
int dizi[] = { 892,210,34,-56,77,91,13,25,1,62 };
int main() {
	sort(dizi, dizi + 10);
	for (int i = 0; i < 10; i++)
		cout << dizi[i] << endl;
	return 0;
}
*/

//ORNEK 86=  mod medyan hesaplayan program 
/*
using namespace std;
void oku(int[], int);
void oku(int notDizi[], int boyut)
{
	cout << "notlari giriniz..." << endl;
	for (int i = 0; i < boyut; i++)
		cin >> notDizi[i];
}
int main()
{
	int mevcut, k, i;
	int* notlar;
	double med, toplam1 = 0.0;
	char dagilim;
	int enFazlaOlan = -1;
	int enFazlaOlanSayi = -1;
	int tekrarlamaSayisi = 0;
	cout << "sinava giren ogrenci sayisini giriniz: " << endl;
	cin >> mevcut;
	notlar = new int[mevcut];
	oku(notlar, mevcut);
	sort(notlar, notlar + mevcut);
	for (int d = 0; d < mevcut; d++)
	{
		if (mevcut % 2 == 0) {
			toplam1 = (notlar[mevcut / 2]) + (notlar[(mevcut / 2) - 1]);
			med = toplam1 / 2;
		}
		else {
			med = notlar[mevcut / 2];
		}
	}
	int* adet = new int[mevcut];
	for (int i = 0; i < mevcut; i++) {
		adet[i] = 1;
		int sayici = 1;
		for (int j = i + 1; j < mevcut; j++) {
			if (notlar[i] == notlar[j]) {
				adet[i]++;
				sayici++;
			}
		}
		if (sayici > tekrarlamaSayisi) {
			tekrarlamaSayisi = sayici;
			enFazlaOlanSayi = notlar[i];
		}
	}
	if (tekrarlamaSayisi == 1) {
		cout << "   mod yok." << endl;
	}
	else {
		cout << "mod:	";
		int modSayisi = 0;
		for (int i = 0; i < mevcut; i++) {
			modSayisi++;
			if (modSayisi > 1) {
				cout << ",  ";
			}
			cout << notlar[i];

		}
		cout << "  medyan = " << med << endl;
	}
	return 0;
}
*/

//ORNEK 87= TRANSFORM ALGORITMASI
/// ilk dizideki sayilari iki katini alarak yeni dizi olusturma
/*

using namespace std;
int dizi1[] = { 48,25,25,43,81,81,25,90,25,85 };
int dizi2[10];

int iki_kati(int);

int main() {
	transform(dizi1, dizi1 + 10, dizi2, iki_kati);
	cout << "anadizi: " << endl;

	for (int i = 0; i < 10; i++)
		cout << dizi1[i] << endl;
		cout << "hesaplanan dizi: " << endl;

	for (int j = 0; j < 10; j++)
		cout << dizi2[j] << endl;
	return 0;
}
int iki_kati(int x) {
	return (2 * x);
}
*/


// KARISIK UYGULAMA sorulari

//SORU1 100 luk sistme gore basari notunu harfli sisteme ceviren program
/*
int main() {
	int Not;
	cout << "notu giriniz.." << endl;
	cin >> Not;
	if (Not >= 90)
		cout << "AA";
	else if (Not >= 80)
		cout << "BA";
	else if (Not >= 70)
		cout << "BB";
	else if (Not >= 60)
		cout << "CB";
	else if (Not >= 50)
		cout << "CC";
	else
		cout << "FF";
	return 0;
}
*/

//SORU2 girilen ay degerine gore mevsimi veren program
///hatali coz
/*
int main() {
	int ay;
	cout << "kacinci aydasiniz ? " << endl;
	cin >> ay;
	switch (ay)
	{
	case [3 4 5]: cout << "ilkbahar"; break;
	case [6 7 8]: cout << "yaz"; break;
	case [9 10 11]:cout << "sonbahar"; break;
	default:
		cout << "kis "; break;
		return 0;
	}

}
*/

//SORU3 girilen iki tam sayiyi carpma kullanmadan carpan program
/*
int main()
{
	int i, s1, s2;
	double carp = 0;
	cout << "1.sayi...:";
	cin >> s1;
	cout << "2.sayi...:";
	cin >> s2;
	for (i = 1; i <= s1; i++)
	{
		carp = carp + s2;
	}
	cout << s1 << "*" << s2 << "= " << carp << endl;
	return 0;
}
*/

//SORU4 girilen bir sayinin faktoriyelini hesaplayan program
/*
int main() {
	int i, n, fakt = 1;
	cout << "faktoryeli alinacak sayi...:";
	cin >> n;
	for (i = n; i >= 1; i = i - 1)
	{
		fakt = fakt * i;
	}
	cout << n << "!= " << fakt;
	return 0;
}
*/


//SINAV CALISMA SORULARI

//SORU1= Bir ��rencinin vize ve final notlar�n� sorup ortalamas�n� hesaplayan, 
///ortalama sonucuna g�re ge�ip kald���n� yazd�ran C++ programlar�n� yaz�n�z. 
////not vize %40 final %60 ortlamalar %60 olmasi zorunlu gecmek icin
/*
int main() {
	int vize, final;
	float ortalama;

	cout << "vize notunu giriniz: " << endl;
	cin >> vize;
	cout << "final notunu giriniz: " << endl;
	cin >> final;

	ortalama = vize * 0.4 + final * 0.6;
	if (ortalama >= 60 && final >= 60)
		cout << "ortalama: " << ortalama << ", final:" << final << "-> gecti";
	else
		cout << "ortalama: " << ortalama << ", final:" << final << "-> kaldi";
	return 0;
}
*/

//SORU2= �aazzbbkkkkkffddbbccd� gibi rastgele olu�turulan harf dizesindeki harflerden
///ard arda tekrar eden harften en �ok tekrar eden harfin ka� defa tekrar etti�ini ekrana yazd�rin.
/*
int main()
{
	string metin = "aazzbbkkkkkffddbbccd";
	int i, sayac1 = 0, sayac2 = 0;
	char harf1, harf2;
	//ilk harf 1 tane kabul ediyoruz.
	sayac1 = 1;

	for (i = 1; i < metin.size(); i++)
	{
		if (metin[i - 1] == metin[i])
		{
			sayac1++;

		}
		else
		{
			if (sayac2 < sayac1) {
				harf1 = metin[i - 1];//eski harfi kaydediyoruz.
				sayac2 = sayac1; //eski harfin say�s�n� haf�zada tuyoruz.
				sayac1 = 1;//yeni harf i�in say�m
			}
		}
	}
	cout << "Harf: " << harf1 << " Tekrar Sayisi: " << sayac2 << "\n";
	return 0;
}
*/

//SORU3= girilen sayinin 3 e ve 5e tam bolunup bolunemedigini gosteren kod.
/*
int main()
{
	int sayi;
	cout << "sayiyi giriniz...:";
	cin >> sayi;
	if (sayi % 3 == 0 && sayi % 5 == 0)
	{
		cout << "girilen sayi 3 e ve 5 e tam bolunuyor.";

	}
	else
	{
		cout << "girilen sayi 3e ve 5e tam bolunemiyor.";
	}
	return 0;
}
*/

//SORU4= girilen sayi asal mi degil mi bulan program.
/*
int main() 
{
	int sayi;
	int sayac = 0;
	cout << "bir sayi giriniz...:";
	cin >> sayi;

	for (int j = 2; j < sayi ; j++)
	{
		if (sayi % j == 0)
		{
			sayac++;
			break;
		}
	}
	if (sayac == 0)
	{
		cout << "asaldir.";

	}
	else
	{ 
		cout << "asal degildir.";
	}
	return 0;
}
*/

//SORU5= 0-100 arasinda girilen puani 0-5 arasi nota ceviren program.
/*
int main()
{
	int puan;
	cout << "puani giriniz: ";
	cin >> puan;

	if (puan > 100)
	{
		cout << "gecersiz puan.";
	}
	else if (puan > 84)
	{
		cout << "notunuz 5";
	}
	else if (puan > 69)
	{
		cout << "notunuz 4";
	}
	else if (puan > 59)
	{
		cout << "notunuz 3";
	}
	else if (puan > 49)
	{
		cout << "notunuz 2";
	}
	else if (puan >= 0)
	{
		cout << "notunuz 1";
	}
	else
	{
		cout << "gecersiz puan.";
	}
	return 0;
}
*/


void oku(int[], int);
void oku(int notDizi[], int boyut)
{
	cout << "notlari giriniz..." << endl;
	for (int i = 0; i < boyut; i++)
		cin >> notDizi[i];
}
int main()
{
	int mevcut, k, i;
	int* notlar;
	double med, toplam1 = 0.0;
	char dagilim;
	int enFazlaOlan = -1;
	int enFazlaOlanSayi = -1;
	int tekrarlamaSayisi = 0;
	cout << "sinava giren ogrenci sayisini giriniz: " << endl;
	cin >> mevcut;
	notlar = new int[mevcut];
	oku(notlar, mevcut);
	qsort (notlar, notlar + mevcut);
	for (int d = 0; d < mevcut; d++)
	{
		if (mevcut % 2 == 0) {
			toplam1 = (notlar[mevcut / 2]) + (notlar[(mevcut / 2) - 1]);
			med = toplam1 / 2;
		}
		else {
			med = notlar[mevcut / 2];
		}
	}
	int* adet = new int[mevcut];
	for (int i = 0; i < mevcut; i++) {
		adet[i] = 1;
		int sayici = 1;
		for (int j = i + 1; j < mevcut; j++) {
			if (notlar[i] == notlar[j]) {
				adet[i]++;
				sayici++;
			}
		}
		if (sayici > tekrarlamaSayisi) {
			tekrarlamaSayisi = sayici;
			enFazlaOlanSayi = notlar[i];
		}
	}
	if (tekrarlamaSayisi == 1) {
		cout << "   mod yok." << endl;
	}
	else {
		cout << "mod:	";
		int modSayisi = 0;
		for (int i = 0; i < mevcut; i++) {
			modSayisi++;
			if (modSayisi > 1) {
				cout << ",  ";
			}
			cout << notlar[i];

		}
		cout << "  medyan = " << med << endl;
	}
	return 0;
}