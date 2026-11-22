#include <iostream>
#include <cmath>

float func1(float x, float eps);

int main() {
	float x1, x2;
	float eps;
	float dx;

	std::cout << "Введите, x1 x2 эпсилон и делитель: (x1 x2 eps dx) ";
	std::cin >> x1 >> x2 >> eps >> dx;
	if (x1 < 0) {
		x1 = 0;
	}
	if (x2 > 2) {
		x2 = 2;
	}

	float num = (x2 - x1) / dx;
	float x;
	for (int i = 0; i <= num + 1; i++) {
		x = x1 + i * dx;
	}
	std::cout << "F(" << x << ") = " << func1(x, eps) << std::endl;

	return 0;
}

float func1(float x, float eps) {
	int count = 0;

	int numen_num;
	int num_with_denom;
	int num;

	numen_num = pow(x - 1, count + 1);
	num_with_denom = (x * (count + 1) - 2 * count - 3) / (count * (count + 3) + 1);
	num = numen_num * num_with_denom;

	int sign;
	float fx = 0;

	while (abs(num) > eps) {
		if (count % 2 == 0) {
			sign = 1;
		} else if (count % 2 == 1) {
			sign = -1;
		}

		fx += sign * pow(x - 1, count + 1) / (count + 1);
		count++;
	}
	return fx;
}
