// NACÝ MERT ÖNDER    200403673
// AHMED FARUK ÞAHÝN  200403879
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
int dil;
int sifre_deneme_sayisi=0;
	struct yenikullanici{
	char kullaniciadi[15];
	char sifre[20];
}y;
void add();  
void list();
void edit();  
void delete1();
void search();
void kayit();

/////////////////////////////ÞÝFRE GÝRÝÞ EKRANI///////////////////////////////////////////////////////////////////////
void login()																										//
{																													//
	int i=0;																										//
    char uname[10],c=' '; 																							//
    char pword[10],code[10];																						//
    char user[10]="user";																							//
    char pass[10]="mert";																							//
																													//
    do																												//
{																													//
	system("cls");																									//
	if(dil==1)																										//
	{																												//
	 printf("\n  ************************** DELUXE HOTEL  **************************  ");							//
	 printf("\n  ***                                                             ***  ");							//
	 printf("\n  ******           DELUXE HOTEL YONETIM SISTEMI                ******  ");							//
	 printf("\n  ***                                                             ***  ");							//
     printf("\n  ************************** GIRIS EKRANI ***************************  ");							//
    printf(" \n                       KULLANICI ADINI GIRINIZ:-");													//
	scanf("%s", &uname); 																							//
	printf(" \n                       SIFREYI GIRINIZ:-");															//
}																													//
else																												//
{																													//																								
	 printf("\n  ************************** DELUXE HOTEL  **************************  ");							//
	 printf("\n  ***                                                             ***  ");							//
	 printf("\n  ******           DELUXE HOTEL MANAGEMENT SYSTEM              ******  ");							//
	 printf("\n  ***                                                             ***  ");							//
     printf("\n  ************************** LOGIN SCREEN ***************************  ");							//
    printf(" \n                       ENTER USER NAME:-");															//
	scanf("%s", &uname); 																							//
	printf(" \n                       ENTER PASSWORD:-");															//
}																													//
	while(i<10)																										//
	{																												//
	    pword[i]=getch();																							//
	    c=pword[i];																									//
	    if(c==13) break;																							//
	    else printf("*");																							//
	    i++;																										//
	}																												//
	pword[i]='\0';																									//
	i=0;																											//
    	FILE *k;																									//
		k=fopen("kayit.txt","r+");																					//								
		if(strcmp(uname,user)==0 && strcmp(pword,pass)==0)															//
		{																											//
			if(dil==1)																								//
        	{																										//
			printf("  \n\n\n      GIRIS  BAÞARILI ");																//
			}																										//
			else																									//
			{																										//
			printf("  \n\n\n      LOGIN SUCCESSFUL ");																//
			}																										//
			break;																									//
		}																											//
		else if(strcmp(uname,y.kullaniciadi)==0 && strcmp(pword,y.sifre)==0)										//
			{																										//
			if(dil==1)																								//
        	{																										//
			printf("  \n\n\n    YENÝ KULLANICI  GIRISI  BAÞARILI ");												//
			}																										//
			else																									//
			{																										//
			printf("  \n\n\n  NEW USER LOGIN SUCCESSFUL ");															//
			}																										//
			break;																									//
			}																										//
		else																										//
		{																											//
			if(dil==1)																								//
       		{																										//
			printf("\n        UZGUNUM GIRIS BASARISIZ");															//
			}																										//
			else																									//
			{																										//
			printf("\n        LOGIN FAILED");																		//
			}																										//
		sifre_deneme_sayisi++;																						//																							
		getch();																									//
	}																												//
			fclose(k);																								//
}																													//
	while(sifre_deneme_sayisi<=2);																					//
	if (sifre_deneme_sayisi>2)																						//
	{																												//
		if(dil==1)																									//
        {																											//
			printf("\n KULLANICI ADI VEYA SIFREYI 3 KEZ YANLIÞ GIRDINIZ,3 DAKIKA SONRA TEKRAR DENEYINIZ !!!");		//
		}																											//
		else																										//
		{																											//
			printf("\n YOU ENTERED WRONG USERNAME OR PASSWORD 3 TIMES, TRY AGAIN AFTER 3 MINUTES !!!");				//
		}																											//
		getch();																									//
		}																											//																												
		system("cls");																								//
}																													//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

