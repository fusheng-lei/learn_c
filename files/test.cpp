// // 答题
// #include <iostream> 
// // #include <stdio.h> 
// using namespace std; 
// void staticLocalVar() 
// {
//     static int a=3;
//     // printf("a=%d\n",a);
//     cout<<"a="<<a<<endl; 
//     ++a;

// }

// int main() 
// {
//     staticLocalVar(); 
//     staticLocalVar(); 
//     return 0;
// }


#include <iostream>
#include <string>
#include <vector>
using namespace std;

// 将版本号按'.'分割成修订号的数组
vector<int> split(string version) {
    vector<int> res;
    int start = 0;
    for (int i = 0; i < version.size(); i++) {
        if (version[i] == '.') {
            // 将修订号转换为整数，忽略前导零
            res.push_back(stoi(version.substr(start, i - start)));
            start = i + 1;
        }
    }
    // 处理最后一个修订号
    res.push_back(stoi(version.substr(start)));
    return res;
}

// 比较两个版本号
int compareVersion(string version1, string version2) {
    // 分割版本号
    vector<int> v1 = split(version1);
    vector<int> v2 = split(version2);
    // 获取最大的修订号个数
    int n = max(v1.size(), v2.size());
    // 从左到右依次比较修订号
    for (int i = 0; i < n; i++) {
        // 如果某个版本号缺少修订号，认为等于0
        int r1 = i < v1.size() ? v1[i] : 0;
        int r2 = i < v2.size() ? v2[i] : 0;
        // 如果修订号不相等，返回比较结果
        if (r1 != r2) {
            return r1 > r2 ? 1 : -1;
        }
    }
    // 如果所有修订号都相等，返回0
    return 0;
}

int main() {
    // 测试用例
    cout << compareVersion("1.01", "1.001") << endl; // 输出0
    cout << compareVersion("1.0", "1.0.0") << endl; // 输出0
    cout << compareVersion("0.1", "1.1") << endl; // 输出-1
    cout << compareVersion("1.0.1", "1") << endl; // 输出1
    cout << compareVersion("7.5.2.4", "7.5.3") << endl; // 输出-1
}
