// Fibonacci recursion
// Space complexity: O(n) → maximum depth of recursion = n.

int fib(int n){
    if(n <= 1) return n;
    return fib(n-1) + fib(n-2);
}

