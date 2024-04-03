#include <iostream>

int BinarySearch(int array[], int array_length, int value)
{
	int low = 0;
	int high = array_length - 1;
	int med;

	while (low <= high)
	{
		med = (low + high) / 2;

		if (array[med] == value) {
			return med;
		}
		else if (array[med] < value) {
			low = med + 1;
		}
		else {
			high = med - 1;
		}
	}

	return -1;
}

int main()
{
	const int arrayLength = 6;
	int array[arrayLength]{ 1, 2, 3, 4, 5, 6 };
	int value;
	std::cout << "Write a value to find: ";
	std::cin >> value;
	int result = BinarySearch(array, arrayLength, value);

	if (result == -1) {
		std::cout << "Not found\n";
	}
	else {
		std::cout << "Index: " << result << std::endl;
	}
	system("pause");
}