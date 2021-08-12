#include <iostream>
#include <iomanip>
using namespace std;

// This program demonstrates how to use an array of structures

// Alberto Conde
// November 24, 2020

struct airport
{
    long planes_landed;
    long planes_departed;
    long max_daily;
    long min_daily;
};

long landing_total = 0;
long departing_total = 0;
long most = 0;
long month_max = 0;
long month_min = 0;
long least = 0;
long average_landing = 0;
long average_departing = 0;


int main()
{
    airport planes[12];

    cout << fixed << showpoint << setprecision(2);
    

    for (int count = 0; count < 12; count++)
    {
        cout << "Enter the total number of planes that landed on month " << (count + 1);
        cout << ": ";

        cin >> planes[count].planes_landed;
        cout << endl;

        cout << "Enter the total number of planes that departed on month " << (count + 1);
        cout << ": ";
        
        cin >> planes[count].planes_departed;
        cout << endl;
        
        cout << "Enter the greatest number of planes that landed in a given day on month " << (count + 1);
        cout << ": " << endl;
        
        cin >> planes[count].max_daily;

        cout << "Enter the least number of planes that landed in a given day on month " << (count + 1);
        cout << ": " << endl;
        
        cin >> planes[count].min_daily;

        cout << endl;
        
        landing_total += planes[count].planes_landed;
        
        departing_total += planes[count].planes_departed;
        
        if (planes[count].max_daily > most)
        {
            most = planes[count].max_daily;
            month_max = (count + 1);
        }
        
        if (planes[count].min_daily < least)
        {
            least = planes[count].min_daily;
            month_min = (count + 1);
        }
        
    }
    
    average_landing = landing_total / 12;
    average_departing = departing_total / 12;
    
    cout << "The average monthly number of landing planes is: " << average_landing << endl;
    cout << "The average monthly number of departing planes is: " << average_departing << endl;
    cout << "The total number of landing planes is: " << landing_total << endl;
    cout << "The total number of departing planes is: " << departing_total << endl;
    cout << "The greatest number of planes that landed in a day is: " << most << " in the month " << month_max << endl;
    cout << "The least number of planes that landed in a day is: " << least << " in the month " << month_min << endl;
    
    return 0;
}