struct CustomerDetails   
{
	char roomnumber[10];
	char name[20];
	char address[25];
	char phonenumber[15];
	char nationality[15];	
	char email[20];
	char period[10];
	char arrivaldate[10];
}s;

int main()
{     	
start:
system("color E0");
	int i=0,j=0;
	time_t t;
	time(&t);
	char customername;
	char choice;
	system("cls");   
	////////////////////////// DÝL SEÇÝM EKRANI //////////////////////////////////////
		for(i=0;i<=22;i++)															//
		{																			//
			for(j=1;j<60;j++)														//
			{																		//
			printf(" *");															//
			if(i==11&&j==19)														//
				printf("\t    1-TURKCE\t***\t 2-ENGLISH\t");						//
			if(i==11&&j==38)														//
			break;																	//
			}																		//
		printf("\n");																//
		}																			//
		printf("\n\n\n lutfen bir sayi seciniz (please select a number):");			//
		scanf("%d",&dil);															//
	//////////////////////////////////////////////////////////////////////////////////
		
				system("cls");	

switch(dil)
{
case 1:   // TÜRKÇE VERSÝYONU
 	printf("\t\t**********************************************************************************************\n");
	printf("\t\t*                                                                                            *\n");
	printf("\t\t*                                -----------------------------                               *\n");
	printf("\t\t*        		            OTEL DELUXE HOSGELDINIZ                                  *\n");
	printf("\t\t*                                -----------------------------                               *\n");
	printf("\t\t*                                                                                            *\n");
	printf("\t\t*                                                                                            *\n");
	printf("\t\t*      				DELUXE OTEL IYI TATILLER DILER              		     *\n");
	printf("\t\t*                                                                                            *\n");
	printf("\t\t*                                                                                            *\n");
	printf("\t\t*     				    ILETISIM ICIN:123456789                                  *\n");
	printf("\t\t**********************************************************************************************\n");
		for(i=0;i<80;i++)
		printf("-");
	    printf("\n GUNCEL TARIH VE ZAMAN  : %s",ctime(&t));
	    for(i=0;i<80;i++)
		printf("-");
	printf(" \n DEVAM ETMEK ICIN HERHANGI BIR TUSA BASINIZ:");
	
	getch();	
    system("cls");
    login();
    if(sifre_deneme_sayisi>2)
    break;
    system("cls");
	while (1)      
	{
		system("cls");
		 for(i=0;i<80;i++)
		printf("-");
		printf("\n");
		printf("   ************************* |DELUXE  OTEL |  ************************\n");
		printf("   * * * * *                                                 * * * * * \n");
		printf("   * * * * *   DELUXE  OTEL YONETIM SISTEMINE HOSGELDINIZ    * * * * * \n");
		printf("   * * * * *                                                 * * * * * \n");
		printf("   *************************   |ANA MENU |  **************************\n");
		for(i=0;i<80;i++)
		printf("-");
		printf("\n");
		printf("\t\t *LUTFEN YAPMAK ISTEDIGINIZ ISLEMI MENUDEN SECINIZ*");
		printf("\n\n");
		printf(" \n 1 -> ODA SEC ");
		printf("\n------------------------");
		printf(" \n 2 -> MUSTERI BILGILERINI SIRALA ");
		printf("\n----------------------------------");
		printf(" \n 3 -> MUSTERI BILGILERINI SIL ");
		printf("\n-----------------------------------");
		printf(" \n 4 -> MUSTERI BILGILERINI ARA ");
		printf("\n-----------------------------------");
		printf(" \n 5 -> MUSTERI BILGILERINI DUZENLE ");
		printf("\n-----------------------");
		printf(" \n 6 -> YENI KULLANICI EKLE ");
		printf("\n-----------------");
		printf(" \n 7 -> SISTEMDEN CIKIS YAP ");
		printf("\n-----------------");
		printf("\n");
		for(i=0;i<80;i++)
		printf("-");
	    printf("\n GUNCEL TARIH VE ZAMAN  : %s",ctime(&t));
	    for(i=0;i<80;i++)
		printf("-");
		
		choice=getche();
		choice=toupper(choice);
		switch(choice)           
		{	
			case '1':
				add();break;
			case '2':
				list();break;
			case '3':
				delete1();break;
			case '4':
				search();break;
			case '5':
				edit();break;
			case '6':
				kayit();break;
			case '7':
				system("cls");
				printf("\n\n\t  ********* DELUXE HOTEL ********");
				printf("\n\t\n ISLEMLERINIZ ONAYLANMISTIR, SISTEMDEN GUVENILIR BIR SEKILDE CIKIS YAPILDI");
				printf("\n\t\n  ********* DELUXE HOTEL IYI TATILLER DILER ********* ");
				exit(0);
				break;

			default:
				system("cls");
				printf("HATALI ISLEM");
				printf("\n DEVAM ETMEK ICIN HERHANGI BIR TUSA BASINIZ");
				getch();
		}
	}
	break;
	//////////////////////////////////////////////////////////////////ÝNGÝLÝZCE DÝL DESTEÐÝ/////////////////////////////////////////////////////////////////////////////////////////////////////

case 2 : // ÝNGÝLÝZCE VERSÝYONU
 	printf("\t\t**********************************************************************************************\n");
	printf("\t\t*                                                                                            *\n");
	printf("\t\t*                		 -----------------------------                               *\n");
	printf("\t\t*     		  		    WELCOME TO HOTEL DELUXE 			 	     *\n");
	printf("\t\t*             		         -----------------------------                               *\n");
	printf("\t\t*                                                                                            *\n");
	printf("\t\t*                                                                                            *\n");
	printf("\t\t*    		 	     DELUXE HOTEL WISHES YOU A GOOD HOLIDAY 		             *\n");
	printf("\t\t*                                                                                            *\n");
	printf("\t\t*                                                                                            *\n");
	printf("\t\t*   		  		     CONTACT US:123456789 	      		             *\n");
	printf("\t\t**********************************************************************************************\n");
		for(i=0;i<80;i++)
		printf("-");
	    printf("\n CURRENT DATE AND TIME  : %s",ctime(&t));
	    for(i=0;i<80;i++)
		printf("-");
	printf(" \n PRESS ANY BUTTON TO CONTINUE:");
	
	getch();	
    system("cls");
    login();
      if(sifre_deneme_sayisi>2)
    break;
    system("cls");
	while (1)      
	{
		system("cls");
		 for(i=0;i<80;i++)
		printf("-");
		printf("\n");
		printf("   ************************* |DELUXE HOTEL |  ************************\n");
		printf("   * * * * *                                                 * * * * * \n");
		printf("   * * * * *   WELCOME TO DELUXE HOTEL MANAGEMENT SYSTEM     * * * * * \n");
		printf("   * * * * *                                                 * * * * * \n");
		printf("   *************************   |MAIN MENU |  **************************\n");
		for(i=0;i<80;i++)
		printf("-");
		printf("\n");
		printf("\t\t *PLEASE SELECT THE OPERATION YOU WANT TO DO FROM THE MENU*");
		printf("\n\n");
		printf(" \n 1 -> SELECT ROOM ");
		printf("\n------------------------");
		printf(" \n 2 -> SORT CUSTOMER INFORMATION ");
		printf("\n----------------------------------");
		printf(" \n 3 -> DELETE CUSTOMER INFORMATION ");
		printf("\n-----------------------------------");
		printf(" \n 4 -> SEARCH CUSTOMER INFORMATION ");
		printf("\n-----------------------------------");
		printf(" \n 5 -> EDIT CUSTOMER INFORMATION ");
		printf("\n-----------------------");
		printf(" \n 6 -> ADD NEW USER ");
		printf("\n-----------------");
		printf(" \n 7 -> EXIT THE SYSTEM ");
		printf("\n-----------------");
		printf("\n");
		for(i=0;i<80;i++)
		printf("-");
	    printf("\n CURRENT DATE AND TIME  : %s",ctime(&t));
	    for(i=0;i<80;i++)
		printf("-");
		
		choice=getche();
		choice=toupper(choice);
		switch(choice)           
		{	
			case '1':
				add();break;
			case '2':
				list();break;
			case '3':
				delete1();break;
			case '4':
				search();break;
			case '5':
				edit();break;
			case '6':
				kayit();break;
			case '7':
				system("cls");
				printf("\n\n\t  ********* DELUXE HOTEL ********");
				printf("\n\t\n YOUR TRANSACTIONS HAVE BEEN APPROVED, EXIT FROM THE SYSTEM");
				printf("\n\t\n  ********* DELUXE HOTEL WISHES YOU A GOOD HOLIDAY ********* ");
				exit(0);
				break;
			default:
				system("cls");
				printf("INCORRECT OPERATION");
				printf("\n PRESS ANY BUTTON TO CONTINUE");
				getch();
		}
	}
	break;

default:
system("cls");
printf("INCORRECT OPERATION/HATALI ISLEM");
printf("\n PRESS ANY BUTTON TO CONTINUE/DEVAM ETMEK ICIN HERHANGI BIR TUSA BASINIZ");
getch();
goto start;
}
} ///////////////////////////////////////////////////////////////////////////////////// MAÝN BURDA BÝTÝYOR ////////////////////////////////////////////////////////////////////////////////////////



