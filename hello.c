#include <stdio.h>

/* Hello world 
 * by Andrew da Costa
 */

int main(int argc, char *argv[])
{
	printf("Hello world!\n");
	printf("By Andrew da Costa\n");
	
	int x,y,z;
	x = 10;
	y = 20;
	z = x + y;
	printf("x is %d, y is %d, and z is %d \n", x, y, z);
	
	int h,w,d,V;
	h = 11;
	w = 7;
	d = 14;
	V = h * w * d; /*This calculates the volume of a box with given dimensions h,w,d*/
	printf("The box with dimensions %d by %d by %d, has a volume of %d\n",h,w,d,V);
	
	
	return 0;
}
