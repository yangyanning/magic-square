#include <vector>
#include "helper.hpp"

int main() {
    std::vector<int> v3;
    for (int a11 = 1; a11 <= 9; ++a11) {
        for (int a12 = 1; a12 <= 9; ++a12) {
            v3.clear();
            v3.insert(v3.end(), {
                a11, a12, 15 - a11 - a12,
                20 - 2*a11 - a12, 5, 2*a11 + a12 - 10,
                a11 + a12 - 5, 10 - a12, 10 - a11
            });
            if (allPositive(v3) && allElementsUnique(v3)) {
                printVectorWithWidth(v3, 3);
            }
        }
    }
}
