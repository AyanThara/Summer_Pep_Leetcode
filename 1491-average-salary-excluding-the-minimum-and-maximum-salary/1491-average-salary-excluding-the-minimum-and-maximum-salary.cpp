class Solution {
public:
    double average(vector<int>& salary) {
        int mn=*min_element(salary.begin(),salary.end());
        int mx=*max_element(salary.begin(),salary.end());
        int sum=0;
        int count=0;
        for(int i=0;i<salary.size();i++){
            if(salary[i]!=mn &&salary[i]!=mx){
                sum+=salary[i];
                count++;
            }
        }
    return (double)sum/count;
    }
};