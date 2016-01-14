	Difference(vector<int> a){
        elements=a;
    }
    void computeDifference(){
        sort(elements.begin(),elements.end());
        std::vector<int>::iterator it = elements.begin();
        int x=*it;
        while(it!=elements.end()){
            it++;
        }
        it--;
        maximumDifference= *it-x;
    }
