#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int h,m,s;
    printf("Set time: \n\t");
    scanf("%d%d%d",&h,&m,&s);

    if(h>12 || m>60 || s>60){
        printf("ERROR\n");
        exit(0);
    }

    while(1){
    	system("clear");
        printf("\ntime:\t %02d : %02d : %02d",h,m,s);

        s++;
        if(s>59){
            m++;
            s=0;
        }

        if(m>59){
            h++;
            m=0;
        }

        if(h>12){
            h=1;
        }
        sleep(1);
    }
    return 0;
}