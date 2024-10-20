#include<iostream>
using namespace std;
void Hospital(int period, int patients[])
{
    int doc = 7;
    int treated = 0;
    int untreated = 0;
    for( int day = 1; day <= period ; day++)
     {
       int Patients = patients[day-1];
        if(day % 3 == 0)
        {
          if(untreated > treated)
          {
            doc ++;
          }
        }
     
        if(Patients <= doc)
        {
           treated += Patients;
        }
        else
        {
         treated += doc;
         untreated += (Patients - doc);
        }
      }
      cout << "Treated Patients : " << treated << endl;
      cout << "Untreated Patients : " << untreated << endl;

}    

main()
{
    int period;
    int patients[100];
    cout << "Enter the number of days you visited hospitals : ";
    cin >> period;
    for(int i=1; i<=period; i++)
    {
      cout << "Number of patients who visited hospital on day " << i << ":" ;
      cin >> patients[i-1];
    }
    
    Hospital(period,patients);
}