#include <iostream>
#include <string>

std::string solution(int number);

int main(){
    std::cout << solution(182);
    return 0;
};

std::string solution(int number){
    std::string romanChar[13] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
    int romanValue[13] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
    std::string result = "";

    int remainingNumber = number;
    while (remainingNumber != 0){
        for (int i = 12; i >= 0; i--){
            if (romanValue[i] <= remainingNumber){
                result += romanChar[i];
                remainingNumber -= romanValue[i];
                break;
            }
        };
    };
    return result;
};