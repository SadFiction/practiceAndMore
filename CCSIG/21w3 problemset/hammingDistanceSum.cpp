#include <iostream>
#include <string>
#include <vector>
#include <numeric> // for accumulate
#include <functional> // for std::bit_xor

int hammingDistanceSum(const std::string& a, const std::string& b) {
    int sum = 0;
    for (size_t i = 0; i < a.size(); ++i) {
        int bitA = a[i] - '0';
        int bitB = b[i] - '0';
        sum += bitA ^ bitB; // XOR operation
    }
    return sum;
}

int main() {
    std::string a = "001";
    std::string b = std::string(16 * 200000, '1'); // 16 * 200000 = 3.2 million '1's

    int totalSum = 0;
    size_t chunkSize = a.size();

    for (size_t i = 0; i + chunkSize <= b.size(); i += 1) {
        totalSum += hammingDistanceSum(a, b.substr(i, chunkSize));
    }

    std::cout << totalSum << std::endl;
    return 0;
}
