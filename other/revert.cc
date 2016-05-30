/****************************************************************************
 * 
 * Copyright (C) 2016 @com, Inc. All rights reserved.
 * 
 ****************************************************************************/



/** 
 * @file revert.cc
 * @author yinchunxiang(@com)
 * @date 2016/05/31 01:40:02
 * @brief 
 * 
 **/ 
 
#include <iostream>
#include <string>

using namespace std;

void reverse(string& input) {
    std::reverse(std::begin(input), std::end(input));
    cout << input << endl;
    auto it_begin = input.begin();
    auto it_end = input.begin();
    while (it_begin != input.end()) {
        while (' ' == *it_begin) {
            ++ it_begin ;
        }
        it_end = std::find(it_begin, std::end(input), ' ');
        std::reverse(it_begin, it_end);
        it_begin = it_end;
    }
    return;
}

int main(int argc, const char *argv[])
{
    {
        string input = "hello world";
        reverse(input);
        cout << "{" << input << "}" << endl;
    }    
    {
        string input = "  hello world  ";
        reverse(input);
        cout << "{" << input << "}" << endl;
    }    
    return 0;
}














/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
