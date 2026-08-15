#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
    int hr,min,sec;
    hr=min=sec=0;
    while(1){
        system("cls");
        printf("%02d : %02d : %02d", hr,min,sec);
        fflush(stdout);
        sec ++;
        if(sec==60){
            sec=0;
            min++;
        }
        if(min==60){
            min=0;
            hr++;
        }
        if(hr==24){
            hr=0;
            min=0;
            sec=0;
        }
        sleep(1); 
    }
    return 0;
}