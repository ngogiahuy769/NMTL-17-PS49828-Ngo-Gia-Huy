#include <stdio.h>
#define PI 3.14159;
int main(){
    int d,r,bk;
    printf("hay nhap chieu dai va rong: ");
    scanf("%d%d",&d,&r);
    printf("chu vi la %d\ndien tich la %d\n",(d + r) * 2,d * r);
    printf("hay nhap vao ban kinh: ");
    scanf("%d",&bk);
     float cv = 1.0 * (2 * PI * bk);
     float dt = 1.0 * (PI * bk * bk);
    printf("chu vi la %.2f\ndien tich la %.2f\n",cv,dt);
    return 0;

}