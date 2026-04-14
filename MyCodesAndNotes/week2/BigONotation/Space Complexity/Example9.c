// Nested recursion
// Space complexity: O(n) → only max recursion depth matters (not the total number of calls).

void fun(int n){
    if(n <= 1) return;
    fun(n-1);
    fun(n-1);
}