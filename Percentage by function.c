/* In this example we learnt to take out percentage of marks by using function*/


#include<stdio.h>
int percentage(int science,int sanskrit,int maths);

int main(){
        int a,b,c;
    printf("Enter the marks of science,sanskrit,maths respectively: \n ");
    scanf("%d%d%d",&a,&b,&c);
  
    printf("Percentage is %d",percentage(a,b,c));
    return 0;
}

int percentage(int science,int sanskrit,int maths){

 return((science+sanskrit+maths)/3);
    
    
    
}