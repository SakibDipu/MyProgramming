#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20],str2[20],str3[20];
    scanf(" %[^\n]",str1);
    scanf(" %[^\n]",str2);
    scanf(" %[^\n]",str3);
    if(strcmp(str1,"vertibrado")==0 && strcmp(str2,"ave")==0 && strcmp(str3,"carnivoro")==0){
        printf("aguia\n");
    }else if(strcmp(str1,"vertibrado")==0 && strcmp(str2,"ave")==0 && strcmp(str3,"onivoro")==0){
        printf("pomba\n");
    }else if(strcmp(str1,"vertibrado")==0 && strcmp(str2,"mamifero")==0 && strcmp(str3,"onivoro")==0){
          printf("homem\n");
    }else if(strcmp(str1,"vertibrado")==0 && strcmp(str2,"mamifero")==0 && strcmp(str3,"herbivoro")==0){
        printf("vaca\n");
    }else if(strcmp(str1,"invertibrado")==0 && strcmp(str2,"inseto")==0 && strcmp(str3,"hematofago")==0){
        printf("pulga\n");
    }else if(strcmp(str1,"invertibrado")==0 && strcmp(str2,"inseto")==0 && strcmp(str3,"herbivoro")==0){
        printf("lagarta\n");
    }else if(strcmp(str1,"invertibrado")==0 && strcmp(str2,"anelideo")==0 && strcmp(str3,"hematofago")==0){
       printf("sanguessuga\n");
    }else if(strcmp(str1,"invertibrado")==0 && strcmp(str2,"anelideo")==0 && strcmp(str3,"onivoro")==0){
        printf("minhoca\n");
    }
    return 0;
}
