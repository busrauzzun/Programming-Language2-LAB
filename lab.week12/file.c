#include <stdio.h>
#include <string.h>

int no;
char isim[40];
char bolum[40];

void olustur(FILE*mfptr);
void arama(FILE*mfptr);
void ekle(FILE *mfptr);
void yazdir(FILE*mfptr);

int main(){
    
    FILE*mfptr;
    int secim;
    printf("Yapmak istediginiz islemi seciniz: \n" );
    printf("1-Dosya olusturma\n"
    "2-Isim arama\n"
    "3-Kayit ekleme\n"
    "4-yazdirma\n"
    "5-Cikis");
    printf("\n");
    scanf("%d",&secim);
    printf("\n");

    while(secim!=5){
        switch(secim){
            case 1: olustur(mfptr);break;
            case 2: arama(mfptr); break;
            case 3: ekle(mfptr);break;
            case 4: yazdir(mfptr);break;
            case 5: break;
        }
        printf("Yapmak istediginiz islemi seciniz: \n" );
        scanf("%d",&secim);
    }
}

void olustur(FILE*mfptr){
    int i,n;
    printf("Kac ogrenci için liste olusturacaksiniz? : ");
    scanf("%d",&n);
    if((mfptr=fopen("students.txt","w"))==NULL){
        printf("Dosya acilamadi");
    }
    else{
        printf("ogrenci numarasi,isim,bolum\n ");
        for(i=0;i<n;i++){
            printf("?");
            scanf("%d%s%s",&no,isim,bolum);
            fprintf(mfptr,"%d%s%s",no,isim,bolum);
        }
        fclose(mfptr);
        
    }
}

void arama(FILE*mfptr){
    char aranan[40];
    printf("Aramak istediginiz ismi giriniz: ");
    scanf("%s",aranan);

    if((mfptr=fopen("students.txt","r"))==NULL){
        printf("Dosya acilamadi");
    }
    else{
        fscanf(mfptr,"%d%s%s",&no,isim,bolum);
        while(!feof(mfptr)){
            if(strcmp(isim,aranan)!=0){
                printf("Kaydi bulunan ogrenci: \n");
                printf("%4d %4s %4s",no,isim,bolum);
            }
            fscanf(mfptr,"%d%s%s",&no,isim,bolum);

        }
        fclose(mfptr);
    }
}

void ekle(FILE *mfptr){
    int i,n;
    printf("Kac kisi eklemek istersiniz: ");
    scanf("%d",&n);

    if((mfptr=fopen("students.txt","a+"))==NULL){
        printf("Dosya acilamadi");
    }
    else{
        for(i=0;i<n;i++){
            scanf("%d%s%s",&no,isim,bolum);
            fprintf(mfptr,"%d%s%s",no,isim,bolum);
        }
        fclose(mfptr);
    }
}
 
void yazdir(FILE*mfptr){
    if((mfptr=fopen("students.txt","r"))==NULL){
    printf("Dosya acilamadi");
    }
    else{
        fscanf(mfptr,"%d%s%s",&no,isim,bolum);
        while(!feof(mfptr)){
            printf("%4d %4s %4s",no,isim,bolum);
            fscanf(mfptr,"%d%s%s",&no,isim,bolum);
        }
        fclose(mfptr);
    }
}