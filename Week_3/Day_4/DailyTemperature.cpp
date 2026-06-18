class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector <int>  ans ( temperatures.size() ,0 );
        stack <int> indices ;
        for ( int i =0 ; i<temperatures.size() ; i ++ ) {
            while ( !indices.empty() && temperatures[i] > temperatures[indices.top()]){
                ans[indices.top()] = i - indices.top() ;
                indices.pop() ;
            }
            indices.push( i ) ;
        }
        return ans ;
    }
};
//LC 739