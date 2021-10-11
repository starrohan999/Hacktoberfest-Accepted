//This is my solution for HackerRank Problem "Variadic function in C".
//Link: <https://www.hackerrank.com/challenges/variadic-functions-in-c>.
//Level: Hard

int  sum (int count,...) {
    va_list a;
    int s=0;
    va_start(a, count);
    for (int i=0; i<count; i++) {
        s+=va_arg(a, int);
    }
    va_end(a);
    return s;
}

int min(int count,...) {
    va_list a;
    int min = MIN_ELEMENT;
    va_start(a, count);
    for (int i=0; i<count; i++) {
        if(min>va_arg(a, int))
            min = va_arg(a, int);
    }
    va_end(a);
    return min;
}

int max(int count,...) {
    va_list a;
    int max = MAX_ELEMENT;
    va_start(a, count);
    for (int i=0; i<count; i++) {
        if(max<va_arg(a, int))
            max = va_arg(a, int);
    }
    va_end(a);
    return max;
}
