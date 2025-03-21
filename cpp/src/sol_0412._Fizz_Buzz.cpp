#include <vector>
#include <string>

class Solution {
public:
    std::vector<std::string> fizzBuzz(int n) {
        std::vector<std::string> result;
        result.reserve(n);
            for (size_t i = 1; i < n + 1; i++)
            {
                if (i % 15 == 0)
                {
                    result.push_back("FizzBuzz");
                }
                else if (i % 3 == 0)
                {
                    result.push_back("Fizz");
                }
                else if (i % 5 == 0)
                {
                    result.push_back("Buzz");
                }
                else
                {
                    result.push_back(std::to_string(i));
                }
            }
        return result;
    }
};