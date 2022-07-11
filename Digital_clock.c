#include<stdio.h>
#include<windows.h>
int main(){
    int h,m,s;
    printf("Set Time::");
    scanf("%d %d %d",&h,&m,&s);
    if(h>12||m>59||s>59){
        printf("\nInvalid Time format!!");
        return 0;
    }
    while(1){
        s++;
        if(s>59){   
            s=0;
            m++;
        }
        if(m>59){
            m=0;
            h++;
        }
        if(h>12){
            h=1;
        }
        system("cls");
        printf("Time is:");
        printf("\n %0.2d:%0.2d:%0.2d",h,m,s);
        Sleep(1000);
    }
    return 0;
}
