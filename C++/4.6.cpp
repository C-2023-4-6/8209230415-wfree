#include <iostream>
#include <cctype> // 用于处理字符的头文件

void count(const char s[], int counts[]) {
    for (int i = 0; s[i] != '\0'; ++i) {
        if (std::isalpha(s[i])) {
            char lowercaseChar = std::tolower(s[i]); // 将字符转换为小写
            counts[lowercaseChar - 'a']++;
        }
    }
}

int main() {
    const int alphabetSize = 26;
    int counts[alphabetSize] = { 0 }; // 初始化数组，所有元素置为0

    char inputString[100]; // 假设字符串大小不超过100

    // 输入字符串
    std::cout << "输入字符串: ";
    std::cin.getline(inputString, sizeof(inputString));

    // 调用count函数
    count(inputString, counts);

    // 显示非零次数
    for (int i = 0; i < alphabetSize; ++i) {
        if (counts[i] != 0) {
            char letter = 'a' + i; // 将索引转换为字母
            std::cout << letter << ": " << counts[i] << "次" << std::endl;
        }
    }

    return 0;
}
