#include <stdio.h>// this is for printf and scanf
int main(){
printf("hello world\n");
int mile=20;
float km=mile*1.6;
printf("%d miles are %f kilometers\n",mile,km);
     int min;
     printf("enter the min \n");
    scanf("%d",&min);
     int hr= min/60;
     int mm= min%60;
     int ss= 00;
     printf("%d minutes are %d hr %d mm %d ss",min,hr,mm,ss);
     // nth day to mm;dd
     int day;
     printf("enter the day \n");
     scanf("%d",&day);
     int month = day/30;
     printf("%d\n",month);
     int days;
     if(month<2){
       days= day%30-ceilf(month/2);
        if ()
     }
     else{
        days= day%30-ceilf(month/2)+2;
     }
    //  printf("%d days are %d month %d days ",day,month,days);
     switch (month)
     {
     case 0:  printf("%d days are january %d days ",day,days);
        break;
        case 1:  printf("%d days are February %d days ",day,days);
        break;
        case 2:  printf("%d days are march %d days ",day,days);
        break;
        case 3:  printf("%d days are April %d days ",day,days);
        break;
        case 4:  printf("%d days are May %d days ",day,days);
        break;
        case 5:  printf("%d days are June %d days ",day,days);
        break;
        case 6:  printf("%d days are July %d days ",day,days);
        break;
        case 7:  printf("%d days are August %d days ",day,days);
        break;
        case 8:  printf("%d days are September %d days ",day,days);
        break;
        case 9:  printf("%d days are october %d days ",day,days);
        break;
        case 10:  printf("%d days are November %d days ",day,days);
        break;
        case 11:  printf("%d days are December %d days ",day,days);
        break;

     default: printf("error");
     break;
     }
  return 0;

}
