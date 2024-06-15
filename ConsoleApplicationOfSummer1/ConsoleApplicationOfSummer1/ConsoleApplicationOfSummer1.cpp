#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include <clocale>
#include <list>
#include <queue>
#include<string>

using namespace std;

string ad;
string soyad;
int skor;
string tcKimlik;


string sorular[30] = { "Amerika'nın başkenti neresidir?",
	"Mıknatıs aşağıdakilerden hangisini çeker?",
	"Türk tarihinin en ünlü mimarı kimdir?",
	"Türkiye'yi ağaçlandırmak ve erozyonla mücadele etmek olan kurulan Sivil Toplum Kuruluşu, aşağıdakilerden hangisidir?",
	"Keçinin erkeğine ne ad verilir?",
	"Duvara asılı bir haritanın sağı her zaman hangi yönü gösterir ?",
	"Aşağıdaki hangi coğrafi bölgede dağlar denize dik uzanır?",
	"Yazın kırlarda ve ekin tarlalarında yetişen kırmızı narin çiçek hangisidir?",
	"Aşağıdaki hayvanlardan hangisi çöl ortamına daha dayanıklıdır?",
	"Aşağıdaki balık türlerinden hangisi memelidir?",
	"İstiklal Şairi olarak anılan şair aşağıdakilerden hangisidir?",
	"Bozkırın tezenesi lakaplı rahmetli halk ozanı kimdir?",
	"Çanakkale Savaşı sırasında 215 kg’lık mermiyi tek başına kaldıran Türk askeri kimdir ? ",
	"Ses en hızlı hangi ortamda yayılır?",
	"Yerden fışkırarak çıkan sıcak su kaynaklarına ne denir?",
	"Hangisi sürüngen hayvan değildir?",
	"Türkiye’nin en yüksek dağı hangisidir?",
	"Aşağıdaki takvimlerden hangisini Türkler kullanmamıştır?",
	"Türkiye’nin en büyük gölü hangisidir?",
	"Osmanlı Devletinin kurucusu olan Osmanlı ailesi hangi Türk boyuna mensuptur?" };



string sechavuz[][5] = { { "Viyana","Paris","New York","Washington","Londra" },
	{ "Mimar Sinan", "Mimar Kemalettin ", "Fatih Sultan Mehmet", "Yunus Emre", "Gazali" },
	{ " Toprak ", "Talaş", "Plastik", "Cam", "iğne" },
	{ "Tev ", "Tema", " Nasa", "Cern  ", "Akut" },
	{ "Tay","Buzağı ","Teke","Taka ","Koyun" },
	{ "Kuzeydoğu", "Güney", "Batı ", "Doğu ", " Kuzey" },
	{ "Marmara", " Ege", "Akdeniz", "İç Anadolu", "Doğu Anadolu " },
	{ "Gül", "Papatya", "Lale", "Kır Çiçeği", "Gelincik" },
	{ " Deve","Ayı","Fare","Yılan","Zürafa" },
	{ "Kalkan", "Palamut", "Balina", "Köpek Balığı", "Yılan Balığı" },
	{ "Orhan Veli Kanık", "Edip Cansever", "Nazım Hikmet", "Mehmet Akif Ersoy", "Necip Fazıl Kısakürek" },
	{ "Neşet Ertaş", "Kıvırcık Ali", "Karacoğlan", "Gevheri", "Aşık Ömer" },
	{ "Atatürk","Seyit Onbaşı ","İsmet İnönü","Sütçü İmam","Yörük Ali" },
	{ " Ateş", " Plazma " , "Sıvı", "Gaz ", "Katı" },
	{ "Şelale", "Lav ", "Gayzer", "Obruk", "Göl" },
	{ "Timsah", "Kertenkele", "Yılan", "Bukalemun", "Kaplumbağa" },
	{ "Toros","Erciyes","Ağrı","Karadağ","Süphan" },
	{ "Rumi", "Hicri", "On İki Hayvanlı Türk Takvimi", "Tibet", "Celali" },
	{ "Tuz", "Van", "Sapanca", "İznik", "Akşehir" },
	{ "Cepni", "Peçenek", "Dodurga", "Kınık", "Kayı" } };



string cevaplar[20] = { "Washington","Mimar Sinan","iğne","Tema","Teke",
"Doğu "," Ege","Gelincik"," Deve","Balina","Mehmet Akif Ersoy","Neşet Ertaş",
"Seyit Onbaşı ","Katı" ,"Gayzer","Bukalemun","Ağrı","Tibet","Van", "Kayı" };


