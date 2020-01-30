#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


float randf(float max) {

	srand(time(0));
	int nrand = (rand() % (int) max) + 1;

	return nrand;

}

float func(float x,float y,float d) {

	float z;
	float dz;

	z = x*x + y*y;

	dz = z + randf(d*z);

	return dz;

}

int main(int argc, char* argv[]) {

	float x,y,d;

	x = atof(argv[1]);
	y = atof(argv[2]);
	d = atof(argv[3]);

	float output;

	output = func(x,y,d);

	printf("%f",output);
 
	return 0;
}