void add()
{
if(dil==1)
{
	FILE *f;
	char test;
	f=fopen("add.txt","a+");
	if(f==0)
	{   f=fopen("add.txt","w+");
		system("cls");

		printf("VERITABANI BILGISAYARA AKTARILIRKEN LUTFEN BEKEYIN!!");
		printf("\n AKTARIM TAMAMLANDI ISLEMINIZE DEVAM ETMEK ICIN HERHANGI BIR TUSA BASINIZ !! ");
		
		getch();
	}
	while(1)
	{
		system("cls");

		printf("\n MUSTERI BILGILERINI GIRINIZ:");
		printf("\n**************************");
		printf("\n MUSTERININ ODA NUMARASINI GIRINIZ:\n");
		scanf("\n%s",s.roomnumber);
		fflush(stdin);
		printf("MUSTERININ ISMINI GIRINIZ:\n");
		scanf("%s",s.name);
		printf("MUSTERININ ADRESINI GIRINIZ:\n");
		scanf("%s",s.address);
		printf("MUSTERININ TELEFON NUMARASINI GIRINIZ:\n");
		scanf("%s",s.phonenumber);
		printf("MUSTERININ HANGI ULKEDEN OLDUGUNU GIRINIZ:\n");
		scanf("%s",s.nationality);
		printf("MUSTERININ EMAIL ADRESINI GIRINIZ:\n");
		scanf(" %s",s.email);
		printf("MUSTERININ KAC GUN KALACAGINI GIRINIZ(\'x\'GUN ):\n");
		scanf("%s",&s.period);
		printf("MUSTERININ CIKIS TARIHINI GIRINIZ(gg\\aa\\yyyy):\n");
		scanf("%s",&s.arrivaldate);

		fwrite(&s,sizeof(s),1,f);
		fflush(stdin);
		
		printf("\n\n 1 ODA BASARILI BIR SEKILDE KAYDEDILMISTIR!!");
		printf("\n ANA MENUYE DONMEK ICIN ESC'YE BASINIZ, ISLEME DEVAM ETMEK ICIN ENTER'E BASINIZ:");
		test=getche();
		if(test==27)
			break;
			
	}
	fclose(f);
}
else // ADD FONKSÝYONUNU TÜRKÇE ÝÇÝN TEKRAR YAZIYORUZ //
{
		FILE *f;
	char test;
	f=fopen("add.txt","a+");
	if(f==0)
	{   f=fopen("add.txt","w+");
		system("cls");

	printf("PLEASE WAIT WHEN THE DATABASE IS TRANSFERED TO THE COMPUTER !!");
		printf("\n TRANSFER IS COMPLETED PRESS ANY BUTTON TO CONTINUE YOUR PROCESS !! ");
		
		getch();
	}
	while(1)
	{
		system("cls");

		printf("\n ENTER CUSTOMER INFORMATION:");
		printf("\n**************************");
		printf("\n ENTER THE CUSTOMER'S ROOM NUMBER:\n");
		scanf("\n%s",s.roomnumber);
		fflush(stdin);
		printf("ENTER CUSTOMER'S NAME:\n");
		scanf("%s",s.name);
		printf("ENTER CUSTOMER'S ADDRESS:\n");
		scanf("%s",s.address);
		printf("ENTER CUSTOMER'S PHONE NUMBER:\n");
		scanf("%s",s.phonenumber);
		printf("ENTER CUSTOMER'S COUNTRY :\n");
		scanf("%s",s.nationality);
		printf("ENTER CUSTOMER'S EMAIL ADDRESS:\n");
		scanf(" %s",s.email);
		printf("ENTER HOW MANY DAY YOUR CUSTOMER WILL STAY(\'x\'DAY ):\n");
		scanf("%s",&s.period);
		printf("ENTER CUSTOMER'S DEPARTURE DATE(dd\\mm\\yyyy):\n");
		scanf("%s",&s.arrivaldate);

		fwrite(&s,sizeof(s),1,f);
		fflush(stdin);
		
		printf("\n\n THE ROOM HAS BEEN SAVED SUCCESSFULLY !!");
		printf("\n PRESS ESC TO RETURN TO THE MAIN MENU, PRESS ENTER TO CONTINUE PROCESSING:");
		test=getche();
		if(test==27)
			break;
			
	}
	fclose(f);
}
}

