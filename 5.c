#include <stdio.h>
void main()
{
    int x = 10, y = 20, z = 30, *px = &x, *py = &y, *pz = &z;
    printf("x=%d / y=%d / z=%d / px=%d / py=%d / pz=%d / *px=%d / *py=%d / *pz=%d\n",x,y,z,px,py,pz,*px,*py,*pz);
    printf("Swapping pointers \n");
    pz=px;
    px=py;
    py=pz;
    printf("x=%d / y=%d / z=%d / px=%d / py=%d / pz=%d / *px=%d / *py=%d / *pz=%d\n",x,y,z,px,py,pz,*px,*py,*pz);

}