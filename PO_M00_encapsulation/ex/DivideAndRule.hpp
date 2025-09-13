#include <iostream>
#include <vector>

struct Account
{
	int _id;
	int _value;

    Account();
	Account(int value, int id);
    // : id(-1), value(0)
    // {
        
    // }

    ~Account(void);

    int	getValue() const;
	void	setValue(int value);
    int	getId() const;
	void	setId(int id);

	friend std::ostream& operator << (std::ostream& p_os, const Account& p_account)
	{
		p_os << "[" << p_account._id << "] - [" << p_account._value << "]";
		return (p_os);
	}
};

struct Bank
{
	private : 
		int _liquidity;
		std::vector<Account *> clientAccounts;
        private:



	public :

        static int	_nbAccounts;
        static int	_totalAmount;
        static int	_totalNbDeposits;
        static int	_totalNbWithdrawals;
		
        Bank();

        Bank(int liquidity);
        // :
		// 	liquidity(0)
		// {

		// }

        ~Bank();

	    int	getLiquidity() const;
	    void	setLiquidity(int liquidity);

        friend std::ostream& operator << (std::ostream& p_os, const Bank& p_bank)
        {
            p_os << "Bank informations : " << std::endl;
            p_os << "Liquidity : " << p_bank._liquidity << std::endl;
            for (auto &clientAccount : p_bank.clientAccounts)
            p_os << *clientAccount << std::endl;
            return (p_os);
        }
    
};