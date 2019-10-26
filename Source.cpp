#include <stdio.h>
#include <stdlib.h>
int main()
{
	int acamulator = 0;
	int mass[15] = { 6,8,3,9,1,0,3,6,8,2,4,8,0,5456,657 };
    for (int i = 0; i < 15; i++){
		acamulator = acamulator + mass[i];
		
	}
	float x = acamulator / 15;
	printf("%0.1f\n",x);
	
	


	/*int i = 0;
	int accumulator = 0;
	for (int i = 0; i <= 10; i++)
	{
		accumulator = accumulator + i*i;
	}
	printf("%d\n", accumulator);


*/








	system("pause");
	return 0;
}






