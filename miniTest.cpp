#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int soal(char pertanyaan[]){
	int choice;
	do{
		system("cls");
		puts(pertanyaan);
		printf("1. Ya\n");
		printf("2. Tidak\n");
		printf("choice : ");
		scanf("%d",&choice); getchar();
	}while(choice>2 || choice<1);
	if(choice==1) return 1;
	else return 0;
}

int main(){
	
	int pilihan;
	int skor;
	
	while(true){
		printf("mini covid-19 test\n");
		printf("Press enter to continue..."); 
		getchar();
		skor = 0;
		//soal low total 3
		skor += soal("apakah anda mengalami demam beberapa hari ini ?");
		skor += soal("apakah anda mengalami batuk ataupun pilek ?");
		skor += soal("apakah anda mengalami kelelahan yang berlebih ?");
		
		//soal medium total 8
		skor += 2 * soal("apakah anda mengalami gejala sakit / radang pada tenggorokan ?");
		skor += 2 * soal("apakah anda mengalami diare ?");
		skor += 2 * soal("apakah anda mengalami mata merah (konjungtivis) ataupun sakit kepala ?");
		skor += 2 * soal("apakah anda mengalami ruam pada kulit / perubahan pada warna jari tangan ataupun jari kaki ?");
	
		//soal hard total 12
		skor += 3 * soal("apakah anda mengalami kesulitan bernapas atau sesak napas ?");
		skor += 3 * soal("apakah anda mengalami nyeri dada atau rasa tertekan pada dada ?");
		skor += 3 * soal("apakah anda mengalami hilangnya kemampuan berbicara atau bergerak ?");
		
		if(skor<4){
			printf("gejala ringan\n");
			printf("anda mungkin aman karena belum menunjukan gejala yang cukup, tapi covid-19 terkadang tidak memiliki gejala sama sekali\n");
			printf("jangan ragu untuk melakukan pemeriksaan jika gejala tidak membaik\n");
		}
		else if(skor>=4 && skor<=6){
			printf("gejala medium\n");
			printf("anda menunjukan sedikit gejala covid-19, disarankan untuk melakukan pemeriksaan\n");
		}
		else if(skor>=7 && skor<=10){
			printf("gejala berat\n");
			printf("anda menujukan gejala covid-19, harap segera melakukan pemeriksaan ke rumah sakit\n");
		}
		else if(skor>10){
			printf("DARURAT!!\n");
			printf("kondisi anda memungkinkan anda terkena covid-19, harap segera kerumah sakit\n");
		}
		printf("\nStay Healthy ^^\n");
		printf("Press enter to continue..."); 
		getchar();
		
		//tanya ulang soal
		pilihan = soal("retry ? ");
		if(pilihan==0) break;
	}
	
	return 0;
}
