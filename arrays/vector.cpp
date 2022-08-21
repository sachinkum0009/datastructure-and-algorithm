#include <cstdio>
#include <vector>

int main() {
	printf("vector \n");
	std::vector<int> vectorInt;
	vectorInt.resize(3);
	vectorInt[0] = 1;
	vectorInt[1] = 2;
	vectorInt[2] = 3;
	for (size_t index=0; index < 3; ++index) {
		printf("value %d \n", vectorInt[index]);
	}
	return 0;
}
