![image](https://user-images.githubusercontent.com/48211637/164428019-f3336913-2b1a-4c24-90a5-58ce9f8c4843.png)


![image](https://user-images.githubusercontent.com/48211637/164428139-b1b38784-c17e-45ab-b4f6-ecfdc7ab1b8c.png)


Approach: This problem can be solved using recursion based on the following idea:
![image](https://user-images.githubusercontent.com/48211637/164428308-93536d6b-c719-4574-b0a8-2ab4b89adad7.png)

Follow the steps to solve the problem:

Use a recursive function and do the following:


i) Traverse numbers to calculate sum of adjacent elements and mod with 10 to get single least significant digit as numbers[i]=(numbers[i]+numbers[i+1])%10



ii) Delete the last element from the array, as one element will be reduced after each operation.


iii) Continue this procedure until only 2 elements are left.
