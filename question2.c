
#include<stdio.h>
int main(){
    int num,str,rn,tr,i,spc;
    printf("enter the total number terms");
    scanf("%d",&tr);
    rn=1;
    while(rn<=tr){
    spc=1;
    while(spc<=tr-rn){
            printf(" ");
            spc=spc+1;
    }
    num=rn;
    str=1;
    while(str<=rn){
        printf("%d",num);
        printf(" ");
        num=num+1;
        str=str+1;
    }
    rn=rn+1;
    printf("\n");
    }
}
