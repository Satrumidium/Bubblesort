# Bubblesort (in C)

This program sorts numbers inputted by the users using the Bubblesort algorithm. 
This algorithm compares adjacent elements (going left to right) and if they are out of order, swaps their values.

### The best case scenario 
The ***n*** elements are already in order and so the program must only run one pass (to check)
<br>***Ω*(*n*)**


### The worst case scenario 
The ***n*** elements are in reverse order and so the program must process ***n*** passes:
<br>***O*(*n<sup>2*)**

This program also "graphs" each pass and states the number of swaps and passes required like so:
```
Please write the number of elements you want sorted:
4
Enter 4 integers (spaced):
4 3 2 1
3 ___
2 __
1 _
4 ____
--------------------------
2 __
1 _
3 ___
4 ____
--------------------------
1 _
2 __
3 ___
4 ____
--------------------------
Your sorted values are:  1 2 3 4
This required 6 swap(s) and 3 pass(es).
```
