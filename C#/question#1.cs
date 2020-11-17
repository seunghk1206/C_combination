using System;
public class Solution {
    public string solution(int a, int b) {
        int SumODays, i;
        SumODays = 0;
        int[] dateArr = {31,29,31,30,31,30,31,31,30,31,30,31};
        string[] dayArr = {"FRI, SAT, SUN, MON, TUE, WED, THU"};
        for(i = 0; i < a;i++){
            SumODays += dateArr[i];
        }
        SumODays += b;
        return dayArr[SumODays%7];
    }
}