#include<stdio.h>
int main()
{
    int i,j,t,array[100][100],n[100],m[100],k,l,p,mid_element;
    char command[100][101][3];
    scanf("%d",&t);
    for(i=0; i<t; i++){
        scanf("%d%d",&n[i],&m[i]);
        for(j=0; j<n[i]; j++){
            scanf("%d",&array[i][j]);
        }
        for(j=0; j<m[i]; j++){
            scanf("%s",&command[i][j]);
            if(command[i][j][0] == 'S'){
                for(k=0; k<n[i]; k++){
                    array[i][k] = array[i][k] + (command[i][j][1]-48);
                }
            }else if(command[i][j][0] == 'M'){
                for(k=0; k<n[i]; k++){
                    array[i][k] = array[i][k] * (command[i][j][1]-48);
                }
                for(k=0; k<n[i]; k++){
                    printf("%d ",array[i][k]);
                }
            }else if(command[i][j][0] == 'D'){
                for(k=0; k<n[i]; k++){
                    array[i][k] = array[i][k] / (command[i][j][1]-48);
                }
                for(k=0; k<n[i]; k++){
                    printf("%d ",array[i][k]);
                }
            }else if(command[i][j][0] == 'R'){
                l = n[i] - 1;
                mid_element = (n[i]-1)/2;
                if(l%2!=0){
                    mid_element = mid_element + 1;
                }
                for(k=0; k<n[i]; k++){
                    if(l>mid_element){
                        p = array[i][k];
                        array[i][k] = array[i][l];
                        array[i][l] = p;
                    }
                    l--;
                }
            }else if(command[i][j][0] == 'P'){
                l = array[i][command[i][j][1]-48];
                array[i][command[i][j][1]-48] = array[i][command[i][j][2]-48];
                array[i][command[i][j][2]-48] = l;
            }

        }
        printf("case %d:\n",i+1);
        for(k=0; k<n[i]; k++){
            printf("%d ",array[i][k]);
        }
        printf("\n");

    }


}
