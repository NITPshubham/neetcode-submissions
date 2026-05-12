class LinkedList {
public:
    int idx = 0;
    int size = 0;
    vector<int>arr;
    LinkedList() {

    }

    int get(int index) {
        size = arr.size();
        if(size-1 < index)
            return -1;
        return arr[index];
    }

    void insertHead(int val) {
        size += 1;
        queue<int>q;
        q.push(val);
        for(auto it : arr){
            q.push(it);
        }
        arr.clear();

        while(!q.empty()){
            arr.push_back(q.front());
            q.pop();
        }
    }
    
    void insertTail(int val) {
        arr.push_back(val);
    }

    bool remove(int index) {
        if(size-1 < index)
            return false;
        int j = 0;
        for(int i=0; i<size; i++, j++){
            if(i == index)
                j = i+1;
            arr[i] = arr[j];
        }
        arr.pop_back();
        return true;
    }

    vector<int> getValues() {
        vector<int>ans;
        for(auto it : arr){
            ans.push_back(it);
        }
        return ans;
    }
};
