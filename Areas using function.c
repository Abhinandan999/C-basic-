#include<stdio.h>
#include<math.h>

float square(float side);
float circle(float radius);
float rectangle(float a,float b);

int main(){
    
float x,y,z;
float q,w,e,r;
printf("Enter side of square \n");
scanf("%f",&e);

x=square(e);

printf("Enter radius of circle \n");
scanf("%f",&r);

y=circle(r);


printf("Enter side's of rectangle \n");

printf("    a) Enter length of rectangle: \n");
scanf("%f",&q);
printf("    b) Enter Breadth of Rectangle: \n");
scanf("%f",&w);

z=rectangle(q,w);
printf("\n");
printf("~~~~~~~~~~~~~~~~~~~~Areas are~~~~~~~~~~~~~~~~~~~~~");
printf("\n");
printf("\n");

   printf("   1) Area of Square is: %f \n",x);
   printf("   2) Area of Circle is: %f \n",y);
   printf("   3) Area of Rectangle is: %f \n",z);
    
    
    return 0;
    
}

float square(float side){
    return side*side;
}
float circle(float radius){
    return 3.14*radius*radius; 
}
float rectangle(float a,float b){
    return a*b;
}