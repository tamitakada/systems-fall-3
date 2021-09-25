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
