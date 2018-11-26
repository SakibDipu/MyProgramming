#include<stdio.h>
#include<string.h>
main()
{
    int i,j,length_x[20],length_y[20],n,big[20],small[20];
    char x[20][100],y[20][100],big_str[20][100];
    printf("How many times do you want to change the words?\n");
    scanf("%d",&n);

    for(i=0; i<n; i++){
        printf("CASE:%d\n",i+1);
        printf("Enter the first word:\n");
        scanf(" %[^\n]",x[i]);
        printf("Enter the second word:\n");
        scanf(" %[^\n]",y[i]);
        length_x[i]=strlen(x[i]);
        length_y[i]=strlen(y[i]);
        if(length_x[i]>length_y[i]){
            strcpy(big_str[i],x[i]);
            big[i]=length_x[i];
            small[i]=length_y[i];
        }else if(length_y[i]>length_x[i]){
            strcpy(big_str[i],y[i]);
            big[i]=length_y[i];
            small[i]=length_x[i];
        }
    }

    for(i=0; i<n; i++){
        if(length_x[i]==length_y[i]){
            for(j=0; j<length_x[i]; j++){
                printf("%c",x[i][j]);
                printf("%c",y[i][j]);
            }
        }else{
            for(j=0; j<small[i]; j++){
                printf("%c",x[i][j]);
                printf("%c",y[i][j]);
            }
            for(j=small[i]; j<big[i]; j++){
                printf("%c",big_str[i][j]);
            }
        }
        printf("\n");
    }



}
