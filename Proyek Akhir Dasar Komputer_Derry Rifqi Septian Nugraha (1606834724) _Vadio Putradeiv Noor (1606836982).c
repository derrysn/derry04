#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(){

	float tinggi;
	float berat;
	float ukuranBerat;
	float bmi;
	float bantu;
	float kilo;
	char z,ch;

		printf("HALO!\n");
	printf("\n**************************************************************************");
	printf ("\nS E L A M A T D A T A N G D I T U G A S P R O Y E K A K H I R D A S K O M \n"); 
	printf("\n**************************************************************************\n");
	
	awal:
		printf("\nBMI (body mass index) atau indeks massa tubuh adalah angka yang menyatakan \n perbandingan berat badan (dalam kilogram) terhadap kuadrat tinggi badan \n(dalam meter). BMI bukan suatu besaran sehingga tidak memiliki satuan.\n");
	getch();
	system ("cls");

		printf("HALO!\n");
		printf("\n**************************************************************************");
		printf ("\nS E L A M A T D A T A N G D I T U G A S P R O Y E K A K H I R D A S K O M \n"); 
		printf("\n**************************************************************************\n");
		printf("HELP \n");
		printf("1. Untuk pertanyaan Y/N hanya dapat dijawab dengan y atau n \n");
		printf("2. Untuk pertanyaan mengenai BMI hanya bisa dijawab dengan angka \n");
		printf ("Bila terdapat masalah hubungi : 085813903642 \n");
		while(1)
		{
				printf("\n**************************************************************************");
				printf ("\nIngin melakukan perhitungan BMI? [Y/N]\n",z);
				scanf ("%c",&z);
	
	if(z == 'y' || z == 'Y')
	{
		printf("Masukan Tinggi Badan anda : "); scanf("%f",&tinggi);
		printf("\n Masukan Berat tubuh anda : "); scanf("%f",&berat);
		ukuranBerat =  (tinggi-100)-(0.1*(tinggi-100));
		printf("%f\n",ukuranBerat);
		bantu=(tinggi*0.01);
		bmi=(berat/(bantu*bantu));
		printf("ukuran bmi anda adalah %f\n",bmi);
		if(bmi<16){
		kilo=ukuranBerat-berat;
		printf("untuk menjadi ideal anda harus punya berat plus minus 5 dari %fKg\n",ukuranBerat);
		printf("%f bmi anda terlalu sangat kurus\n",bmi);
		printf("anda harus menambah berat kilo %fkg\n",kilo);
		getch();
	}
			else if(bmi<=16.99 && bmi>=16){
			kilo=ukuranBerat-berat;
			printf("untuk menjadi ideal anda harus punya berat plus minus 5 dari %fKg\n",ukuranBerat);
			printf("%f bmi anda kurus he naikan badan\n",bmi);
			printf("anda harus menambah berat kilo %fkg\n",kilo);
			getch();

	}		
				else if(bmi<=18.49 && bmi>=17){
				kilo=ukuranBerat-berat;
				printf("untuk menjadi ideal anda harus punya berat plus minus 5 dari %fKg\n",ukuranBerat);
				printf("%f bmi anda agak kurus he naikan berat badan\n",bmi);
				printf("anda harus menambah berat kilo %fkg\n",kilo);
				getch();

	}
				else if(bmi<=24.99 && bmi>=18.50){
				printf("%f bmi anda Normal Ideal, he he tetep di jaga ya\n",bmi);
				getch();

}
else if(bmi<=29.99 && bmi>=25){
kilo=berat-ukuranBerat;
printf("untuk menjadi ideal anda harus punya berat plus minus 5 dari %fKg\n",ukuranBerat);
printf("%f bmi anda kegemukan, ayo turunkan berat jangan makan saja\n",bmi);
printf("Anda harus mengurangi berat badan anda %fkilo\n",kilo);
getch();

}
else if(bmi<=34.99 && bmi>=30.0){
kilo=berat-ukuranBerat;
printf("untuk menjadi ideal anda harus punya berat plus minus 5 dari %fKg\n",ukuranBerat);
printf("%f  bmi anda Obesitas kelas 1 , terlalu gemuk\n",bmi);
printf("Anda harus mengurangi berat badan anda %fkilo\n",kilo);
getch();

}
else if(bmi<=39.99 && bmi>=35){
kilo=berat-ukuranBerat;
printf("untuk menjadi ideal anda harus punya berat plus minus 5 dari %fKg\n",ukuranBerat);
printf("%f bmi anda berada di kelas 2, sangat-terlalu gemuk\n",bmi);
printf("Anda harus mengurangi berat badan anda %fkilo\n",kilo);
getch();

}
else if(bmi>=40){
kilo=berat-ukuranBerat;
printf("untuk menjadi ideal anda harus punya berat plus minus 5 dari %fKg\n",ukuranBerat);
printf("yaaaaaaaaaaaaaaah anda terlalu gemuk sekali gemuk");
printf("Anda harus mengurangi berat badan anda %fkilo\n",kilo);
getch();

}
else{
printf("bukan manusia\n");
getch();

}

//printf("UKURAN UNTUK MENJADI IDEAL ADALAH %f \n",ukuranBerat);
}
if (z == 'n' || z == 'N')
{
	break;
}
else
{
	//while((ch = getchar ()) != '\n' && ch != EOF);
	printf("Mohon hanya masukkan input yang sesuai [Y/N]");
return main();
}

}

		printf("\n**************************************************************************");
		printf("THANK YOU FOR COMING, PLEASE CLOSE THE PROGRAM NOW\n");
		printf("\n**************************************************************************");
	
	
    
return(0);
} 
