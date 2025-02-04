// Non-tail-recursive factorial function
int factorial_non_tail(int n) {
    if (n == 0) return 1;
    // Additional multiplication operation after the recursive call
    return n * factorial_non_tail(n - 1);
}