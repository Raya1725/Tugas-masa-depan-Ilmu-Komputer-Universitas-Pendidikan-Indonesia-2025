/*
Saya Renaldy Heryana sebagai manusia yang berTuhan, saya mengerjakan evaluasi
Tugas Masa Depan dalam mata kuliah Dasar-dasar Pemrograman untuk
keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah
dispesifikasikan. Aamiin.
*/

#include "header.h"

int main(){
	int idx = 0;
	char tabel[300];
	char pita[300];
	
	printf("\nSELAMAT DATANG DI PERPUSTAKAAN KETERAMPILAN MAHASISWA\n");
	printf("SAYA RENALDY HERYANA YANG AKAN MEMBANTU ANDA DISINI\n");
	printf("SEBELUM KITA MULAI, SAYA MEMILIKI BEBERAPA HAL YANG HARUS ANDA PATUHI\n");
	printf("\n1,SAAT MEMAKAI TOMBOL APAPUN, SESUAIKAN MASUKAN ANDA DENGAN ATURAN\n");
	printf("2,LETAKAN EOP BERUPA TANDA PAGAR(#) DI AKHIR SETIAP MASUKAN\n");
	printf("3,SAAT MEMASUKAN KATA KATA YANG HARUS MENGGUNAKAN SPASI, PISAHKAN DENGAN TANDA UNDERSCORE(_)\n");
	printf("\nJIKA KAU SUDAH PAHAM, MARI IKUTI SAYA UNTUK MELIHAT TOMBOL TOMBOL NYA\n");
	printf("BAIKLAH SAYA MEMILIKI BEBERAPA TOMBOL YANG BISA ANDA GUNAKAN, BERIKUT TOMBOLNYA: \n");
	printf("\nSHOW : menampilkan tabel atau data yang ingin anda cari dengan format SHOW nama_tabel\n");
	printf("HELP: menampilkan tombol tombol yang bisa di tekan user\n");
	printf("INPUT: menambahkan data ke dalam tabel, dengan format INPUT nama_tabel Kode_data keterangan\n");
	printf("DEL: menghapus data dalam tabel, format DEL nama_tabel kode_data\n");
	printf("\nBAIKLAH SEKARANG ANDA SUDAH TAHU, ANDA BISA MELAKUKAN APAPUN DISINI SELAMA MENGIKUTI PANDUAN YANG SAYA BERIKAN\n");
	do{
		printf("APA YANG AKAN  ANDA LAKUKAN SEKARANG?\n");
		scanf(" %299[^\n]", pita);
		StartKata(pita);
		if(pita[strlen(pita) - 1] == '#'){
			if(strcmp(getckata(), "SHOW") == 0 || strcmp(getckata(), "show") == 0){
				inckata(pita);
				if(strcmp(getckata(), "\0") > 0){
					SHOW(getckata());
				}
				else{
					printf("mau nge show apa coba ini\n");
				}
			}
			else if(strcmp(getckata(), "INPUT") == 0 || strcmp(getckata(), "input") == 0){
				char kode[21]; char keterampilan[101];
				inckata(pita);
				if(strcmp(getckata(), "\0") > 0){
					strcpy(tabel, getckata());
					inckata(pita);
					if(strcmp(getckata(), "\0") > 0){
						strcpy(kode, getckata());
						inckata(pita);
						if(strcmp(getckata(), "\0") > 0){
							strcpy(keterampilan, getckata());
							INPUT(tabel, kode, keterampilan);
						}
						else{
							printf("jangan lupa tambahin keterampilannya\n");
						}
					}
					else{
						printf("kode nya mana?\n");
					}
				}
				else{
					printf("bagus sih masuk ke yang kosong, tapi kalau gini malah gak tau masuk kemana?\n");
				}
			}
			else if(strcmp(getckata(), "HELP") == 0 || strcmp(getckata(), "help") == 0){
				printf("BAIKLAH SAYA MEMILIKI BEBERAPA TOMBOL YANG BISA ANDA GUNAKAN, BERIKUT TOMBOLNYA: \n");
				printf("\nSHOW : menampilkan tabel atau data yang ingin anda cari dengan format SHOW nama_tabel\n");
				printf("HELP: menampilkan tombol tombol yang bisa di tekan user\n");
				printf("INPUT: menambahkan data ke dalam tabel, dengan format INPUT nama_tabel Kode_data keterangan\n");
				printf("DEL: menghapus data dalam tabel, format DEL nama_tabel kode_data\n");
				printf("\nBAIKLAH SEKARANG ANDA SUDAH TAHU, ANDA BISA MELAKUKAN APAPUN DISINI SELAMA MENGIKUTI PANDUAN YANG SAYA BERIKAN\n"); 
			}
			else if(strcmp(getckata(), "UPDATE") == 0 || strcmp(getckata(), "update") == 0){
				char kode[21]; char keterampilan[101];
				inckata(pita);
				if(strcmp(getckata(), "\0") > 0){
					strcpy(tabel, getckata());
					inckata(pita);
					if(strcmp(getckata(), "\0") > 0){
						strcpy(kode, getckata());
						inckata(pita);
						if(strcmp(getckata(), "\0") > 0){
							strcpy(keterampilan, getckata());
							UPDATE(tabel, kode, keterampilan);
						}
						else{
							printf("jangan lupa tambahin keterampilannya\n");
						}
					}
					else{
						printf("kode nya mana?\n");
					}
				}
				else{
					printf("buset mau meng update yang kosong nih?\n");
				}
			}
			else if(strcmp(getckata(), "DEL") == 0 || strcmp(getckata(), "del") == 0){
				char kode[21]; 
				inckata(pita);
				if(strcmp(getckata(), "\0") > 0){
					strcpy(tabel, getckata());
					inckata(pita);
					if(strcmp(getckata(), "\0") > 0){
						strcpy(kode, getckata());
						DEL(tabel, kode);
					}
					else{
						printf("kode nya mana?\n");
					}
				}
				else{
					printf("nge hapus yang udah kosong jadi apa coba?\n");
				}
			}
			else if(strcmp(pita, "jangan lupa berkah dan bahagia hari ini#") == 0){
				printf("terima kasih sudah memakai jasa saya\n");
			}
			else{
				printf("perintah tidak valid, harap masukan sesuai panduan\n");
			}
		}
		else{
			printf("jangan lupa tanda pagar nya yahhh\n");
			pita[idx] = '#';
		}
	}while(selesai(pita) == 0);
	
	
	return 0;
}