class MyHashSet {
public:
    unordered_set<int> v;
    MyHashSet() {
        
    }
    
    void add(int key) {
        v.insert(key);
    }
    
    void remove(int key) {
        if(v.find(key) != v.end()){
            v.erase(key);
        }
    }
    
    bool contains(int key) {
         if(v.find(key) != v.end()){
            return true;
        }
        return false;
    }
};