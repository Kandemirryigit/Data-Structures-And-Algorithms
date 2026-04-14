// Recursive function that calls itself once per call, decreasing by 1 each time → O(n)


void f(int n) {
    if(n==0) return;
    f(n-1);
}


// Recursive function that calls itself twice per call → exponential O(2ⁿ)
// Time: O(2ⁿ)
// Space: O(n)

int fib(int n) {
    if(n<=1) return n;
    return fib(n-1) + fib(n-2);
}