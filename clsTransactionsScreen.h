#pragma once

class clsTransactionsScreen : clsScreen
{
private:

    enum enTransactionsMainMenueOptions {eShowClientlist = 1 , eDeposit = 2 , eWithDraw = 3 , eTotalBalance = 4};

    static short _ReadTransactionsMainMenueOption()
    {
        cout << setw(37) << left << "" << "Choose what do you want to do? [1 to 5]? ";
        short Choice = clsInputValidate::ReadShortNumberBetween(1, 8, "Enter Number between 1 to 5? ");
        return Choice;
    }

    static void _PerfromMainMenueOption(enTransactionsMainMenueOptions Choice)
    {
        switch (Choice)
        {
        case clsTransactionsScreen::eShowClientlist:
            cout << "YO";
            break;
        case clsTransactionsScreen::eDeposit:
            break;
        case clsTransactionsScreen::eWithDraw:
            break;
        case clsTransactionsScreen::eTotalBalance:
            break;
        default:
            break;
        }
    }

public:

	static void ShowTransactionsMainMenue()
	{
        system("cls");
        _DrawScreenHeader("\t\tTransactions Main Screen");

        cout << setw(37) << left << "" << "===========================================\n";
        cout << setw(37) << left << "" << "\t\t\tMain Menue\n";
        cout << setw(37) << left << "" << "===========================================\n";
        cout << setw(37) << left << "" << "\t[1] Show Client List.\n";
        cout << setw(37) << left << "" << "\t[2] Deposit.\n";
        cout << setw(37) << left << "" << "\t[3] WithDraw.\n";
        cout << setw(37) << left << "" << "\t[4] Total Balance.\n";
        cout << setw(37) << left << "" << "\t[5] Main Menue Screen.\n";
        cout << setw(37) << left << "" << "===========================================\n";

        _PerfromMainMenueOption((enTransactionsMainMenueOptions)_ReadTransactionsMainMenueOption());
	}
};