void list()
{
	FILE *f;
	int i;
	if((f=fopen("add.txt","r"))==NULL)
		exit(0);
		system("cls");
if(dil==1) 
{
	printf("ODA    ");
	printf("ISIM \t ");
	printf("\t ADRES");
	printf("\t TELEFON NUMARASI ");
	printf("\t ULKE ");
	printf("\t EMAIL ");
	printf("\t\t GUN SAYISI ");
	printf("\t CIKIS TARIHI \n");
}
else // ÝNGÝLÝZCE ÝÇÝN TEKRAR YAZIYORUZ //
{
	printf("ROOM    ");
	printf("NAME \t ");
	printf("\tADDRESS");
	printf("\t  PHONE NUMBER ");
	printf("\t COUNTRY ");
	printf("\t EMAIL ");
	printf("\tNUMBER OF DAYS ");
	printf("\tRELEASE DATE \n");
}
	for(i=0;i<118;i++)
		printf("-");
	while(fread(&s,sizeof(s),1,f)==1)
	{
	
		printf("\n%s \t%s \t\t%s \t\t%s \t%s  \t%s  \t     %s  \t  %s",s.roomnumber, s.name , s.address , s.phonenumber ,s.nationality ,s.email,s.period,  s.arrivaldate);
	}
	printf("\n");
	for(i=0;i<118;i++)
		printf("-");

	fclose(f);
	getch();
}

