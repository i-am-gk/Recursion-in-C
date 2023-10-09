#include <stdio.h>
void f(double n) {
    if (n != 0) {
        printf("%f", n);
        f(n / 10);
    }
    else {
        return;
    }
}
int main() {
    f(1234567);
    return 0;
}

