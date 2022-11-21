#include<stdio.h>
void main(){
    int month1,month2,day1,day2,male,female;
    printf("Enter male birth month in digit");
    scanf("%d",&month1);
    printf("Enter male birth day ");
    scanf("%d",&day1);
    printf("Enter female birth month in digit");
    scanf("%d",&month2);
    printf("Enter female birth day  ");
    scanf("%d",&day2);
    if((month1==3&&(day1<=31&&day1>=21))||(month1 ==4&&(day1>=1&&day1<=19))){
        male=1;
}else if((month1==4&&(day1<=30&&day1>=20))||(month1 ==5&&(day1>=1&&day1<=20))){
        male=2;
    }else if((month1==5&&(day1<=31&&day1>=21))||(month1 ==6&&(day1>=1&&day1<=20))){
        male=3;
}else if((month1==6&&(day1<=30&&day1>=21))||(month1 ==7&&(day1>=1&&day1<=22))){
        male=4;
    }else if((month1==7&&(day1<=31&&day1>=23))||(month1 ==8&&(day1>=1&&day1<=22))){
        male=5;
    }else if((month1==8&&(day1<=31&&day1>=23))||(month1 ==9&&(day1>=1&&day1<=22))){
         male =6;
    }else if((month1==9&&(day1<=30&&day1>=23))||(month1 ==10&&(day1>=1&&day1<=22))){
          male=7;
    }else if((month1==10&&(day1<=31&&day1>=23))||(month1 ==11&&(day1>=1&&day1<=21))){
           male=8;
    }else if((month1==11&&(day1<=30&&day1>=22))||(month1 ==12&&(day1>=1&&day1<=21))){
         male=9;
    }else if((month1==12&&(day1<=31&&day1>=22))||(month1 ==1&&(day1>=1&&day1<=19))){
           male=10;
    }else if((month1==1&&(day1<=31&&day1>=20))||(month1 ==2&&(day1>=1&&day1<=18))){
         male=11;
    }else if((month1==2&&(day1<=29&&day1>=19))||(month1 ==3&&(day1>=1&&day1<=20))){
         male=12;
    }
    if((month2==3&&(day2<=31&&day2>=21))||(month2 ==4&&(day2>=1&&day2<=19))){
         female=1;
}else if((month2==4&&(day2<=30&&day2>=20))||(month2 ==5&&(day2>=1&&day2<=20))){
         female=2;
    }else if((month2==5&&(day2<=31&&day2>=21))||(month2 ==6&&(day2>=1&&day2<=20))){
          female=3;
}else if((month2==6&&(day2<=30&&day2>=21))||(month2==7&&(day2>=1&&day2<=22))){
          female=4;
    }else if((month2==7&&(day2<=31&&day2>=23))||(month2 ==8&&(day2>=1&&day2<=22))){
           female=5;
    }else if((month2==8&&(day2<=31&&day2>=23))||(month2==9&&(day2>=1&&day2<=22))){
         female=6;
    }else if((month2==9&&(day2<=30&&day2>=23))||(month2==10&&(day2>=1&&day2<=22))){
          female=7;
    }else if((month2==10&&(day2<=31&&day2>=23))||(month2 ==11&&(day2>=1&&day2<=21))){
           female=8;
    }else if((month2==11&&(day2<=30&&day2>=22))||(month2==12&&(day2>=1&&day2<=21))){
           female=9;
    }else if((month2==12&&(day2<=31&&day2>=22))||(month2 ==1&&(day2>=1&&day2<=19))){
           female=10;
    }else if((month2==1&&(day2<=31&&day2>=20))||(month2 ==2&&(day2>=1&&day2<=18))){
         female=11;
    }else if((month2==2&&(day2<=29&&day2>=19))||(month2 ==3&&(day2>=1&&day2<=20))){
           female=12;
    }
 // printf("%d  %d" ,male,female);
    if(male==1){
        if(female%2!=0){ printf("favourable: should be an excellent love match");}
         else if(female==4||female==10){ printf (" Critical: can be hard to make the relationship progress smoothly");}
        else{  printf("Less favourable: may be good but both of you need to continue to work on the relationship");}
    }else if (male==2){
        if (female%2==0){printf("favourable: should be an excellent love match");}
        else if (female==5||female==11){printf("Critical: can be hard to make the relationship progress smoothly");}
        else{ printf("Less favourable: may be good but both of you need to continue to work on the relationship");}
    }else if (male==3){
        if(female%2!=0){ printf("favourable: should be an excellent love match");}
        else if(female==6||female==12){ printf (" Critical: can be hard to make the relationship progress smoothly");}
        else{  printf("Less favourable: may be good but both of you need to continue to work on the relationship");}
  
    }else if (male ==4){
        if(female%2==0){ printf("favourable: should be an excellent love match");}
        else if(female==7||female==1){ printf (" Critical: can be hard to make the relationship progress smoothly");}
        else{  printf("Less favourable: may be good but both of you need to continue to work on the relationship");}
  
    }else if (male==5){
        if(female%2!=0){ printf("favourable: should be an excellent love match");}
        else if(female==8||female==2){ printf (" Critical: can be hard to make the relationship progress smoothly");}
        else{  printf("Less favourable: may be good but both of you need to continue to work on the relationship");}
  
    }else if (male==6){
       if(female%2==0){ printf("favourable: should be an excellent love match");}
         else if(female==9||female==3){ printf (" Critical: can be hard to make the relationship progress smoothly");}
        else{  printf("Less favourable: may be good but both of you need to continue to work on the relationship");}
  
    }else if (male==7){
        if(female%2!=0){ printf("favourable: should be an excellent love match");}
        else if(female==10||female==4){ printf (" Critical: can be hard to make the relationship progress smoothly");}
        else{  printf("Less favourable: may be good but both of you need to continue to work on the relationship");}
  
    }else if (male==8){
        if(female%2==0){ printf("favourable: should be an excellent love match");}
        else if(female==11||female==5){ printf (" Critical: can be hard to make the relationship progress smoothly");}
        else{  printf("Less favourable: may be good but both of you need to continue to work on the relationship");}
  
    }else if (male==9){
        if(female%2!=0){ printf("favourable: should be an excellent love match");}
        else if(female==12||female==6){ printf (" Critical: can be hard to make the relationship progress smoothly");}
        else{  printf("Less favourable: may be good but both of you need to continue to work on the relationship");}
  
    }else if (male==10){
        if(female%2==0){printf("favourable:should be an excellent love match");}
        else{ printf("Critical: can be hard to make the relationship progress smoothly");}
    }else if (male==11){
        if(female%2!=0){ printf("favourable: should be an excellent love match");}
        else if(female==2||female==8){ printf (" Critical: can be hard to make the relationship progress smoothly");}
        else{  printf("Less favourable: may be good but both of you need to continue to work on the relationship");}
  
    }else if (male==12){
        if(female%2==0){ printf("favourable: should be an excellent love match");}
       else  if(female==3||female==9){ printf (" Critical: can be hard to make the relationship progress smoothly");}
        else{  printf("Less favourable: may be good but both of you need to continue to work on the relationship");}
  
    }else{
        printf ("invalid input");
    }
  
}