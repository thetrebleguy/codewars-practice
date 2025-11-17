#include <string>
#include <iostream>

std::string spinWords(const std::string &str);

int main(){
    std::cout << spinWords("One little boy jumping onto Sidney") << std::endl;
    return 0;
}

std::string spinWords(const std::string &str){
    std::string final = "";
    std::string word = "";
    int length = str.length();

    for (int i = 0; i <= length; i++){
        // read each character
        if (str[i] == ' ' || i == length){
            // check if the length of the current word >= 5
            if (word.length() >= 5){
                // spin the thing
                std::string reversed = "";
                for (int j = word.length() - 1; j >= 0; j--){
                    reversed += word[j];
                }
                final += reversed;
            } else {
                // append like usual
                final += word;
            }; 

            word = ""; // reset the word buffer

            if (i < length && str[i] == ' ') {
                final += ' ';
            };

        } else {
            word += str[i];
        }
    }

    return final;
}