class Ogrencix {
	string adx;
	string soyadx;
	int skorx;
	string tcnox;

public: Ogrencix(string adx, string soyadx, string tcnox, int skorx) : adx(adx), soyadx(soyadx),  tcnox(tcnox), skorx(skorx) {}
	  void goster() {
		  cout << "Ad :" << adx << endl;
		  cout<< "Soyad: " << soyadx << endl;
		  cout << "Skor :" << skorx << endl;
		  cout << "TC no :" << tcnox << endl << endl;
	  }
};


class Ogrenci
{
public:string ad;
public:string soyad;
public:int skor;
public:string tcKimlik;

	  void setAd(string ad) { this->ad = ad; }
	  void setSoyad(string soyad) { this->soyad = soyad; }
	  void setSkor(int skor) { this->skor = skor; }
	   void setTcKimlik(string tcKimlik) { this->tcKimlik = tcKimlik; }
	  string getAd() { return ad; }
	  string getSoyad() { return soyad; }
	  int getSkor() { return skor; }
	  string getTcKimlik() { return tcKimlik; }
};


void ogrEkle() {
	Ogrenci ogr[3];
	for (int i = 0; i < 3; i++) {
		cout << i + 1 << ". öğrenci bilgilerini giriniz." << endl;
		cout << "Ad: "; cin >> ad;
		cout << "Soyad :"; cin >> soyad;
		cout << "Skor:"; cin >> skor;
		cout << "Tc no : "; cin >> tcKimlik;
		cout << endl;

		ogr[i].setAd(ad);
		ogr[i].setSoyad(soyad);
		ogr[i].setSkor(skor);
		ogr[i].setTcKimlik(tcKimlik);
	}
	cout << "Öğrenci kaydedildi..." << endl;
	cout << "Yeni liste : " << endl << endl;

	for (int i = 0; i < 3; i++) {

		cout << "Ad : " << ogr[i].getAd() << endl;
		cout << "Soyad : " << ogr[i].getSoyad() << endl;
		cout << "Skor : " << ogr[i].getSkor() << endl << endl;
		cout << "Tc no: " << ogr[i].getTcKimlik() << endl << endl;
	}

}


void soruEkle() {
	string ekle;
	cout << "Eklemek istediğiniz soruyu yazınız." << endl;
	cin >> ekle;
	sorular[20] = ekle;
	cout << "İşlem tamamlandı." << endl;
	cout << "Soru havuzunun son hali: " << endl << endl;
	for (int i = 0; i < 21; i++) {
		cout << sorular[i] << endl;
	}
}

void soruSil()
{
	int a;
	for (int i = 0; i < 20; i++) {
		cout << i + 1 << "-" << sorular[i] << endl;
	}
	cout << "Silmek istediğiniz soru numarasını yazınız." << endl;
	cin >> a;
	sorular[a - 1] = "";
		cout << "Soru silindi." << endl << endl;
	cout << "Soru havuzunun son hali: " << endl;


	for (int i = 0; i < 19; i++) {
		cout << sorular[i] << endl;
	}

}

void ogrSil(Ogrencix adx) {
	

}

void testYap() {
	int secimler[20] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
	int maxsoru = 20;

	for (int i = 0; i < maxsoru; i++) {
		cout << "Soru " << (i + 1) << endl;
		cout << sorular[i] << endl;
		cout << "1. " << sechavuz[i][0] << endl;
		cout << "2. " << sechavuz[i][1] << endl;
		cout << "3. " << sechavuz[i][2] << endl;
		cout << "4. " << sechavuz[i][3] << endl;
		cout << "5. " << sechavuz[i][4] << endl << endl;


		cout << "Seçiminizi yapınız ya da 0 ı tuşlayarak geçiniz ve enter tuşuna basınız.";
		cin >> secimler[i];
		cout << endl << endl << endl;
	}



	cout << "....................." << endl;
	cout << ".....DOĞRU CEVAP....." << endl;
	cout << "....................." << endl;


	for (int i = 0; i < maxsoru; i++)
	{
		cout << "Soru  " << (i + 1) << endl;
		cout << sorular[i] << endl;
		cout << "1. " << sechavuz[i][0] << endl;
		cout << "2. " << sechavuz[i][1] << endl;
		cout << "3. " << sechavuz[i][2] << endl;
		cout << "4. " << sechavuz[i][3] << endl;
		cout << "5. " << sechavuz[i][4] << endl << endl;

		if (secimler[i] == 0) {
			cout << "Soruyu yanıtlamadınız." << endl;
		}
		else {
			cout << "Seçiminiz: " << sechavuz[i][secimler[i] - 1] << endl;

		}

		cout << "Doğru cevap:  " << cevaplar[i] << endl << endl;
		cout << "Tamamlamak için bir tuşa basınız." << endl;
		
		cout << endl << "    " << endl;
	}
	cout << "............................." << endl;
	cout << ".......S O N U Ç L A R......." << endl;
	cout << "............................." << endl << endl;

	int dogru = 0;
	int yanlıs = 0;
	int bos = 0;
	int skor = 0;
	for (int i = 0; i < maxsoru; i++) {
		if (secimler[i] != 0) {
			if (cevaplar[i] == sechavuz[i][secimler[i] - 1]) {
				dogru++;
			}
			else {
				yanlıs++;
			}
		}
		else {
			bos++;
		}
	}

	skor = skor + dogru * 5;

	cout << "Doğru sayısı:" << dogru << endl;
	cout << "Yanlıs sayısı:" << yanlıs << endl;
	cout << "Bos sayısı:" << bos << endl;
	cout << "SKOR :" << skor << endl;


}



