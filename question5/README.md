## Question 5

(K&R Exercise 5-8) There is no error checking in <code>day_of_year</code> or <code>month_day</code>. Remedy this defect and verify that all of the cases are covered with examples.

Compile Steps:
	
	gcc q5.c

Output:
	
	please input the year, month and day: -500
	3
	14
	Error: invalid date.
	please input the year, month and day: 2018
	5
	-7
	Error: invalid date.
	please input the year, month and day: 2013
	-4
	10
	Error: invalid date.
	please input the year, month and day: 2018
	2
	31
	Error: invalid date.
	please input the year, month and day: 2018
	15
	6
	Error: invalid date.
	please input the year, month and day: 2018
	2
	5
	the day of year is: 36

	please input the year and day of year: -19
	45
	Error: invalid year or day of year.
	please input the year and day of year: 2018
	0
	Error: invalid year or day of year.
	please input the year and day of year: 2015
	405
	Error: invalid year or day of year.
	please input the year and day of year: 2016
	367
	Error: invalid year or day of year.
	please input the year and day of year: 2020
	31
	The month is: 1
	The day is: 31

