/*
Saya Renaldy Heryana sebagai manusia yang berTuhan, saya mengerjakan evaluasi
Tugas Masa Depan dalam mata kuliah Dasar-dasar Pemrograman untuk
keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah
dispesifikasikan. Aamiin.
*/

#include "header.h"
int indeks;
char ckata[301];
int panjangkata;

//prosedur dan fungsi dari mesin kata
void StartKata(char pita[]){
    indeks = 0;
    panjangkata = 0;

    while(pita[indeks] == ' '){
        indeks++;
    }

    while(pita[indeks] != ' ' && pita[indeks] != '#' && pita[indeks] != '\0'){
        ckata[panjangkata] = pita[indeks];
		panjangkata++;
		indeks++;
    }
    ckata[panjangkata] = '\0';
}

void ResetKata(){
	panjangkata = 0;
	ckata[panjangkata] = '\0';
}

void inckata(char pita[]){
	panjangkata = 0;
	while(pita[indeks] == ' '){
		indeks++;
	}
	while((pita[indeks] != ' ') && (pita[indeks] != '#') &&pita[indeks] != '\0'){
		ckata[panjangkata] = pita[indeks];
		indeks++;
		panjangkata++;
	}
	ckata[panjangkata] = '\0';
	
}

char* getckata(){
	return ckata;
}

int getpanjangkata(){
	return panjangkata;
}

int EOPKata(){
	if(ckata == "#"){
		return 1;
	}
	else{
		return 0;
	}
}

int selesai(char pita[]){
	if(strcmp(pita, "saya trauma mengerjakan tugas mepet deadline#") == 0){
		return 1;
	}
	else{
		return 0;
	}
}

//prosedur dan fungsi untuk sequentialfile
void SHOW(char tabel[]){
	keterampilan mhs[101];
	if(strcmp(getckata(), "skill") == 0 || strcmp(getckata(), "SKILL") == 0)  {
		FILE * skill;
		skill = fopen("skill.txt", "r");
		fscanf(skill, "%s %s", mhs[indeks].no_nama, mhs[indeks].skill);
		if(strcmp(mhs[indeks].no_nama, "####") == 0){
			printf("data kosong, gak ada isinya\n"); 
		}
		else{
			printf("|----------------------------------|\n");
			printf("|kata    |skill mahasiswa          |\n");
			printf("|----------------------------------|\n");
			do{		
				printf("|%s    ", mhs[indeks].no_nama);
				printf("|%s", mhs[indeks].skill);
				for(int i = strlen(mhs[indeks].skill); i < 25; i++){
					printf(" ");
				}
				printf("|\n");
		
				fscanf(skill, "%s %s", mhs[indeks].no_nama, mhs[indeks].skill);
			}while(strcmp(mhs[indeks].no_nama, "####") != 0);
			printf("-----------------------------------|\n");
		}
		fclose(skill);
		printf("menampillkan tabel skill\n");
	}else if(strcmp(getckata(), "pelatihan") == 0 || strcmp(getckata(), "PELATIHAN") == 0)  {
		FILE * pelatihan;
		pelatihan = fopen("pelatihan.txt", "r");
		fscanf(pelatihan, "%s %s", mhs[indeks].no_nama, mhs[indeks].pelatihan);
		if(strcmp(mhs[indeks].no_nama, "####") == 0){
			printf("data kosong, gak ada isinya\n"); 
		}
		else{
			printf("|----------------------------------|\n");
			printf("|kata    |pelatihan mahasiswa      |\n");
			printf("|----------------------------------|\n");
			do{
		
				printf("|%s    ", mhs[indeks].no_nama);
				printf("|%s", mhs[indeks].pelatihan);
				for(int i = strlen(mhs[indeks].pelatihan); i < 25; i++){
					printf(" ");
				}
				printf("|\n");
			
				fscanf(pelatihan, "%s %s", mhs[indeks].no_nama, mhs[indeks].pelatihan);
			}while(strcmp(mhs[indeks].no_nama, "####") != 0);
			printf("-----------------------------------|\n");
		}
		fclose(pelatihan);
		printf("menampilkan tabel pelatihan\n");
	}else if(strcmp(getckata(), "disiplin") == 0 || strcmp(getckata(), "DISIPLIN") == 0)  {
		FILE * disiplin;
		disiplin = fopen("disiplin.txt", "r");
		fscanf(disiplin, "%s %s", mhs[indeks].no_nama, mhs[indeks].disiplin);
		if(strcmp(mhs[indeks].no_nama, "####") == 0){
			printf("data kosong, gak ada isinya\n"); 
		}
		else{
			printf("|----------------------------------|\n");
			printf("|kata    |disiplin mahasiswa       |\n");
			printf("|----------------------------------|\n");
			do{		
				printf("|%s    ", mhs[indeks].no_nama);
				printf("|%s", mhs[indeks].disiplin);
				for(int i = strlen(mhs[indeks].disiplin); i < 25; i++){
					printf(" ");
				}
				printf("|\n");		
				fscanf(disiplin, "%s %s", mhs[indeks].no_nama, mhs[indeks].disiplin);
			}while(strcmp(mhs[indeks].no_nama, "####") != 0);
			printf("-----------------------------------|\n");
		}
		fclose(disiplin);
		printf("menampilkan tabel disiplin\n");
	}
	else{
		printf("tabel tidak ada\n");
	}
}

