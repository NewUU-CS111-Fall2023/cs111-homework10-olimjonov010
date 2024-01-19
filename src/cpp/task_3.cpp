/*
 * Author:
 * Date:
 * Name:
 */



#include <iostream>
#include <string>
#include <algorithm>

class Problem3 {
public:
    static std::string compareNumbers(const std::string& tape) {
        int countFirst = 0;
        int countSecond = 0;
        int currentState = 1; 
        for (char symbol : tape) {
            switch (currentState) {
                case 1:
                    if (symbol == '1') {
                        countFirst++;
                    } else {
                        currentState = 2;
                    }
                    break;
                case 2:
                    if (symbol == '1') {
                        countSecond++;
                    } else {
                        currentState = 3;
                    }
                    break;
                case 3:
                    break;
            }
        }
        if (countFirst >= countSecond) {
            return "1";
        } else {
            return "11";
        }
    }
};
