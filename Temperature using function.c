#include<stdio.h>

float celcius(float degree);
float ferinate(float celcius);


int main(){
  int x;

printf("Choose the condition: \n");

 printf(" 1) Faranite to celcius \n 2) celcius to faranite \n ");
 scanf("%d",&x);

if( x == 1){
    float d;
    printf(" Enter the temperature in Faranite ");
    scanf("%f",&d);
  
  float m =  celcius(d);
   printf("Faranite to celcius is:%f",m);
   return 0;
 
    
}else{
   float d;
   printf(" Enter the temperature in Celcius:");
   scanf("%f",&d);
   
    float n = ferinate(d);
    printf(" celcius to faranite is:%f",n);
    return 0;
 }
}
float celcius(float degree){
 float cel = (5.0/9.0)*(degree - 32);
return cel; 

}
float ferinate(float celcius){

float fer = celcius *(9.0/5.0)+32;
return fer;
}