void INPUT(char tabel[], char kode[], char penjelasan[]){
	keterampilan rekaman;
	keterampilan temp[51];
	int gagal = 0;
	if(strcmp(tabel, "skill") == 0 || strcmp(tabel, "SKILL") == 0){
		int jumlahrek = 0;
		FILE * skill;
		skill = fopen("skill.txt", "r");
		fscanf(skill, "%s %s\n", rekaman.no_nama, rekaman.skill);
		if(strcmp(rekaman.no_nama, "####") == 0){
			printf("file kosong cik\n");
		}
		else {
			do{
				if(strcmp(rekaman.no_nama, kode) == 0){
					printf("data sudah ada, jangan input lagi\n");
					gagal++;
					fscanf(skill, "%s %s\n", rekaman.no_nama, rekaman.skill);
				}
				else{
					strcpy(temp[jumlahrek].no_nama, rekaman.no_nama);
					strcpy(temp[jumlahrek].skill, rekaman.skill);
					jumlahrek++;
					fscanf(skill, "%s %s\n", &rekaman.no_nama, &rekaman.skill);
				}
			}while(strcmp(rekaman.no_nama, "####") != 0);
		}
		fclose(skill);
		if(gagal > 0){
			printf("input gagal\n");
			return;
		}
		if(strcmp(kode, temp[0].no_nama) < 0){
			int i;
			for(i = jumlahrek-1; i >= 0; i--){
				strcpy(temp[i + 1].no_nama, temp[i].no_nama);
				strcpy(temp[i + 1].skill, temp[i].skill);
			}
			jumlahrek++;
			strcpy(temp[0].no_nama, kode);
			strcpy(temp[0].skill, penjelasan);
		}
		else if(strcmp(kode, temp[jumlahrek-1].no_nama) > 0){
			strcpy(temp[jumlahrek].no_nama, kode);
			strcpy(temp[jumlahrek].skill, penjelasan);
			jumlahrek++;
		}
		else{
			int i = 0;
			int stop = 0;
			while((i < jumlahrek) && (stop == 0)){
				if(strcmp(temp[i].no_nama, kode) > 0){
					stop = 1;
				}
				else{
					i++;
				}
			}
			int j;
			for(j = jumlahrek-1; j >= i; j--){
				strcpy(temp[j + 1].no_nama, temp[j].no_nama);
				strcpy(temp[j + 1].skill, temp[j].skill);
			}
			strcpy(temp[i].no_nama, kode);
			strcpy(temp[i].skill, penjelasan);
			jumlahrek++;
		}
		skill = fopen("skill.txt", "w");
		int i;
		for(i = 0; i < jumlahrek; i++){
			fprintf(skill, "%s %s\n", temp[i].no_nama, temp[i].skill);
		}
		fprintf(skill, "#### ######");
		fclose(skill);
		if(gagal == 0){
			printf("input berhasil\n");
		}
		else{
			printf("input gagal\n");
		}
	}
	else if(strcmp(tabel, "pelatihan") == 0 || strcmp(tabel, "PELATIHAN") == 0){
		int jumlahrek = 0;
		FILE * pelatihan;
		pelatihan = fopen("pelatihan.txt", "r");
		fscanf(pelatihan, "%s %s\n", rekaman.no_nama, rekaman.pelatihan);
		if(strcmp(rekaman.no_nama, "####") == 0){
			printf("file kosong cik\n");
		}
		else {
			do{
				if(strcmp(rekaman.no_nama, kode) == 0){
					printf("data sudah ada, jangan input lagi\n");
					gagal++;
					fscanf(pelatihan, "%s %s\n", rekaman.no_nama, rekaman.pelatihan);
				}
				else{
					strcpy(temp[jumlahrek].no_nama, rekaman.no_nama);
					strcpy(temp[jumlahrek].pelatihan, rekaman.pelatihan);
					jumlahrek++;
					fscanf(pelatihan, "%s %s\n", rekaman.no_nama, rekaman.pelatihan);
				}
			}while(strcmp(rekaman.no_nama, "####") != 0);
		}
		fclose(pelatihan);
		if(gagal > 0){
		printf("input gagal\n");
		return;
		}
		if(strcmp(kode, temp[0].no_nama) < 0){
			int i;
			for(i = jumlahrek-1; i >= 0; i--){
				strcpy(temp[i + 1].no_nama, temp[i].no_nama);
				strcpy(temp[i + 1].pelatihan, temp[i].pelatihan);
			}
			jumlahrek++;
			strcpy(temp[0].no_nama, kode);
			strcpy(temp[0].pelatihan, penjelasan);
		}
		else if(strcmp(kode, temp[jumlahrek-1].no_nama) > 0){
			strcpy(temp[jumlahrek].no_nama, kode);
			strcpy(temp[jumlahrek].pelatihan, penjelasan);
			jumlahrek++;
		}
		else{
			int i = 0;
			int stop = 0;
			while((i < jumlahrek) && (stop == 0)){
				if(strcmp(temp[i].no_nama, kode) > 0){
					stop = 1;
				}
				else{
					i++;
				}
			}
			int j;
			for(j = jumlahrek-1; j >= i; j--){
				strcpy(temp[j + 1].no_nama, temp[j].no_nama);
				strcpy(temp[j + 1].pelatihan, temp[j].pelatihan);
			}
			strcpy(temp[i].no_nama, kode);
			strcpy(temp[i].pelatihan, penjelasan);
			jumlahrek++;
		}
		pelatihan = fopen("pelatihan.txt", "w");
		int i;
		for(i = 0; i < jumlahrek; i++){
			fprintf(pelatihan, "%s %s\n", temp[i].no_nama, temp[i].pelatihan);
		}
		fprintf(pelatihan, "#### ######");
		fclose(pelatihan);
		if(gagal == 0){
			printf("input berhasil\n");
		}
		else{
			printf("input gagal\n");
		}
	}
	else if(strcmp(tabel, "disiplin") == 0 || strcmp(tabel, "DISIPLIN") == 0){
		int jumlahrek = 0;
		FILE * disiplin;
		disiplin = fopen("disiplin.txt", "r");
		fscanf(disiplin, "%s %s\n", rekaman.no_nama, rekaman.disiplin);
		if(strcmp(rekaman.no_nama, "####") == 0){
			printf("file kosong cik\n");
		}
		else {
			do{
				if(strcmp(rekaman.no_nama, kode) == 0){
					printf("data sudah ada, jangan input lagi\n");
					gagal++;
					fscanf(disiplin, "%s %s\n", rekaman.no_nama, rekaman.disiplin);
				}
				else{
					strcpy(temp[jumlahrek].no_nama, rekaman.no_nama);
					strcpy(temp[jumlahrek].disiplin, rekaman.disiplin);
					jumlahrek++;
					fscanf(disiplin, "%s %s\n", rekaman.no_nama, rekaman.disiplin);
				}
			}while(strcmp(rekaman.no_nama, "####") != 0);
		}
		fclose(disiplin);
		if(gagal > 0){
			printf("input gagal\n");
			return;
		}
		if(strcmp(kode, temp[0].no_nama) < 0){
			int i;
			for(i = jumlahrek-1; i >= 0; i--){
				strcpy(temp[i + 1].no_nama, temp[i].no_nama);
				strcpy(temp[i + 1].disiplin, temp[i].disiplin);
			}
			jumlahrek++;
			strcpy(temp[0].no_nama, kode);
			strcpy(temp[0].disiplin, penjelasan);
		}
		else if(strcmp(kode, temp[jumlahrek-1].no_nama) > 0){
			strcpy(temp[jumlahrek].no_nama, kode);
			strcpy(temp[jumlahrek].disiplin, penjelasan);
			jumlahrek++;
		}
		else{
			int i = 0;
			int stop = 0;
			while((i < jumlahrek) && (stop == 0)){
				if(strcmp(temp[i].no_nama, kode) > 0){
					stop = 1;
				}
				else{
					i++;
				}
			}
			int j;
			for(j = jumlahrek-1; j >= i; j--){
				strcpy(temp[j + 1].no_nama, temp[j].no_nama);
				strcpy(temp[j + 1].disiplin, temp[j].disiplin);
			}
			strcpy(temp[i].no_nama, kode);
			strcpy(temp[i].disiplin, penjelasan);
			jumlahrek++;
		}
		disiplin = fopen("disiplin.txt", "w");
		int i;
		for(i = 0; i < jumlahrek; i++){
			fprintf(disiplin, "%s %s\n", temp[i].no_nama, temp[i].disiplin);
		}
		fprintf(disiplin, "#### ######");
		fclose(disiplin);
		if(gagal == 0){
			printf("input berhasil\n");
		}
		else{
			printf("input gagal\n");
		}
	}
	else{
		printf("tabel tidak ada\n");	
	}
}