void delete1()
{
	FILE *f,*t;
	int i=1;
	char roomnumber[20];
	if((t=fopen("temp.txt","w"))==NULL)
	exit(0);
	if((f=fopen("add.txt","r"))==NULL)
	exit(0);
	system("cls");
if(dil==1)
{
	printf("SISTEMDEN SILINICEK ODA NUMARASINI GIRIN: \n");
}
else
{
	printf("ENTER THE NUMBER OF THE ROOM TO BE DELETED FROM THE SYSTEM: \n");
}
	fflush(stdin);
	scanf("%s",roomnumber);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.roomnumber,roomnumber)==0)
		{       i=0;
			continue;
		}
		else
			fwrite(&s,sizeof(s),1,t);
	}
	if(i==1)
	{       
	if(dil==1)
{
		printf("\n\n BU ODADA MUSTERI KAYDI BULUNAMADI !!");
}
else
{
	printf("\n\n NO CUSTOMER REGISTRATION FOUND IN THIS ROOM !!");
}
		getch();
		fclose(f);
		fclose(t);
		main();
	}
	fclose(f);
	fclose(t);
	remove("add.txt");
	rename("temp.txt","add.txt");
	if(dil==1)
{
	printf("\n\n MUSTERI BASARILI BIR SEKILDE SISTEMDEN SILINMISTIR ");
}
else
{
	printf("\n\n THE CUSTOMER HAS REMOVED FROM THE SYSTEM");
}
	fclose(f);
	fclose(t);
	getch();
}

