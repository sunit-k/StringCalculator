#include<bits/stdc++.h>
using namespace std;

class StrCalculator{
    public :
    int plus(string nums){
        int n = nums.size();
        if(n == 0) return 0;
        int sum =0;
        vector<string> vect;

        int i=0;
        while(i<n){
            string unk = "";
            while(i<n && nums[i] != ','){
                unk += nums[i];
                i++;
            }


            try {
                if (unk[0] == '-')
                {
                    throw unk;
                }
                if(isalpha(unk[0])){
                    char c = unk[0];
                    sum += c-'a'+1;
                }
                else{
                    int c = stoi(unk);
                    if(c>1000) sum+= 0;
                    else sum += c;
                }
            }
            catch (string ss) {
                vect.push_back(ss);
            }
            i++;
        }
        if(vect.size() == 0) return sum;

        cout<<"Negatives not Allowed : ";
        for(auto sc: vect){
            cout<<sc<<" ";
        }
        cout<<endl;

        return -1;
    }
};

int main(){
    while(1){
        string inpt;
        cout<<"Enter string which you want to calculate : ";
        cin>>inpt;

        StrCalculator ssk;
        int answer = ssk.plus(inpt);

        if(answer >= 0) cout<<"Answer : "<<answer<<endl;
    }
    return 0;
}