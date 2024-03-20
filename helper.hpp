#include <iostream>
#include <set>
#include <vector>

bool allPositive(const std::vector<int>& v) {
    for (int n : v) {
        if (n <= 0) {
            return false; // Found a non-positive element
        }
    }
    return true; // All elements are positive
}

inline bool allElementsUnique(const std::vector<int>& v) {
    std::set<int> s;
    for (int e : v) {
        if (s.count(e) > 0) {
            return false; // Duplicate element found
        }
        s.insert(e);
    }
    return true; // No duplicate elements found
}

inline void printVectorWithWidth(const std::vector<int>& v, int width) {
    for (size_t i = 0; i < v.size(); ++i) {
        std::cout << v[i] << " ";
        if ((i + 1) % width == 0 || i == v.size() - 1) {
            std::cout << std::endl; // Start a new line after printing 'width' elements or at the end of the vector
        }
    }
    std::cout << std::endl;
}