int main() {

	string tcno;
	int sifre;
	int secim;
	setlocale(LC_ALL, "Turkish");

	Ogrencix ogrenci1{ "Sıla", "Hekim","12345678901",55};
	Ogrencix ogrenci2{ "Osman", "İyigün","23456789012",  80 };
	Ogrencix ogrenci3{ "Başak", "Kablan","34567890123", 35 };
	Ogrencix ogrenci4{ "Sedanur", "Yılmaz","45678901234", 75 };
	Ogrencix ogrenci5{ "Mehmet", "Oğuz","56789012345",  50 };
	Ogrencix ogrenci6{ "Ege", "Sağlam","67890123456",  15 };
	Ogrencix ogrenci7{ "Bora", "Öztürk","78901234567",  95 };
	Ogrencix ogrenci8{ "Doğa", "Beyaz", "89012345678" ,100 };
	Ogrencix ogrenci9{ "İlkim", "Özlü", "90123456789", 20 };
	Ogrencix ogrenci10{ "Maral", "Özdoğan","10234567890",  5 };


	cout << "\t\t\t\t\n";
	cout << "\t\t Test sınavı hazırlama ve uygulama programına hoşgeldiniz\n";
	cout << "\t\t\t\t\n";


	cout << "1) Teste başla" << endl;
	cout << "2) Soru ekle " << endl;
	cout << "3) Soru sil" << endl;
	cout << "4) Öğrenci ekle" << endl;
	cout << "5) Öğrenci sil" << endl;
	cout << "6) Öğrenci listele" << endl;
	cout << "7)Başarı Listesi " << endl;

	cout << "Lütfen yapmak istediğiniz işlemi seçiniz." << endl;
	cout << "\t\t\t\t\n";
	cin >> secim;

	switch (secim)
	{
	case 1:


		cout << "Lütfen tc kimlik numaranızı giriniz." << endl;
		cin >> tcno;
			cout << "Şifrenizi giriniz." << endl;
			cin >> sifre;
		
		cout << "Sınav Tarihi:" << __DATE__ << endl
			<< "Test başlatılıyor .Sınav 20 sorudan oluşup 20 dk dır.Başarılar..." << endl;

		testYap();
		break;
	case 2:
		soruEkle();

		break;
	case 3:
		soruSil();
		break;
	case 4:
		

		ogrEkle();

		ogrenci1.goster();
		ogrenci2.goster(); ogrenci3.goster();
		ogrenci4.goster(); ogrenci5.goster(); ogrenci6.goster();
		ogrenci7.goster(); ogrenci8.goster(); ogrenci9.goster();
		ogrenci10.goster();
		
		break;

	case 5:



	case 6:

		

		ogrenci1.goster();
		ogrenci2.goster(); ogrenci3.goster();
		ogrenci4.goster(); ogrenci5.goster(); ogrenci6.goster();
		ogrenci7.goster(); ogrenci8.goster(); ogrenci9.goster();
		ogrenci10.goster();
		break;
	
	case 7:

		cout << "          Başarı Listesi       " << endl << endl;
		cout << "1. Doğa Beyaz          Skoru:100    " << endl;
		cout << "2. Bora Öztürk         Skoru:95    " << endl;
		cout << "3. Osaman İyigün        Skoru:80    " << endl;
		cout << "4. Sedanur Yılmaz        Skoru:75    " << endl;
		cout << "5. Sıla Hekim           Skoru:55    " << endl;
		cout << "6. Mehmet Oğuz          Skoru:50    " << endl;
		cout << "7. Başak Kablan         Skoru:35    " << endl;
		cout << "8. İlkim Özlü          Skoru:20    " << endl;
		cout << "9. Ege Sağlam          Skoru:15    " << endl;
		cout << "10. Maral Özdoğan         Skoru:5    " << endl;


		break;
	}
}