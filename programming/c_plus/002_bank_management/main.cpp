/**********************************************************************
Bài Toán: Quản Lý Tài Khoản Ngân Hàng
Bạn cần xây dựng một hệ thống quản lý tài khoản ngân hàng. 
Mỗi tài khoản ngân hàng đều có các tính năng cơ bản như kiểm tra số dư, gửi tiền, và rút tiền. 
Tuy nhiên, có nhiều loại tài khoản ngân hàng khác nhau như tài khoản tiết kiệm (Savings Account) và tài khoản vãng lai (Checking Account). 
Mỗi loại tài khoản có cách tính lãi suất khác nhau và quy tắc rút tiền khác nhau.
********************************************************************** */
#include <iostream>
#include <string>

// Lớp trừu tượng BankAccount
class BankAccount {
protected:
    std::string accountNumber;
    double balance;

public:
    BankAccount(const std::string& accountNumber, double balance) : accountNumber(accountNumber), balance(balance) {}

    // Phương thức ảo thuần túy để tính lãi suất
    virtual void calculateInterest() = 0;

    // Phương thức tính số dư (áp dụng cho mọi loại tài khoản & ngân hàng)
    void deposit(double amount) {
        balance += amount;
    }

    // Phương thức rút tiền (áp dụng cho mọi loại tài khoản & ngân hàng)
    virtual void withdraw(double amount) {
        if (amount <= balance)
        {
            balance -= amount;
        } else {
            std::cout << "Insufficient balance!" << std::endl;
        }
    }

    // Phương thức kiểm tra số dư
    double getBalance() const {
        return balance;
    }

    // Phương thức ảo thuần túy để hiển thị thông tin tài khoản
    virtual void displayAccountInfo() const = 0;

    virtual ~BankAccount() = default;
};

// Lớp dẫn xuất SavingsAccount
class SavingsAccount : public BankAccount {
private:
    double interestRate; // Lãi suất

public:
    SavingsAccount(const std::string& accountNumber, double balance, double interestRate)
        : BankAccount(accountNumber, balance), interestRate(interestRate) {}

    // Triển khai phương thức tính lãi suất
    void calculateInterest() override {
        balance += balance * interestRate;
    }

    // Hiển thị thông tin tài khoản
    void displayAccountInfo() const override {
        std::cout << "Savings Account Number: " << accountNumber << "\nBalance: " << balance << std::endl;
    }
};

// Lớp dẫn xuất CheckingAccount
class CheckingAccount : public BankAccount {
private:
    double overdraftLimit;  // Hạn mức thấu chi

public:
    CheckingAccount(const std::string& accNumber, double initialBalance, double overdraft)
        : BankAccount(accNumber, initialBalance), overdraftLimit(overdraft) {}

    // Không cần tính lãi suất cho tài khoản vãng lai
    void calculateInterest() override {
        // Tài khoản vãng lai thường không có lãi suất
    }

    // Override phương thức rút tiền để hỗ trợ thấu chi
    void withdraw(double amount) override {
        if (amount <= balance + overdraftLimit) {
            balance -= amount;
        } else {
            std::cout << "Exceeded overdraft limit!" << std::endl;
        }
    }

    // Hiển thị thông tin tài khoản
    void displayAccountInfo() const override {
        std::cout << "Checking Account Number: " << accountNumber << "\nBalance: " << balance << std::endl;
    }
};

int main() {
    SavingsAccount savings("SA12345", 1000.0, 0.05);  // Tạo tài khoản tiết kiệm
    CheckingAccount checking("CA67890", 500.0, 200.0);  // Tạo tài khoản vãng lai

    savings.deposit(200);
    savings.calculateInterest();
    savings.displayAccountInfo();

    checking.withdraw(600);
    checking.displayAccountInfo();

    return 0;
}