#include <iostream>
#include <vector> 
#include <algorithm> 

using namespace std;

class Employee {
    public:
        Employee(int id, int salary) : id_(id), salary_(salary) {}
        bool operator <(const Employee &other) const {
            return salary_ < other.salary_;
        }
        int id_;
        int salary_;
};

void printv(vector<Employee>& v){ 
    for (int j = 0; j < v.size(); j++) {
        cout << v[j].id_ << " " << v[j].salary_ ; 
        cout << endl << endl;;
    }
}   


void solve(vector<Employee> &input, int budget_cut, int min_wage) {
    int n = input.size();
    if (n <= 0) return;
    sort(input.begin(), input.end());
    printv(input);
    int avg_cut = budget_cut / n;
    for (int i = 0; i < n; ++i) {
        if (input[i].salary_ - avg_cut < min_wage) {
            input[i].salary_ = min_wage;
            avg_cut = (budget_cut - input[i].salary_ + min_wage) / (n - i - 1);
        }
        else {
            input[i].salary_ -= avg_cut;
        }
    }
    printv(input);
    return;
}


int main(int argc, const char *argv[])
{
    const int N = 5;
    int a[N] = {900, 600, 10000, 400, 551};
    vector<Employee> input;
    for (int i = 0; i < N; ++i) {
        input.push_back(Employee(i, a[i]));
    }
    solve(input, 1000, 350);
    return 0;
}