void search()
{
system("cls");
	FILE *f;
	char roomnumber[20];
	int flag=1;
	f=fopen("add.txt","r+");
	if(f==0)
		exit(0);
	fflush(stdin);
	if(dil==1)
{
	printf("KAYITLARA ULASMAK ICIN MUSTERININ ODA NUMARASINI GIRINIZ: \n");
}
else
{
	printf("ENTER THE CUSTOMER'S ROOM NUMBER TO REACH RECORDS: \n");
}
	scanf("%s", roomnumber);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.roomnumber,roomnumber)==0){
			flag=0;
				if(dil==1)
				{
				printf("\n\t KAYIT BULUNDU \n ");
				printf("\n ODA NUMARASI :\t%s",s.roomnumber);
				printf("\n ISIM :\t%s",s.name);
				printf("\n ADRES :\t%s",s.address);
				printf("\n TELEFON NUMARASI :\t%s",s.phonenumber);
				printf("\n ULKE :\t%s",s.nationality);
				printf("\n EMAIL :\t%s",s.email);
				printf("\n GUN SAYISI :\t%s",s.period);
				printf("\n CIKIS TARIHI :\t%s",s.arrivaldate);
				}
				else // ÝNGÝLÝZCE ÝÇÝN TEKRAR YAZIYORUZ //
				{
				printf("\n\t RECORD ÝS FOUND \n ");
				printf("\n ROOM NUMBER :\t%s",s.roomnumber);
				printf("\n NAME :\t%s",s.name);
				printf("\n ADDRESS :\t%s",s.address);
				printf("\n PHONE NUMBER :\t%s",s.phonenumber);
				printf("\n COUNTRY :\t%s",s.nationality);
				printf("\n EMAIL :\t%s",s.email);
				printf("\n NUMBER OF DAYS :\t%s",s.period);
				printf("\n RELEASE DATE :\t%s",s.arrivaldate);
				}
				flag=0;
			break;
		}
	}
	if(flag==1){	
		if(dil==1)
		{
		printf("\n\t KAYITLI MUSTERI BULUNAMADI !!");
		}
		else
		{
		printf("\n\t CUSTOMER RECORDS NOT FOUND !!");
		}
	}
	getch();
	fclose(f);
}

