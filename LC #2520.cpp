// LeetCode Solution Set 
// Mohammad Amaan Sharif
// <a href='leetcode.com/amaan_272/'> amaan_272 </a>

// Problem: <a href='https://leetcode.com/contest/weekly-contest-326/problems/count-the-digits-that-divide-a-number/'> #2520: Count the digits that divide a number. </a>
// Category: Easy
// <a href='https://leetcode.com/contest/weekly-contest-326/'> LeetCode Weekly Contest 326 </a>

// Problem Statement: Given an integer num, return the number of digits in num that divide num. An integer val divides nums if nums % val == 0.
// Constraints: 
// 1 <= num <= 109
// num does not contain 0 as one of its digits.

#include <bits/stdc++.h>
using namespace std;

int countDigits(int num) {
    vector<int> store;
    int n = num;
    while(n > 0) {
        store.emplace_back(n%10);
        n /= 10;
    }
    int ans = 0;
    for(int i:store) if(num%i == 0) ans++;
    return ans;
}