#include <stdio.h>
#include <stdlib.h>


int day_of_year(int year, int month, int day);
int month_day(int year, int yearday, int *pmonth, int *pday);

static char daytab[2][13] = 
{
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};


int main(void){

	int year, month, day;
	int *pmonth = malloc(8);
	int *pday = malloc(8);
	
	/*Check 5 invalid cases and one valid case. */
	/*for (int i = 0; i < 6; i++){
	printf("please input the year, month and day: ");
	scanf("%d%d%d", &year, &month, &day);
	if (day_of_year(year, month, day) < 0) {
        	printf("Error: invalid date.\n");
    	}
    	else
		printf("the day of year is: %d\n",day_of_year(year, month, day));
	}*/
	
	/*Check 4 invalid cases and one valid case. */
	for (int i = 0; i < 5; i++){
	printf("please input the year and day of year: ");
	scanf("%d%d", &year, &day);
	if(month_day(year, day, pmonth, pday) == 1)
		printf("The month is: %i\nThe day is: %i\n", *pmonth, *pday);
	}
	
	return 0;
	
}


int day_of_year(int year, int month, int day) {
	
	int leap, i;

        leap = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));



    	if((year >=  1) && ((month >= 1) && (month <= 12)) && ((day >= 1) && (day <= daytab[leap][month]))) {
        	for(i = 1; i < month; i++) {
            		day += daytab[leap][i];
        	}

        	return day;
    	}

   	return -1;

}

int month_day(int year, int yearday, int *pmonth, int *pday) {
	int leap, i;

	leap = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
	if((year >= 1) && ((leap == 1 && (yearday >= 1 && yearday <= 365)) || (leap == 0 && (yearday >= 1 && yearday <= 366)))) {
		for(i = 1; yearday > daytab[leap][i]; i++) {
          	yearday -= daytab[leap][i];
        	}
		
		*pday = yearday;
	        *pmonth = i;

		return 1;
	}


	else {
		printf("Error: invalid year or day of year.\n");
		return -1;
	}
    	
}


