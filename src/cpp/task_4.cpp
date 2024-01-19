/*
 * Author:
 * Date:
 * Name:
 */
#include <iostream>
#include <vector>

class Problem4 {
public:
    static std::string multiplyUnary(const std::string& input) {
        std::string tape = input;
        std::string output;
        int state = 1;
        for (char& c : tape) {
            if (c == 'B') c = '0';
            if (c == 'X') c = '1';
        }
        size_t separator = tape.find('C');
        if (separator == std::string::npos) {
            return "Invalid input";
        }
        int count1 = std::count(tape.begin(), tape.begin() + separator, '1');
        int count2 = std::count(tape.begin() + separator + 1, tape.end(), '1');
        int product = count1 * count2;
        output.assign(product, '1');
        return output;
    }
};
