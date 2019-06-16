#include <iostream>
#include <string>

int main(){

    //task 1
    std::string input1 = "junyiacademy";
    for (int i = input1.length() - 1; i >= 0; i--){
        std::cout << input1[i];
    }
    std::cout << "\n";

    //task 2
    std::string input2 = "flipped class room is important";
    int pos = 0, length = input2.length();
    while(pos < length - 1){
        if (input2.find(' ', pos) == std::string::npos){
            break;
        }
        int next = input2.find(' ', pos);
        std::reverse(input2.begin() + pos, input2.begin() + next);

        pos = next + 1;
    }
    std::reverse(input2.begin() + pos, input2.end());
    std::cout << input2 << "\n";

}
