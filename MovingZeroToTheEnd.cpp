#include <iostream>
#include <vector>

std::vector<int> move_zeroes(const std::vector<int>& input);

int main(){
    move_zeroes({1, 2, 0, 1, 0, 1, 0, 3, 0, 1});
    return 0;
}

std::vector<int> move_zeroes(const std::vector<int>& input) {
    int zeroCount = 0;
    for (int i = 0; i < input.size(); i++){
        std::cout << input[i] << std::endl;
        if (input[i] == 0){
            zeroCount++;
            
        }
    }
}