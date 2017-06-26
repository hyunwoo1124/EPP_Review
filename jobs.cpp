/*
  jobs.cpp
  June 25, 2017
  bernblend
*/
#include <iostream>
#include <iomanip>
#include "Job.h"
#include "Job.cpp"
#include <string>
using namespace std;
void totalPay(Job);
int main(int argc, char const *argv[]) {
  double horp, r;
  double allpays=0;//Make a double variable with value 0 and increment it with pays of all jobs
  Job jobs[100];//Create an array of objects of Jobs class to keep track of all jobs
  int i=0;
  char answer = 'y';
  do {
    cout << "\nHow many hours or patients completed?" << endl;
    cin >> horp;
    cout << "What is the rate (per hour/per patient)?" << endl;
    cin >> r;
    jobs[i].setHoursOrPatients(horp);
    jobs[i].setRate(r);
    jobs[i].setPay(horp, r);
    totalPay(jobs[i]);
    allpays = allpays + jobs[i].getPay(); //Increment the value of all pays
    i++;
    cout << "\n\nDo you have another transaction?";
    cin >> answer;
  } while(answer == 'y');
  cout << "\n\nThe total pay of ALL JOBS is: $" << fixed << setprecision(2) << allpays << "\n\nHave a FANTASTIC day!\n\n\n" << setw(20)  << right << "-bern\n" << "\n";//Print the value of allpays
  return 0;
}
void totalPay(Job job)
{
cout << "\n\nThe total pay for this job is: $" << fixed << setprecision(2) << job.getPay() << "\n" << endl;
}