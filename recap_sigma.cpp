#include <iostream>

int sigma(int n) {
    int summ = 0;
    for (int i = 0; i <= n;i++){
        summ += i;
    }
    return summ;
}

int main() {
    int n;
    std::cin >> n;
    int res = sigma(n);
    std::cout << res;
    return 0;
}