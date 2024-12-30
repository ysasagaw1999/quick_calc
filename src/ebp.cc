#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>

int main() {
    std::vector<double> particle = {0.511, 938.27208, 939.56541, 3727.37941};

    std::cout << "計算する方を選んでください(0.E->beta,p、1.beta->E,p、2.p->beta,E)" << std::endl;
    int j;
    std::cin >> j;

    std::cout << "粒子の種類を選んでください (0.電子、1.陽子、2.中性子、3.アルファ粒子)" << std::endl;
    int i;
    std::cin >> i;
    double mass = particle[i];

    if (j == 0) {
        std::cout << "運動エネルギーを入力してください (MeV)" << std::endl;
        double T;
        std::cin >> T;
        double e = T + mass;
        double g = e / mass;
        double beta = sqrt(1 - 1 / (g*g));
        double v = 299792458 * beta;
        double p = e * beta;
	std::cout << std::fixed << std::setprecision(15);
        std::cout << "相対速度 (β): " << beta << std::endl;
        std::cout << "速度 (m/s): " << v << std::endl;
        std::cout << "運動量 (MeV/c): " << p << std::endl;
    } else if (j == 1) {
        std::cout << "相対速度を入力してください (β)" << std::endl;
        double beta;
        std::cin >> beta;
	std::cout << std::fixed << std::setprecision(15);
        double v = 299792458 * beta;
        double g = 1/sqrt((1 - beta*beta));
        double e = mass * g;
        double T = e - mass;
        double p = mass * beta * g;
        std::cout << "速度 (m/s): " << v << std::endl;
        std::cout << "運動エネルギー (MeV): " << T << std::endl;
        std::cout << "運動量 (MeV/c): " << p << std::endl;
    } else if (j == 2) {
        std::cout << "運動量を入力してください (MeV/c)" << std::endl;
        double p;
        std::cin >> p;
        double beta = p / std::sqrt(mass * mass + p * p);
        double v = 299792458 * beta;
        double e = mass / std::sqrt(1 - beta * beta);
        double T = e - mass;
	std::cout << std::fixed << std::setprecision(15);
        std::cout << "相対速度 (β): " << beta << std::endl;
        std::cout << "速度 (m/s): " << v << std::endl;
        std::cout << "運動エネルギー (MeV): " << T << std::endl;
    } else {
        std::cout << "無効な入力です。" << std::endl;
    }

    return 0;
}
