## Question 4

(K&R Exercise 5-5) Write a version of the library function <code>strncpy</code>, which operate on at most the first n characters of their argument strings. For example, <code>strncpy(s,t,n)</code> copies at most n characters of t to s. **Be sure to use pointers**. Verify that your function works with at least 3 examples.

Compile Steps:

	gcc q4.c

Output:

Insert string t: 1234567890
Final string s: 1234

Insert string t: qwerty
Final string s: qwer

Insert string t: Cooper Union
Final string s: Coop
