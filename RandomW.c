#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(int argc ,char *argv[])
{
    char *p =argv[1];
    int seed = atoi(p);
	
    int i,id,move,t;
	float x,y,h;
	int a[11];      				
	id = 10000;  			
	srand(seed);
	for(i=0; i <= 10; i++){a[i]=0;} 
	printf("y :");
	for(i=1; i <= id; i++)
	{	
		x = 0.0;
		y = 0.0;
		while(x < 1.0f) 
		{	
			move = (rand()%100);
			if(move <= 65)                         {x = x + 0.1;}
			else if(move >65 && move <= 70)   {x = x - 0.1;}
			else if(move > 70 && move <= 85)  {y = y + 0.1;}
			else if(move > 85 && move <= 100) {y = y - 0.1;}
			if (y > 0.5f)   { y -= 0.2; }
            if (y < -0.5f) { y += 0.2; }
            if (x < 0.0f) { x += 0.2; }
		}
		printf("%f\n",y);
			a[(int)((y+0.5)*10)]++;	
	}
}
