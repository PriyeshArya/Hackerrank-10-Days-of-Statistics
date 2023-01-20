# Day 0: Weighted Mean

## Objective
In the previous challenge, we calculated a mean. In this challenge, we practice calculating a weighted mean. Check out the [Tutorial](https://www.hackerrank.com/challenges/s10-weighted-mean/tutorial) tab for learning materials and an instructional video!

## Task
Given an array, X, of N integers and an array, W, representing the respective weights of X's elements, calculate and print the weighted mean of X's elements. Your answer should be rounded to a scale of 1 decimal place (i.e., 12.3 format).

## Example
### Input
```
X = [1 2 3] 
W = [5 6 7]
```
### Output
```
2.1
```

### Explaination
The array of values $X[i] × W[i] =$ [ $5$ $12$ $21$ ]. Their sum is $38$. <br>
The sum of $W = 18$. 
The weighted mean is $\frac{33}{18} = 2.1111...$ <br>
Print $2.1$ and return. <br>

## Function Description
Complete the *weightedMean* function in the editor.<br><br>
weightedMean has the following parameters:
- int $X[N]$: an array of values
- int $W[N]$: an array of weights

### Prints
- float: the weighted mean to one decimal place

### Input Format
The first line contains an integer, $N$, the number of elements in arrays $X$ and $W$.<br>
The second line contains $N$ space-separated integers that describe the elements of array $X$.<br>
The third line contains $N$ space-separated integers that decribe the elements of array $W$.

### Constraints
- $5 \leq N \leq 50$
- $0 < X[i] \leq 100$, where $X[i]$ is the $i^th$ elements of array $X$.
- $0 < W[i] \leq 100$, where $W[i]$ is the $i^th$ elements of array $W$.

### Output Format
Print the weighted mean on a new line. Your answer should be rounded to a scale of $1$ decimal place (i.e., $12.3$ format).

## Example
### Sample Input
```
5                 
10 40 30 50 20    
1 2 3 4 5         
```
size $N = 5$ for both $X[$ $]$ and $W[$ $]$ <br>
$X =$ $[$ $10$ $40$ $30$ $50$ $20$ $]$<br>
$W =$ $[$ $1$ $2$ $3$ $4$ $5$ $]$

### Sample Output
```
32.0
```
### Explaination
We use the following formula to calculate the weighted mean:

$$result = \frac{10×1 + 40×2 + 30×3 + 50×4 + 20×5 }{1 + 2 + 3 + 4 + 5} = \frac{480}{15} = 32.0$$

And then print oour result to a scale of $1$ decimal place $(32.0)$ on a new line.