void UPDATE(char tabel[], char kode[], char penjelasan[]){
	int berhasil = 0;
	keterampilan rekaman;
	keterampilan temp[51];
	if(strcmp(tabel, "skill") == 0 || strcmp(tabel, "SKILL") == 0){
		int jumlahrek = 0;
		FILE * skill;
		skill = fopen("skill.txt", "r");
		fscanf(skill, "%s %s\n", &rekaman.no_nama, &rekaman.skill);
		if(strcmp(rekaman.no_nama, "####") == 0){
			printf("file kosong cik\n");
		}
		else {
			do{
				if(strcmp(rekaman.no_nama, kode) == 0){
					strcpy(rekaman.skill, penjelasan);
					strcpy(temp[jumlahrek].no_nama, rekaman.no_nama);
					strcpy(temp[jumlahrek].skill, rekaman.skill);
					jumlahrek++;
					fscanf(skill, "%s %s\n", &rekaman.no_nama, &rekaman.skill);
					berhasil++;
				}
				else{
					strcpy(temp[jumlahrek].no_nama, rekaman.no_nama);
					strcpy(temp[jumlahrek].skill, rekaman.skill);
					jumlahrek++;
					fscanf(skill, "%s %s\n", &rekaman.no_nama, &rekaman.skill);
				}
			}while(strcmp(rekaman.no_nama, "####") != 0);
		}
		skill = fopen("skill.txt", "w");
		int i;
		for(i = 0; i < jumlahrek; i++){
			fprintf(skill, "%s %s\n", temp[i].no_nama, temp[i].skill);
		}
		fprintf(skill, "#### ######");
		fclose(skill);
	}
	else if(strcmp(tabel, "pelatihan") == 0 || strcmp(tabel, "PELATIHAN") == 0){
		int jumlahrek = 0;
		FILE * pelatihan;
		pelatihan = fopen("pelatihan.txt", "r");
		fscanf(pelatihan, "%s %s\n", &rekaman.no_nama, &rekaman.pelatihan);
		if(strcmp(rekaman.no_nama, "####") == 0){
			printf("file kosong cik\n");
		}
		else {
			do{
				if(strcmp(rekaman.no_nama, kode) == 0){
					strcpy(rekaman.pelatihan, penjelasan);
					strcpy(temp[jumlahrek].no_nama, rekaman.no_nama);
					strcpy(temp[jumlahrek].pelatihan, rekaman.pelatihan);
					jumlahrek++;
					fscanf(pelatihan, "%s %s\n", &rekaman.no_nama, &rekaman.pelatihan);
					berhasil++;
				}
				else{
					strcpy(temp[jumlahrek].no_nama, rekaman.no_nama);
					strcpy(temp[jumlahrek].pelatihan, rekaman.pelatihan);
					jumlahrek++;
					fscanf(pelatihan, "%s %s\n", &rekaman.no_nama, &rekaman.pelatihan);
				}
			}while(strcmp(rekaman.no_nama, "####") != 0);
		}
		pelatihan = fopen("pelatihan.txt", "w");
		int i;
		for(i = 0; i < jumlahrek; i++){
			fprintf(pelatihan, "%s %s\n", temp[i].no_nama, temp[i].pelatihan);
		}
		fprintf(pelatihan, "#### ######");
		fclose(pelatihan);
	}
	else if(strcmp(tabel, "disiplin") == 0 || strcmp(tabel, "DISIPLIN") == 0){
		int jumlahrek = 0;
		FILE * disiplin;
		disiplin = fopen("disiplin.txt", "r");
		fscanf(disiplin, "%s %s\n", &rekaman.no_nama, &rekaman.disiplin);
		if(strcmp(rekaman.no_nama, "####") == 0){
			printf("file kosong cik\n");
		}
		else {
			do{
				if(strcmp(rekaman.no_nama, kode) == 0){
					strcpy(rekaman.disiplin, penjelasan);
					strcpy(temp[jumlahrek].no_nama, rekaman.no_nama);
					strcpy(temp[jumlahrek].disiplin, rekaman.disiplin);
					jumlahrek++;
					fscanf(disiplin, "%s %s\n", &rekaman.no_nama, &rekaman.disiplin);
				}
				else{
					strcpy(temp[jumlahrek].no_nama, rekaman.no_nama);
					strcpy(temp[jumlahrek].disiplin, rekaman.disiplin);
					jumlahrek++;
					fscanf(disiplin, "%s %s\n", &rekaman.no_nama, &rekaman.disiplin);
				}
			}while(strcmp(rekaman.no_nama, "####") != 0);
		}
		disiplin = fopen("disiplin.txt", "w");
		int i;
		for(i = 0; i < jumlahrek; i++){
			fprintf(disiplin, "%s %s\n", temp[i].no_nama, temp[i].disiplin);
		}
		fprintf(disiplin, "#### ######");
		fclose(disiplin);
	}
	if(berhasil > 0){
		printf("berhasil meng update data\n");
	}
	else{
		printf("update data kosong kah? kerennn\n");
	}
}

