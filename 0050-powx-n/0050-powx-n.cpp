class Solution {
public:
    double myPow(double x, int n) {
        long long binaryform = n;//start binary form with n 
        double ans = 1; //ans with 1
        if(binaryform < 0) { //check is binary form less than 0 basically is power less than 0
            x = 1 / x; //if yes than convert x to 1/x 
            binaryform = -binaryform;//make binar to -binary so it convert into positive
        }
        while(binaryform > 0) {//if binary form greater than 0 i.e power 
            if(binaryform % 2 == 1) {//than check divisble by 2 
                ans *= x;//yes than ans=ans*x
            }
            x *= x;//update the x value 
            binaryform /= 2;//remove the last digit
        }
        return ans;//return ans
    }
};