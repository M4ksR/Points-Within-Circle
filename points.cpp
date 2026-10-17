#include <iostream>

int main(){
	unsigned long long R;
	std::cin >> R;

	unsigned long long toR = R*R;
	unsigned long long y = R;

	unsigned long long count = 2*y + 1;
	for (unsigned long long x = 1; x <= R; ++x){
		while (x*x + y*y > toR && y >= 0){
		 	--y;
		}
		count += 4*y + 2;
	}

	std::cout << count << std::endl;
	return 0;
}
