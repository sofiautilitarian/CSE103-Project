#include<stdio.h>
//Hello
//This is my first academic project and it was the easiest, the code is entirely done by me
//author: Sofia Noor , Dhaka, Bangladesh
//Time: 10:58 PM
int straightline(a,b,c,d,e,f)
{
    int g,h,i,j,k,l=0;
    if (a>d){
        g=a;
    }
    else{
        g=d;
    }
    if (a<d){
        j=a;
    }
    else{
        j=d;
    }
    if (b>e){
        h=b;
    }
    else{
        h=e;
    }
    if (b<e){
        k=b;
    }
    else{
        k=e;
    }
    if (c>f){
        i=c;
    }
    else{
        i=f;
    }
    if (c<f){
        l=c;
    }
    else{
        l=f;
    }
    //printf("%d %d %d %d %d %d",g,h,i,j,k,l);
    if (abs(g/j)==abs(h/k) && abs(h/k)==abs(i/l)){
        printf("Identical Straight line\n");
    }
    else{
        printf("Ratios of the co-efficients are not same, the straight lines are non-identical\n");
    }
}

int main ( ){
    int x,y,z,xx,yy,zz;
    printf("Input the co efficients of two equations serially:\n");
    printf("Input a1, b1, c1 and a2, b2, c2 respectively\n");
    scanf ("%d %d %d %d %d %d",&x,&y,&z,&xx,&yy,&zz);
    straightline(x,y,z,xx,yy,zz);
    return 0;
}