void DEL(char tabel[], char kode[]){
	int berhasil = 0;
	keterampilan rekaman;
	keterampilan temp[51];
	if(strcmp(tabel, "skill") == 0 || strcmp(tabel, "SKILL") == 0){
		int jumlahrek = 0;
		FILE * skill;
		skill = fopen("skill.txt", "r");
		fscanf(skill, "%s %s\n", &rekaman.no_nama, &rekaman.skill);
		if(strcmp(rekaman.no_nama, "####") == 0){
			printf("file kosong cik\n");
		}
		else {
			do{
				if(strcmp(rekaman.no_nama, kode) == 0){
					strcpy(temp[jumlahrek].no_nama, "\0");
					strcpy(temp[jumlahrek].skill, "\0");
					jumlahrek++;
					fscanf(skill, "%s %s\n", &rekaman.no_nama, &rekaman.skill);
					berhasil++;
				}
				else{
					strcpy(temp[jumlahrek].no_nama, rekaman.no_nama);
					strcpy(temp[jumlahrek].skill, rekaman.skill);
					jumlahrek++;
					fscanf(skill, "%s %s\n", &rekaman.no_nama, &rekaman.skill);
				}
			}while(strcmp(rekaman.no_nama, "####") != 0);
		}
		skill = fopen("skill.txt", "w");
		int i;
		for(i = 0; i < jumlahrek; i++){
			fprintf(skill, "%s %s\n", temp[i].no_nama, temp[i].skill);
		}
		fprintf(skill, "#### ######");
		fclose(skill);
	}
	else if(strcmp(tabel, "pelatihan") == 0 || strcmp(tabel, "PELATIHAN") == 0){
		int jumlahrek = 0;
		FILE * pelatihan;
		pelatihan = fopen("pelatihan.txt", "r");
		fscanf(pelatihan, "%s %s\n", &rekaman.no_nama, &rekaman.pelatihan);
		if(strcmp(rekaman.no_nama, "####") == 0){
			printf("file kosong cik\n");
		}
		else {
			do{
				if(strcmp(rekaman.no_nama, kode) == 0){
					strcpy(temp[jumlahrek].no_nama, "\0");
					strcpy(temp[jumlahrek].pelatihan, "\0");
					jumlahrek++;
					fscanf(pelatihan, "%s %s\n", &rekaman.no_nama, &rekaman.pelatihan);
					berhasil++;
				}
				else{
					strcpy(temp[jumlahrek].no_nama, rekaman.no_nama);
					strcpy(temp[jumlahrek].pelatihan, rekaman.pelatihan);
					jumlahrek++;
					fscanf(pelatihan, "%s %s\n", &rekaman.no_nama, &rekaman.pelatihan);
				}
			}while(strcmp(rekaman.no_nama, "####") != 0);
		}
		pelatihan = fopen("pelatihan.txt", "w");
		int i;
		for(i = 0; i < jumlahrek; i++){
			fprintf(pelatihan, "%s %s\n", temp[i].no_nama, temp[i].pelatihan);
		}
		fprintf(pelatihan, "#### ######");
		fclose(pelatihan);
	}
	else if(strcmp(tabel, "disiplin") == 0 || strcmp(tabel, "DISIPLIN") == 0){
		int jumlahrek = 0;
		FILE * disiplin;
		disiplin = fopen("disiplin.txt", "r");
		fscanf(disiplin, "%s %s\n", &rekaman.no_nama, &rekaman.disiplin);
		if(strcmp(rekaman.no_nama, "####") == 0){
			printf("file kosong cik\n");
		}
		else {
			do{
				if(strcmp(rekaman.no_nama, kode) == 0){
					strcpy(temp[jumlahrek].no_nama, "\0");
					strcpy(temp[jumlahrek].disiplin, "\0");
					jumlahrek++;
					fscanf(disiplin, "%s %s\n", &rekaman.no_nama, &rekaman.disiplin);
					berhasil++;
				}
				else{
					strcpy(temp[jumlahrek].no_nama, rekaman.no_nama);
					strcpy(temp[jumlahrek].disiplin, rekaman.disiplin);
					jumlahrek++;
					fscanf(disiplin, "%s %s\n", &rekaman.no_nama, &rekaman.disiplin);
				}
			}while(strcmp(rekaman.no_nama, "####") != 0);
		}
		disiplin = fopen("disiplin.txt", "w");
		int i;
		for(i = 0; i < jumlahrek; i++){
			fprintf(disiplin, "%s %s\n", temp[i].no_nama, temp[i].disiplin);
		}
		fprintf(disiplin, "#### ######");
		fclose(disiplin);
	}
	if(berhasil > 0){
		printf("berhasil meng hapus data\n");
	}
	else{
		printf("data tidak ada gimana mau nge hapus\n");
	}
}