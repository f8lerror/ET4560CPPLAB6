#include <iostream>

using namespace std;

struct MonthlyBudget
{

    double housing;
    double utilities;
    double householdExpenses;
    double transportation;
    double food;
    double medical;
    double insurance;
    double entertainment;
    double clothing;
    double misc;
    double total;
};

struct BudgetSpent
{
    double house;
    double utility;
    double expenses;
    double transpo;
    double food;
    double med;
    double ins;
    double ent;
    double cloth;
    double misc;
};

void insertData(MonthlyBudget *object, double housing, double utilities, double householdExpenses, double transportation, double food, double medical, double insurance, double entertainment, double clothing, double misc, double total);
void printData(MonthlyBudget *object);
void spent(BudgetSpent *object);
void calculations(MonthlyBudget *budget, BudgetSpent *mySpent);

int main()
{
    MonthlyBudget allowed;
    BudgetSpent charged;

    insertData(&allowed, 500.00, 150.00, 65.00, 50.00, 250.00, 30.00, 100.00, 150.00, 75.00, 50.00, 1420.00);

    cout << "\nThis is your allowed budget: \n";
    printData(&allowed);

    cout << endl << endl;

    spent(&charged);

    calculations(&allowed, &charged);

    return 0;
}
void insertData(MonthlyBudget *object, double house, double utility, double expense, double transpo, double food, double med, double ins, double ent, double cloth, double misc, double total)
{
    object->housing=house;
    object->utilities=utility;
    object->householdExpenses=expense;
    object->transportation=transpo;
    object->food=food;
    object->medical=med;
    object->insurance=ins;
    object->entertainment=ent;
    object->clothing=cloth;
    object->misc=misc;
    ((*object).total)=total;

}

void printData(MonthlyBudget *object)
{
    cout << "Housing: " << object->housing << endl;
    cout << "Utilities: " << object->utilities << endl;
    cout << "Household Expenses " << object->householdExpenses <<endl;
    cout << "Transportation: " << object->transportation << endl;
    cout << "Food: " << object->food << endl;
    cout << "Medical: " << object->medical << endl;
    cout << "Insurance: " << object->insurance << endl;
    cout << "Entertainment: " << object->entertainment << endl;
    cout << "Clothing: " << object->clothing << endl;
    cout << "Miscellaneous: " << object->misc << endl;
    cout << "Total Monthly Budget Allowed: " << object->total << endl;

}

void spent(BudgetSpent *object)
{
    cout << "How much did you spend on housing: " << endl;
    cin >> object->house;
    cout << "How much did you spend on Utilities: " << endl;
    cin >> object->utility;
    cout << "How much did you spend on Household Expenses: " << endl;
    cin >> object->expenses;
    cout << "How much did you spend on Transportation: " << endl;
    cin >> object->transpo;
    cout << "How much did you spend on Food: " << endl;
    cin >> object->food;
    cout << "How much did you spend on Medical: " << endl;
    cin >> object->med;
    cout << "How much did you spend on Insurance: " << endl;
    cin >> object->ins;
    cout << "How much did you spend on Entertainment: " << endl;
    cin >> object->ent;
    cout << "How much did you spend on Clothing: " << endl;
    cin >> object->cloth;
    cout << "How much did you spend on MISC expenses: " << endl;
    cin >> object->misc;
    cin.get();
}

