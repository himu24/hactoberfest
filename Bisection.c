#include<stdio.h>
#include<math.h>
float f(float x)
{   float s;
    s=0.7*pow(x,5)-8*pow(x,4)+44*pow(x,3)-90*pow(x,2)+82*x-25;
    return s;
}

main()
{   int i=00,e;
    float a,b,c;
    printf("enter the significant value upto which you want to print ");
    scanf("%d",&e);
    start:
     printf("enter the interval\n");
    scanf("%f%f",&a,&b);
    if(f(a)*f(b)<0)
    {printf("n\ta  b  c  f(c) \n");
    while((b-a)>pow(10,-e))
    {
        printf("%d  %.4f  %.4f  %.4f  %.4f\n",i,a,b,c,f(c));
        c=(a+b)/2;
        if(f(a)*f(c)<0)
        b=c;
        else
        a=c; 
        
        
            i++;
      
        }
        printf("%d  %.4f  %.4f  %.4f  %.4f\n",i,a,b,c,f(c));
        printf("appx root of the equation is %0.5f",c);
        }
        else
    goto start;
   
}
