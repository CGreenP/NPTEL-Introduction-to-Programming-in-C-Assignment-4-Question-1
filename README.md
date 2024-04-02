# NPTEL-Introduction-to-Programming-in-C-Assignment-4-Question-1
NPTEL Introduction to Programming in C Assignment 4 Question 1

# Question 1
Given two arrays of integers output the smallest number in the first array not present in the second one.

Input Specification: 
---
The first line contains the size N1 of the first array.

Next line give the contents of the first array.

Next line contains the size N2 of the second array.

Next line give the contents of the second array.

Output Format:
---
Output must be a single number which is the smallest number occurring in the first array that does not occur in the second. In case there is no such number, output NO.

Variable Constraints:
---
The sizes of the arrays are smaller than 20.

Each array entry is an integer which fits an int data type.

# Example:
Input:
---
```sh
3
2 3 4
4
1 3 5 7
```

Output:
---
```sh
2
```

Input:
---
```sh
1
1
2
1 2
```

Output:
---
```sh
NO
```

Sample Input 1
------------
```sh
5
1 2 3 4 5
3
2 7 9
```

Sample Output 1
-------------
```sh
1
```

Sample Input 2
------------
```sh
4
3 5 7 9
4
7 9 10 55
```

Sample Output 2
-------------
```sh
3
```

Sample Input 3
------------
```sh
2
4 6
2
4 7
```

Sample Output 3
-------------
```sh
6
```

Sample Input 4
------------
```sh
3
2 7 1
3
1 7 2
```

Sample Output 4
-------------
```sh
NO
```