void edit()
{
	FILE *f;
	int k=1;
	char roomnumber[20];
	long int size=sizeof(s);
	if((f=fopen("add.txt","r+"))==NULL)
		exit(0);
	system("cls");
if(dil==1)
{
	printf("DUZENLEMEK ISTEDIGINIZ MUSTERININ ODA NUMARASINI GIRINIZ :\n\n");
}
else
{
	printf("ENTER THE CUSTOMER'S ROOM NUMBER YOU WANT TO EDIT :\n\n");
}
	scanf("%[^\n]",roomnumber);
	fflush(stdin);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.roomnumber,roomnumber)==0)
		{
			k=0;
if(dil==1)
{
			printf("\n MUSTERININ ODA NUMARASINI GIRINIZ  :");
			gets(s.roomnumber);
			printf("\n MUSTERININ ISMINI GIRINIZ  :");
			fflush(stdin);
			scanf("%s",&s.name);
			printf("\n MUSTERININ ADRESINI GIRINIZ  :");
			scanf("%s",&s.address);
			printf("\n MUSTERININ TELEFON NUMARASINI GIRINIZ  :");
			scanf("%f",&s.phonenumber);
			printf("\n MUSTERININ HANGI ULKEDEN OLDUGUNU GIRINIZ  :");
			scanf("%s",&s.nationality);
			printf("\n MUSTERININ EMAILINI GIRINIZ  :");
			scanf("%s",&s.email);
			printf("\n MUSTERININ KAC GUN KALACAGINI GIRINIZ  :");
			scanf("%s",&s.period);
			printf("\n MUSTERININ CIKIS TARIHINI GIRINIZ  :");
			scanf("%s",&s.arrivaldate);
}
else // ÝNGÝLÝZCE ÝÇÝN TEKRAR YAZIYORUZ //
{
			printf("\n ENTER THE CUSTOMER'S ROOM NUMBER  :");
			gets(s.roomnumber);
			printf("\n ENTER CUSTOMER'S NAME  :");
			fflush(stdin);
			scanf("%s",&s.name);
			printf("\n ENTER CUSTOMER'S ADDRESS  :");
			scanf("%s",&s.address);
			printf("\n ENTER CUSTOMER'S PHONE NUMBER  :");
			scanf("%f",&s.phonenumber);
			printf("\n ENTER CUSTOMER'S COUNTRY  :");
			scanf("%s",&s.nationality);
			printf("\n ENTER CUSTOMER'S EMAIL  :");
			scanf("%s",&s.email);
			printf("\n ENTER HOW MANY DAY CUSTOMER WILL STAY  :");
			scanf("%s",&s.period);
			printf("\n ENTER CUSTOMER'S RELEASE DATE  :");
			scanf("%s",&s.arrivaldate);
}
			fseek(f,size,SEEK_CUR);  
			fwrite(&s,sizeof(s),1,f);
			break;
		}
	}
if(dil==1)
{
	if(k==1){
		printf("\n\n BOYLE BIR KAYIT  BULUNAMADI !!!");
		fclose(f);
		getch();
	}else{
	fclose(f);
	printf("\n\n\t\t KAYIT YENIDEN DUZENLENDI ");
	getch();
}
}
else
{
		if(k==1){
		printf("\n\n RECORD ÝS NOT FOUND !!!");
		fclose(f);
		getch();
	}else{
	fclose(f);
	printf("\n\n\t\t RECORD ÝS RESTORED ");
	getch();
}
}
}

void kayit()
{
	system("cls");
	FILE *k;
	char test;


	system("cls");
	

			k=fopen("kayit.txt","a+");
		if(dil==1)
		{
		printf("***********************************\n");
		printf("*********YENI KULLANICI ADI********:");
		scanf("\n%s",y.kullaniciadi);
		printf("*******YENI KULLLANICI SIFRESI*****:");
		scanf("%s",y.sifre);
		printf("***********************************\n");
		}
		else // ÝNGÝLÝZCE ÝÇÝN TEKRAR YAZIYORUZ //
		{
		printf("******************************\n");
		printf("*********NEW USER NAME********:");
		scanf("\n%s",y.kullaniciadi);
		printf("*******NEW USER PASSWORD******:");
		scanf("%s",y.sifre);
		printf("******************************\n");
		}
		fwrite(&s,sizeof(y),1,k);
		fflush(stdin);
			fclose(k);
		if(dil==1)
		{
		printf("\n\n YENI KULLANICI BASARILI BIR SEKILDE KAYDEDILMISTIR!!");
		printf("\n YENI KULLANICI GIRISINI SAGLAMAK ICIN ENTER'E BASINIZ:");
		test=getche();
		if(test==13)
		return login();
		}
		else
		{
		printf("\n\n NEW USER SUCCESSFULLY REGISTERED!!");
		printf("\n PRESS ENTER TO LOGIN:");
		test=getche();
		if(test==13)
		return login();
		}
	return login();
	}
