class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>record;
        for(const string &op:operations){
            if(op=="+"){
                int top=record.back();
                record.pop_back();
                int newtop=top+record.back();
                record.push_back(top);
                record.push_back(newtop);
            }
            else if(op=="D"){
                record.push_back(2*record.back());
            }
            else if(op=="C"){
                record.pop_back();
            }
            else record.push_back(stoi(op));
        }
        return accumulate(record.begin(),record.end(),0);
    }
};