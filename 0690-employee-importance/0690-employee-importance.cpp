/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/



class Solution {
public:
    unordered_map<int, Employee*> id_to_emp;
    int getImportance(vector<Employee*> employees, int id) {
        for(auto &emp : employees){
            id_to_emp[emp->id] = emp;
        }
        return dfs(id);
    }
    
    int dfs(int id){
        Employee *emp = id_to_emp[id];
        int result = emp->importance;
        for(int i : emp->subordinates){
            result += dfs(i);
        }
        return result;
    }
    
};