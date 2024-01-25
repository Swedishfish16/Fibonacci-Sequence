#include <iostream>
#include <vector>

int main() {

	int a{0};
	int b{1};
	int c{};

	std::vector<int> fibValues{};

	int terms{};

	std::cout << "Enter terms for fibonacci sequence: ";
	std::cin >> terms;

	if (terms > 30) {
		std::cout << "Number too large, please try a smaller number.";
	}
	else if (terms <= 0) {
		std::cout << "Number cannot be less than or equal to 0, please try another number.";
	}
	else {
		for (int i = 0; i < terms; ++i) {
			c = a + b;
			fibValues.push_back(c);
			std::cout << a << " + " << b << " = " << fibValues.at(i) << "\n";

			a = b;
			b = c;

		}
	}

	return 0;
}


// Fibonacci sequence
//
// a + b = c
//
// set value of b to a, set value of c to b
// 
// a = b, b = c - > a + b = c
// continue loop for set amount of times
// 
//on each iteration save value of c into vector using .push_back
