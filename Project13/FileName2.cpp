#include <iostream>
#include <algorithm>

int main() {
    double a, b, c;
    std::cout << "Enter three numbers: ";
    std::cin >> a >> b >> c;

    double minVal = std::min({ a, b, c });
    double maxVal = std::max({ a, b, c });

    std::cout << "Minimum: " << minVal << ", Maximum: " << maxVal << std::endl;

    return 0;
}

