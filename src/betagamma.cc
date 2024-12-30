#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    std::cout << "計算する方を選んでください(0.γ->β、1.β->γ)" << std::endl;
    int j;
    std::cin >> j;
    std::cout << std::fixed << std::setprecision(10);
    if (j == 0) {
        std::cout << "γを入力してください (γ)" << std::endl;
        double g;
        std::cin >> g;
        double beta = sqrt(g*g-1)/g;
        std::cout << "β: " << beta << std::endl;
    } else if (j == 1) {
        std::cout << "相対速度を入力してください (β)" << std::endl;
        double beta;
        std::cin >> beta;
        double g = 1/sqrt((1 - beta*beta));
        std::cout << "γ: " << g << std::endl;
    } else {
        std::cout << "無効な入力です。" << std::endl;
    }

    return 0;
}
