//
// Created by chugang on 2020/9/25.
//

#include "Solution.h"
#include <iostream>

void printSequence(vector<vector<int>> sequence);

int main() {
    int target1 = 9;
    Solution solution;
    vector<vector<int>> sequence1 = solution.findContinuousSequence(target1);
    printSequence(sequence1);
    cout << "====================" << endl;
    int target2 = 15;
    vector<vector<int>> sequence2 = solution.findContinuousSequence(target2);
    printSequence(sequence2);

//    Line 11: Char 52: runtime error: signed integer overflow: 50253 * 50252 cannot be represented in type 'int' (solution.cpp)
//    SUMMARY: UndefinedBehaviorSanitizer: undefined-behavior prog_joined.cpp:21:52
    int target3 = 50252;
    vector<vector<int>> sequence3 = solution.findContinuousSequence(target3);
    printSequence(sequence3);

}

void printSequence(vector<vector<int>> sequence) {
    int size1 = sequence.size();
    for (int i = 0; i < size1; i++) {
        cout << '[';
        int size2 = sequence[i].size();
        for (int j = 0; j < size2; j++) {
            cout << sequence[i][j];
            if (j != size2 - 1) {
                cout << ',';
            }
        }
        cout << ']' << endl;
    }
}
