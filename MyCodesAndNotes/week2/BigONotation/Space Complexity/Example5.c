// Factorial recursion
// Space complexity: O(n) → recursion stack depth = n.


int factorial(int n){
    if(n <= 1) return 1;
    return n * factorial(n-1);
}