# include <iostream>

class BankAccount{
    public:
        void withdrawMoney(double money){
            if (balance > money){
                balance = balance - money;
                std::cout << "Su saldo ahora es: " << balance << std::endl;
            }else{
                std::cout << "No tienes fondos suficientes \n";
            }
        }
        void depositMoney(double money){
            balance = balance + money;
            std::cout << "Su saldo ahora es: " << balance << std::endl;
        }
        void showBalance(){
            std::cout << "El saldo es: " << balance << std::endl;
        }
    private:
        double balance = 0.0;
};

int main(){
    BankAccount account1;
    account1.showBalance();
    account1.depositMoney(100);
    account1.withdrawMoney(50);
}