void calculations(MonthlyBudget *budget, BudgetSpent *mySpent)
{
    double hdiff;
    double hdiff2;
    double udiff;
    double udiff2;
    double ediff;
    double ediff2;
    double tdiff;
    double tdiff2;
    double fdiff;
    double fdiff2;
    double mdiff;
    double mdiff2;
    double idiff;
    double idiff2;
    double endiff;
    double endiff2;
    double cdiff;
    double cdiff2;
    double midiff;
    double midiff2;

    if ( mySpent->house <= budget->housing)
    {
        hdiff = budget->housing - mySpent->house;
        cout << "You spent: $" << hdiff << " of your allowed housing budget." << endl;
    }
    else if (mySpent->house > budget->housing)
    {
        hdiff2 = mySpent->house - budget->housing;
        cout << "You spent: $" << hdiff2 << " more than your allowed budget for housing" << endl;
    }
    if (mySpent->utility <= budget->utilities)
    {
        udiff = budget->utilities - mySpent->utility;
        cout << "You spend: $" << udiff << " of your allowed utility budget." << endl;
    }
    else if (mySpent->utility > budget->utilities)
    {
        udiff2 = mySpent->utility - budget->utilities;
        cout << "You spent: $" << udiff2 << " more than your allowed budget for housing" << endl;
    }
    if (mySpent->expenses <= budget->householdExpenses)
    {
        ediff = budget->householdExpenses - mySpent->expenses;
        cout << "You spent: $" << ediff << " of your allowed Household Expenses budget." << endl;
    }
    else if (mySpent->expenses > budget->householdExpenses)
    {
        ediff2 = mySpent->expenses - budget->householdExpenses;
        cout << "You spent: $" << ediff2 << " more than your allowed budget for Household Expenses." << endl;
    }
    if (mySpent->transpo <= budget->transportation)
    {
        tdiff = budget->transportation - mySpent->transpo;
        cout << "You spent: $" << tdiff << " of your allowed Transportation budget." << endl;
    }
    else if (mySpent->transpo > budget->transportation)
    {
        tdiff2 = mySpent->transpo - budget->transportation;
        cout << "You spent: $" << tdiff2 << " more than your allowed budget for Transportation Budget." << endl;
    }
    if (mySpent->food <= budget->food)
    {
        fdiff = budget->food - mySpent->food;
        cout << "You spent: $" << fdiff << " of your allowed Food budget." << endl;
    }
    else if (mySpent->food > budget->food)
    {
        fdiff2 = mySpent->food - budget->food;
        cout << "You spent: $" << fdiff2 << " more than your allowed budget for Food Budget." << endl;
    }
    if (mySpent->med <= budget->medical)
    {
        mdiff = budget->medical - mySpent->med;
        cout << "You spent: $" << mdiff << " of your allowed Medical budget." << endl;
    }
    else if (mySpent->med > budget->medical)
    {
        mdiff2 = mySpent->med - budget->medical;
        cout << "You spent: $" << mdiff2 << " more than your allowed budget for Medical Budget." << endl;
    }
    if (mySpent->ins <= budget->insurance)
    {
        idiff = budget->insurance - mySpent->ins;
        cout << "You spent: $" << idiff << " of your allowed Insurance budget." << endl;
    }
    else if (mySpent->ins > budget->insurance)
    {
        idiff2 = mySpent->ins - budget->insurance;
        cout << "You spent: $" << idiff2 << " more than your allowed budget for Insurance Budget." << endl;
    }
    if (mySpent->ent <= budget->entertainment)
    {
        endiff = budget->entertainment - mySpent->ent;
        cout << "You spent: $" << endiff << " of your allowed Entertainment budget." << endl;
    }
    else if (mySpent->ent > budget->entertainment)
    {
        endiff2 = mySpent->ent - budget->entertainment;
        cout << "You spent: $" << endiff2 << " more than your allowed budget for Entertainment Budget." << endl;
    }
    if (mySpent->cloth <= budget->clothing)
    {
        cdiff = budget->clothing - mySpent->cloth;
        cout << "You spent: $" << cdiff << " of your allowed Clothing budget." << endl;
    }
    else if (mySpent->cloth > budget->clothing)
    {
        cdiff2 = mySpent->cloth - budget->clothing;
        cout << "You spent: $" << cdiff2 << " more than your allowed budget for Clothing Budget." << endl;
    }
    if (mySpent->misc <= budget->misc)
    {
        midiff = budget->misc - mySpent->misc;
        cout << "You spent: $" << midiff << " of your allowed Misc. budget." << endl;
    }
    else if (mySpent->misc > budget->misc)
    {
        midiff2 = mySpent->misc - budget->misc;
        cout << "You spent: $" << midiff2 << " more than your allowed budget for Misc. Budget." << endl;
    }


}