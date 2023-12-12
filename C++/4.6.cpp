#include <iostream>
#include <cctype> // ���ڴ����ַ���ͷ�ļ�

void count(const char s[], int counts[]) {
    for (int i = 0; s[i] != '\0'; ++i) {
        if (std::isalpha(s[i])) {
            char lowercaseChar = std::tolower(s[i]); // ���ַ�ת��ΪСд
            counts[lowercaseChar - 'a']++;
        }
    }
}

int main() {
    const int alphabetSize = 26;
    int counts[alphabetSize] = { 0 }; // ��ʼ�����飬����Ԫ����Ϊ0

    char inputString[100]; // �����ַ�����С������100

    // �����ַ���
    std::cout << "�����ַ���: ";
    std::cin.getline(inputString, sizeof(inputString));

    // ����count����
    count(inputString, counts);

    // ��ʾ�������
    for (int i = 0; i < alphabetSize; ++i) {
        if (counts[i] != 0) {
            char letter = 'a' + i; // ������ת��Ϊ��ĸ
            std::cout << letter << ": " << counts[i] << "��" << std::endl;
        }
    }

    return 0;
}
