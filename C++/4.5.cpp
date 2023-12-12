#include <iostream>

 
int indexOf(const char s1[], const char s2[]) {
    int i = 0, j = 0;

    while (s2[i] != '\0') {
        //此判断条件是判断s2是否到达了最后，因为一个字符串最后都是以\0结束的 
        if (s1[j] == s2[i]) {
            int originalI = i;
            // 保存当前位置，用于回溯，因为不确定本位置是不是真的是子串的起点
            //如果不是的话，就从本位置的下一位开始进行继续判断 
            while (s1[j] != '\0' && s1[j] == s2[i]) {
                j++;
                i++;
            }
            //循环结束，有两种可能，一种是确实是子串，就是到了s1是\0的情况
            //另一种为不是子串 
            if (s1[j] == '\0') {
                //返回本次搜索开始的位置，即本子串出现的位置 
                return originalI;
            }
            //此时是不满足的情况 
            j = 0;  // 如果没有匹配，则回溯
            i = originalI + 1;
        }
        else {
            i++;
        }
    }

    return -1;
}

int main() {
    const int maxSize = 100;  // 假设字符串大小不超过100
    char s1[maxSize], s2[maxSize];

    // 输入两个C字符串
    std::cout << "输入第一个字符串: ";
    std::cin.getline(s1, maxSize);

    std::cout << "输入第二个字符串: ";
    std::cin.getline(s2, maxSize);

    // 调用indexOf函数检验s1是否是s2的子串
    int result = indexOf(s1, s2);

    // 输出结果
    if (result != -1) {
        std::cout << "s1是s2的子串，起始位置是: " << result << std::endl;
    }
    else {
        std::cout << "s1不是s2的子串" << std::endl;
    }

    return 0;
}
