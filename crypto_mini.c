#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<stdlib.h>
#define MAX 100

void caesar();
char caesar_encryption(char);
char caesar_decryption(char);

void rsa();
int rsa_encryption(int ,int ,int);
int rsa_decryption(int ,int ,int );
int cal_e(int);
int cal_d(int e,int t);

void main()
{
    printf("\nPress Enter to proceed....");
    getchar();
    printf("\n\n");
    system("cls");

    int choice_cryptography;

    printf("\n\t\t* * * * * * * * W E L C O M E * * * * * * * *");
    printf("\n\nSelect a cryptography type and press enter :");
    printf("\n\n1) Simple Cryptography");
    printf("\n\n2) Difficult Cryptography");
    printf("\n\nPlease enter your choice here : ");

    scanf("%d",&choice_cryptography);

    system("cls");

    if(choice_cryptography==1)
    caesar();
    else
    rsa();
}

void rsa()
{
    int p,q,n,e,d,i,temp,t,choice_rsa,ch,Z=255,encrypt;
    char decrypt,file_encrypt[MAX],file_decrypt[MAX];
    FILE *fp,*fp1;

    printf("\n\t\t**** Welcome to RSA Cryptography Menu ****\n\n");

    p=19;
    q=11;
    n=p*q;
    t=(p-1)*(q-1);
    e=cal_e(t);
    d=cal_d(e,t);

    printf("\nSelect an operation and press enter :");
    printf("\n\n1)Encrypt a file");
    printf("\n\n2)Decrypt a file");
    printf("\n\nPlease enter your choice here : ");

	scanf("%d",&choice_rsa);

	if(choice_rsa==1)
    {
        system("cls");
        printf("\n\n\tPlease enter a file name with an extension '.txt' to encrypt\n\n");
        scanf("%s",&file_encrypt);

        fp=fopen(file_encrypt,"r");
        fp1=fopen("rsa_encrypted_file.txt","w");

        while((ch=getc(fp))!=EOF)
        {
            encrypt=rsa_encryption(ch,e,n);
            printf("%d",encrypt);
            putc(encrypt,fp1);
        }
        putc(Z,fp1);
        fclose(fp);
        fclose(fp1);
	}

	if(choice_rsa==2)
    {
        system("cls");
        printf("\n\n\tPlease enter a file name with an extension '.txt' to decrypt\n\n");
        printf("\n\n\t\t\t - - - - - T I P - - - - -\n\n");
        printf("\t you may enter the file name as 'rsa_encrypted_file.txt'\n\n");
        scanf("%s",&file_decrypt);

		fp1=fopen(file_decrypt,"r");
        fp=fopen("rsa_decrypted_file.txt","w");

		while((ch=getc(fp1))!=Z)
        {
        decrypt=rsa_decryption(ch,d,n);
        putc(decrypt,fp);
        }
        putc(EOF,fp);
	}
}


int cal_d(int e, int t)
{
    int i=0;
    while(e*i%t!=1)
    i++;
    return i;
}

int rsa_encryption(int ch,int e,int n)
{
	int i,power=1;
	for(i=0;i<e;i++)
        power=(power*ch)%n;
	power=power%n;
	return power;
}

int rsa_decryption(int ch,int d,int n)
{
	int i,power=1;
	for(i=0;i<d;i++)
        power=(power*ch)%n;
	power=power%n;
	return power;
}

int cal_e(int t)
{
	int i,e;
	for(i=3;i<t;i++)
    {
		if(t%i==1)
        {
            e=i;
            break;
        }
    }
    return e;
}


void caesar()
{
	int choice_caesar,Z=255,ch;
	char encrypt,decrypt,file_encr[MAX],file_encrypt[MAX];
	FILE *fp,*fp1;

    printf("\n\t**** Welcome to Caesar Cipher Shift Cryptography Menu ****\n\n");
    printf("\nSelect an operation and press enter :");
    printf("\n\n1)Encrypt a file");
    printf("\n\n2)Decrypt a file");
    printf("\n\nPlease enter your choice here : ");

	scanf("%d",&choice_caesar);

	if(choice_caesar==1)
    {
        system("cls");
		printf("\n\n\tPlease enter a file name with an extension '.txt' to encrypt\n\n");
		scanf("%s",&file_encr);

		fp=fopen(file_encr,"r");
		fp1=fopen("caesar_encrypted_file.txt","w");

		while((ch=getc(fp))!=EOF)
        {
			encrypt=caesar_encryption(ch);
            putc(encrypt,fp1);
        }

		putc(Z,fp1);
		fclose(fp);
		fclose(fp1);
    }


	if(choice_caesar==2)
	{
	    system("cls");

		printf("\n\n\tPlease enter a file name with an extension '.txt' to decrypt\n\n");
        printf("\n\n\t\t\t - - - - - T I P - - - - -\n\n");
        printf("\t you may enter the file name as 'caesar_encrypted_file.txt'\n\n");
		scanf("%s",&file_encrypt);

		fp=fopen(file_encrypt,"r");
		fp1=fopen("caesar_decrypted_file.txt","w");

		while((ch=getc(fp))!=Z)
        {
            decrypt=caesar_decryption(ch);
            putc(decrypt,fp1);
        }

		fclose(fp);
		fclose(fp1);
	}
}

char caesar_encryption(char m)
{
    char new_m;
    if(m!='z'&&m!='Z')
    new_m=m+1;
    else if(m=='z')
    new_m='a';
    else if(m=='Z')
    new_m='A';
    return new_m;
}

char caesar_decryption(char c)
{
    char new_c;
    if(c!='a'&&c!='A')
    new_c=c-1;
    else if(c=='a')
    new_c='z';
    else if(c=='A')
    new_c='Z';
    return new_c;
}

