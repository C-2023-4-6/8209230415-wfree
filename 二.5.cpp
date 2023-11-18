#include <iostream>  
#include <string>

int count_letters(const std::string& s) {
    int count = 0;
    for (char c : s) {
        if (isalpha(c)) {
            count++;
        }
    }
    return count;
}

int count_spaces(const std::string& s) {
    int count = 0;
    for (char c : s) {
        if (isspace(c)) {
            count++;
        }
    }
    return count;
}

int count_digits(const std::string& s) {
    int count = 0;
    for (char c : s) {
        if (isdigit(c)) {
            count++;
        }
    }
    return count;
}

int count_other(const std::string& s) {
    int count = 0;
    for (char c : s) {
        if (!isalnum(c) && c != '\n') {
            count++;
        }
    }
    return count;
}

int main() {
    std::string input;
    std::cout << "请输入一行字符：";
    std::getline(std::cin, input);

    int letter_count = count_letters(input);
    int space_count = count_spaces(input);
    int digit_count = count_digits(input);
    int other_count = count_other(input);

    std::cout << "英文字母个数：" << letter_count << std::endl;
    std::cout << "空格个数：" << space_count << std::endl;
    std::cout << "数字字符个数：" << digit_count << std::endl;
    std::cout << "其他字符个数：" << other_count << std::endl;

    return 0;
}