#include <iostream>
#include "dw.h"

void print_reversed(const int values[], int size) {
    for (int i = size - 1; i >= 0; i--) {
        std::cout << values[i] << " ";
	}
}
