#include <stdio.h>
#include "euler.h"

int main() {
    int ans = multiples_of_three_or_five(1000);
    printf("Sum of multiples of 3 or 5 for 1000:\n%d\n", ans);
    
    int other_ans = even_fib_nums(4000000);
    printf("\nSum of even Fibonacci numbers under 4 million:\n%d\n", other_ans);
}
