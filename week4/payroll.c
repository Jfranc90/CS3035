#include <stdio.h>
#include <stdlib.h>

struct employee {
	char *name;
	double wage;
	double hours;
};

int main(int argc, char **argv)
{
	char nm[5][30] = {"Billy Cruz", "John Smith", "Jane Doe", "Tara Bara", "Hannah Banana"};
	double wages[5] = {15.00,33.15,21.00,22.30,21.55};
	double hrs[5] = {21.00,12.00,15.00,29.00,40.00};
	struct employee *curr_emp;
	struct employee *employees = (struct employee *) malloc(5 * sizeof(struct employee));
	struct employee *last = employees + 4;
	double curr_wage = 0;
	double curr_hours = 0;
	double total_pay = 0;
	double average = 0;
	int counter = 0;
	
	for(int i = 0; i < 5; i++)
	{
		curr_emp = employees + i;
		curr_emp -> name = nm[i];
		curr_emp -> wage = wages[i];
		curr_emp -> hours = hrs[i];
	}
	
	curr_emp = employees;
	do{
		curr_wage = curr_emp -> wage;
		curr_hours = curr_emp -> hours;
		total_pay = curr_wage * curr_hours;
		average = average + total_pay;
		counter++;
		printf("%s, wage %.2f, hours %.2f, total pay %.2f\n", curr_emp -> name, curr_wage, curr_hours, total_pay);
		curr_emp++;
	} while(curr_emp <= last);
	
	average = average / counter;
	printf("Average paycheck: %.2f", average);
	return 0;
}

