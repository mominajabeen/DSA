class Bank {
public:
    unordered_map<int, long long> accounts;
    Bank(vector<long long>& balance) {
        for(int i = 0; i < balance.size(); i++){
            accounts[i] = balance[i];
        }
    }
    
    bool transfer(int account1, int account2, long long money) {
        int acc1 = account1 - 1;
        int acc2 = account2 - 1;
        if(accounts.find(acc1) != accounts.end() && accounts.find(acc2) != accounts.end()){
            if(accounts[acc1] >= money){
                accounts[acc1] -= money;
                accounts[acc2] += money;
                return true;
            }
        }
     return false;
    }
    
    bool deposit(int account, long long money) {
        if(accounts.find(account - 1) != accounts.end()){
            accounts[account - 1] += money;
            return true;
        }
        else return false;
    }
    
    bool withdraw(int account, long long money) {
        if(accounts.find(account - 1) != accounts.end() && accounts[account - 1] >= money){
            accounts[account - 1] -= money;
            return true;
        }
        else return false;
    }
};

/**
 * Your Bank object will be instantiated and called as such:
 * Bank* obj = new Bank(balance);
 * bool param_1 = obj->transfer(account1,account2,money);
 * bool param_2 = obj->deposit(account,money);
 * bool param_3 = obj->withdraw(account,money);
 */