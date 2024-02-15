#include<stdio.h>
int main(){
    int num,sum=0;
    char ch;

    while(1){
        printf("\n Provide a number:");
        scanf("%d",&num);
        if(num%2==0)
            sum=sum+num;
            printf("\n Do you want to continue:");
            scanf(" %c",&ch);
            switch(ch){
            case 'Y':
            case 'y': 
            continue;
            case 'n':
            case 'N': 
            printf("\n Sum is %d",sum);
            default : 
            printf("\n Wrong input");
        }
    }
    return 0;
}