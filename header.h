/*
Saya Renaldy Heryana sebagai manusia yang berTuhan, saya mengerjakan evaluasi
Tugas Masa Depan dalam mata kuliah Dasar-dasar Pemrograman untuk
keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah
dispesifikasikan. Aamiin.
*/

#include <stdio.h>
#include <string.h>

//struct deklarasi nama dan kode keterampilan 
typedef struct{
	char no_nama[5];
	char skill[51];
	char pelatihan[51];
	char disiplin[51];
}keterampilan;

//struct untuk deklarasi nomer dan nama mahasiswa
typedef struct{
	char no_nama[5];
	char nama_mhs[51];
}mahasiswa;


//deklarasi variabel global 
extern int indeks;
extern char ckata[301];
extern int panjangkata;

void StartKata(char pita[]);
void ResetKata();
void inckata(char pita[]);
char* getckata();
int getpanjangkata();
int EOPKata();
int selesai(char pita[]);
void SHOW(char tabel[]);
void INPUT(char tabel[], char kode[], char penjelasan[]);
void UPDATE(char tabel[], char kode[], char penjelasan[]);
void DEL(char tabel[], char kode[]);
