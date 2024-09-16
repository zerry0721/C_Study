#include <stdio.h>

// Boolean function that returns false and prints a message
int falseFunc()
{
    printf("falseFunc() called\n");
    return 0;
}

// Boolean function that returns true and prints a message
int trueFunc()
{
    printf("trueFunc() called\n");
    return 1;
}

int main()
{
    printf("Testing short-circuit with AND (&&) operator:\n");
    if (falseFunc() && trueFunc()) {
        printf("Both are true\n");
    } else {
        printf("At least one is false\n");
    }

    printf("Testing short-circuit with OR (||) operator:\n");
    if (trueFunc() || falseFunc()) {
        printf("At least one is true\n");
    } else {
        printf("Both are false\n");
    }

    return 0;
}
