#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int balance, N;
    cin >> balance >> N;
    vector<int> transactions;
    vector<int> commits;
    commits.push_back(balance);
    string op;
    for (int i = 0; i < N; i++) {
        cin >> op;
        if (op == "read") {
            cout << balance << endl;
        } else if (op == "credit") {
            int x; cin >> x;
            balance += x;
            transactions.push_back(x);
        } else if (op == "debit") {
            int x; cin >> x;
            balance -= x;
            transactions.push_back(-x);
        } else if (op == "abort") {
            int x; cin >> x;
            // Only abort uncommitted transactions
            if (!transactions.empty() && x >= 1 && x <= transactions.size()) {
                balance -= transactions[x-1];
                transactions.erase(transactions.begin() + (x-1));
            }
        } else if (op == "commit") {
            commits.push_back(balance);
            transactions.clear();
        } else if (op == "rollback") {
            int x; cin >> x;
            if (x >= 1 && x < commits.size()) {
                balance = commits[x];
                transactions.clear();
                // Remove all commits after rollback point
                commits.resize(x+1);
            }
        }
    }
    return 0;
}