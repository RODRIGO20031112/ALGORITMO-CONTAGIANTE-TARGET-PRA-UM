#include <iostream>

int main() {
    int n = 5;

    for (int i = -n + 1; i < n; ++i) {
        // Espaços
        for (int j = 0; j < abs(i); ++j) {
            std::cout << " ";
        }

        // Números decrescentes
        for (int j = n; j > abs(i); --j) {
            std::cout << j;
        }

        // Números crescentes
        for (int j = abs(i) + 2; j <= n; ++j) {
            std::cout << j;
        }

        std::cout << std::endl;
    }

    return 0;
}