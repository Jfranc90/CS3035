#include <stdio.h>
#include <math.h>

double triples[3][3];
int i,j,c = 3;

void inputTwoSides(double sideA, double sideB, int row);
void inputOneSideAndHyp(double sideA, double hyp, int row);

int main(int argc, char **argv)
{
	inputOneSideAndHyp(3,5,0);
	inputOneSideAndHyp(1,sqrt(2),1);
	inputTwoSides(2,3,2);
	
	for(i = 0; i < 3; i++)
	{
		printf("PythTriple [sideA=%.2f, sideB=%.2f, hyp=%.2f] \n",triples[i][0],triples[i][1],triples[i][2]);
	}
}

void inputTwoSides(double sideA, double sideB, int row)
{
	double hyp = sqrt(pow(sideA,2) + pow(sideB,2));
	for(i = 0; i < c; i++)
	{
		
		if(i == 0)
		{
			triples[row][i] = sideA;
		}else if(i == 1)
		{
			triples[row][i] = sideB;
		}else{
			triples[row][i] = hyp;
		}
	}
}

void inputOneSideAndHyp(double sideA, double hyp, int row)
{
	double sideB = sqrt(pow(hyp,2) - pow(sideA,2));
	for(i = 0; i < c; i++)
	{
		if(i == 0)
		{
			triples[row][i] = sideA;
		}else if(i == 1)
		{
			triples[row][i] = sideB;
		}else{
			triples[row][i] = hyp;
		}
	}
}
