/****************************************************************************
 * 
 * Copyright (C) 2016 @com, Inc. All rights reserved.
 * 
 ****************************************************************************/



/** 
 * @file solve.cc
 * @author yinchunxiang(@com)
 * @date 2016/06/05 23:41:18
 * @brief 
 * 
 **/ 
 
#include <iostream>
#include <string>

#include <vector>

using namespace std;

char solve(const std::string& str, int k) {
    if (str.empty()) {
        return ' ';
    }
    int n = str.size();
    std::vector<int> count(256);
    std::vector<int> index(256, n);
    for (int i = 0; i < n; ++i) {
        int c = str[i] - '0';
        count[c] += 1;
        index[c] = (1 == count[c]) ? i : n;
    }
    std::sort(index.begin(), index.end());
    return (index[k - 1] == n ) ? ' ' : str[index[k - 1]];
}

template<typename T>
void println(const T& t) {
    std::cout << "{" << std::to_string(t) << "}" << std::endl;
}

void p(const char& c) {
    std::cout << "{" << c << "}" << std::endl;
}

int main(int argc, const char *argv[])
{
    {
        string str = "geeksforgeeks";
        int k = 3;
        p(solve(str, k));
    }

    return 0;
}














/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
