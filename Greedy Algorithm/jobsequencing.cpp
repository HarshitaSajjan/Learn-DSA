#include<bits/stdc++.h>
using namespace std;

/*n jobs
every job has a deadline, and associated with this, and u get this profit if jib is completed within the time otherwise no profit, 
every job takes one unit of time, one job at a time, time starts with zero

sort jobs in decreasing order of progit
initialise the result as first job in the sorted list, assign the latest possible slot
do the following for the remaining (n-1) jobs
    if this job can not addedd ignore it
    else add it to the latest possible slot
*/