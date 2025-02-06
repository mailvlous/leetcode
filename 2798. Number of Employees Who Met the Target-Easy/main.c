int numberOfEmployeesWhoMetTarget(int* hours, int hoursSize, int target) {
    int i;
    int count = 0;
    int n;
    
    for(i = 0; i < hoursSize; i++) {
        if (hours[i] >= target) {
            count++;
        } 
    }
    // n = hoursSize - count;
    return count;
}