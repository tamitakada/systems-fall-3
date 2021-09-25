#include <stdio.h>

int multiples_of_three_or_five(int num);
int even_fib_nums(int num);

int main() {
    int ans = multiples_of_three_or_five(1000);
    printf("Sum of multiples of 3 or 5 for 1000:\n%d\n", ans);
    
    int other_ans = even_fib_nums(4000000);
    printf("\nSum of even Fibonacci numbers under 4 million:\n%d\n", other_ans);
}

int multiples_of_three_or_five(int num) {
    int counter = 0;
    int sum = 0;
    while (counter < num) {
        if (counter % 3 == 0 || counter % 5 == 0) sum += counter;
        counter++;
    }
    return sum;
}

int even_fib_nums(int num) {
    int first = 1;
    int second = 1;
    
    int sum = 0;
    
    while (first < num) {
        if (first % 2 == 0) sum += first;
        
        int old_first = first;
        first += second;
        second = old_first;
    }
    
    return sum;
}
