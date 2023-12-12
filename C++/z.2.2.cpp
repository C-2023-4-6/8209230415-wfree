#include <iostream>
#include <cctype> // ���ڴ����ַ���ͷ�ļ�

int parseHex(const char* const hexString) {
    int result = 0;
    int length = 0;

    // �����ַ�������
    while (hexString[length] != '\0') {
        length++;
    }

    // ��ÿ��16�����ַ�ת��Ϊ��Ӧ��10�������ֲ��ۼ�
    for (int i = 0; i < length; ++i) {
        char currentChar = std::tolower(hexString[i]); // ���ַ�ת��ΪСд

        if (std::isdigit(currentChar)) {
            result = result * 16 + (currentChar - '0');
        }
        else if (currentChar >= 'a' && currentChar <= 'f') {
            result = result * 16 + (currentChar - 'a' + 10);
        }
        else {
            std::cerr << "�������������Ч�ַ�" << std::endl;
            return -1; // ���ظ�����ʾת��ʧ��
        }
    }

    return result;
}

int main() {
    const char* hexString = "A5";
    int decimalResult = parseHex(hexString);

    if (decimalResult != -1) {
        std::cout << "16������ " << hexString << " ת��Ϊ10������Ϊ: " << decimalResult << std::endl;
    }

    return 0;
}
