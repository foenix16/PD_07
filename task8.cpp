#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    int cargoCount;
    cout << "Enter the number of cargo transports: ";
    cin >> cargoCount;

    double minibusCargo = 0, truckCargo = 0, trainCargo = 0;
    double totalTons = 0, totalCost = 0;

    for (int i = 0; i < cargoCount; i++) 
    {
        int tonnage;
        cout << "Enter the tonnage of cargo " << (i + 1) << ": ";
        cin >> tonnage;

        totalTons += tonnage;

        if (tonnage <= 3) 
        {
            minibusCargo += tonnage;
            totalCost += tonnage * 200;
        } 
	else if (tonnage <= 11) 
        {
            truckCargo += tonnage;
            totalCost += tonnage * 175;
        } 
	else 
	{
            trainCargo += tonnage;
            totalCost += tonnage * 120;
        }
    }

    double avgPricePerTon = totalCost/totalTons;
    double minibusPercent = (minibusCargo/totalTons) * 100;
    double truckPercent = (truckCargo/totalTons) * 100;
    double trainPercent = (trainCargo/totalTons) * 100;

    cout << fixed << setprecision(2);
    cout << "Average price per ton: $" << avgPricePerTon << endl;
    cout << "Minibus cargo percentage: " << minibusPercent << "%" << endl;
    cout << "Truck cargo percentage: " << truckPercent << "%" << endl;
    cout << "Train cargo percentage: " << trainPercent << "%" << endl;

    return 0;
}
