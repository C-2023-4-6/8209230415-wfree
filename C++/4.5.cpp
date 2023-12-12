#include <iostream>

 
int indexOf(const char s1[], const char s2[]) {
    int i = 0, j = 0;

    while (s2[i] != '\0') {
        //���ж��������ж�s2�Ƿ񵽴��������Ϊһ���ַ����������\0������ 
        if (s1[j] == s2[i]) {
            int originalI = i;
            // ���浱ǰλ�ã����ڻ��ݣ���Ϊ��ȷ����λ���ǲ���������Ӵ������
            //������ǵĻ����ʹӱ�λ�õ���һλ��ʼ���м����ж� 
            while (s1[j] != '\0' && s1[j] == s2[i]) {
                j++;
                i++;
            }
            //ѭ�������������ֿ��ܣ�һ����ȷʵ���Ӵ������ǵ���s1��\0�����
            //��һ��Ϊ�����Ӵ� 
            if (s1[j] == '\0') {
                //���ر���������ʼ��λ�ã������Ӵ����ֵ�λ�� 
                return originalI;
            }
            //��ʱ�ǲ��������� 
            j = 0;  // ���û��ƥ�䣬�����
            i = originalI + 1;
        }
        else {
            i++;
        }
    }

    return -1;
}

int main() {
    const int maxSize = 100;  // �����ַ�����С������100
    char s1[maxSize], s2[maxSize];

    // ��������C�ַ���
    std::cout << "�����һ���ַ���: ";
    std::cin.getline(s1, maxSize);

    std::cout << "����ڶ����ַ���: ";
    std::cin.getline(s2, maxSize);

    // ����indexOf��������s1�Ƿ���s2���Ӵ�
    int result = indexOf(s1, s2);

    // ������
    if (result != -1) {
        std::cout << "s1��s2���Ӵ�����ʼλ����: " << result << std::endl;
    }
    else {
        std::cout << "s1����s2���Ӵ�" << std::endl;
    }

    return 0;
}
