Recursion - 
When a function calls itself, This process is called the recursion.
For example - 

void f(){
  f();
}

When a complex problem can be divided into smaller non-overlapping/overlapping similar sub-problems and which can be further divided into similar sub-sub problems and so on. Then The solution to the complex problem can be determined using the solution of these sub-problems.

For recursive problems, we will need recurrence relations. So we need to convert the problem into the recurrence relation. Next task is to determine the base case for the problem.

Ex-1.  Factorial of a number - 
4! = 4* 3!
Recurrance relation =  n! = n * (n-1)!

Base Case = 0! = 1. (the place where we want to terminate the program).

There are three forms seen in programs-
1. fun()
{
   //base case
   //processing
   //recurrence relation

}

2. fun()
{
   //base
   //recurrence relation
   //processing
}

3. fun()
{
   //base
   //processing
   //recurrence relation
   //processing

}


