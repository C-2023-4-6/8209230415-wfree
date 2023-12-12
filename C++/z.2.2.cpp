#include <iostream>
#include <cctype> // 用于处理字符的头文件

int parseHex(const char* const hexString) {
    int result = 0;
    int length = 0;

    // 计算字符串长度
    while (hexString[length] != '\0') {
        length++;
    }

    // 将每个16进制字符转换为对应的10进制数字并累加
    for (int i = 0; i < length; ++i) {
        char currentChar = std::tolower(hexString[i]); // 将字符转换为小写

        if (std::isdigit(currentChar)) {
            result = result * 16 + (currentChar - '0');
        }
        else if (currentChar >= 'a' && currentChar <= 'f') {
            result = result * 16 + (currentChar - 'a' + 10);
        }
        else {
            std::cerr << "错误：输入包含无效字符" << std::endl;
            return -1; // 返回负数表示转换失败
        }
    }

    return result;
}

int main() {
    const char* hexString = "A5";
    int decimalResult = parseHex(hexString);

    if (decimalResult != -1) {
        std::cout << "16进制数 " << hexString << " 转换为10进制数为: " << decimalResult << std::endl;
    }

    return 0;
}
