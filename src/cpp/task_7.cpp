/*
 * Author:
 * Date:
 * Name:
 */

#include <iostream>
#include <vector>
#include <unordered_map>

class Problem7 {
public:
    static int minNumberOfRabbits(std::vector<int>& answers) {
        std::unordered_map<int, int> count;
        int rabbits = 0;
        for (int x : answers) {
            if (count.find(x) == count.end() || count[x] == 0) {
                rabbits += x + 1;
                count[x] = x;
            } else {
                count[x]--;
            }
        }
        return rabbits;
    }
};
