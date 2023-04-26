#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
using namespace std;


int compareString(const string str1, const char* str2){
    int length_str2 = strlen(str2);
  
    for(int i = 0; i < str1.length() && i < length_str2; i++) {
        if(str1[i] != str2[i]) {
            return (str1[i] - str2[i]);
        }
    }
    
    return str1.length() - length_str2;
}

int binarySearchString(vector<char*> &vs, const string &str) {
    int lower = 0;
    int upper = vs.size() - 1; 
   
    while (lower <= upper) {
        int mid = lower + (upper - lower) / 2;
        int result = compareString(str, vs[mid]);
          
        if(result == 0) { 
            return mid;
        } else if(result > 0) {
            lower = mid + 1;
        } else {
            upper = mid - 1;
        }  
    } 
    return -1;
}


#include <vector>

std::vector<char *> vs = {
  "aa",
  "ccc",
  "eeeee",
  "gggggg",
  "zzzz",
};

// Q1
// 完成用 binary serach 搜尋vector vs, 回傳字串str在vs中的位置, 若未發現則回傳 -1
// 不限使用 C或C++的function 
// 但請注意c++ string 與 c char*轉換的消耗, 盡可能以最有效率的方式完成工作, 
int bin_search(const string &str) {

}
as above.
// Q2
// 若要insert "111"到vs內, 應該放在哪最為合適.
看起來是ascending order，放最前面比較適合 
