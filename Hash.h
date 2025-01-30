#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

/*typedef struct sequential
{
    string key;
    float x;
    float y;
    string color;
    int val1;
    float val2;
};*/

class key_list
{
    public:
        string key;
        key_list();
        void add(string, int); 
    private:
        float x;
        float y;
        string color;
        int val1;
        float val2;
};

key_list::key_list()
{
    //I'm not sure it needs anything in here?
}

//I'm pretty sure this is all redundant
// class key_table 
// {
//     public:
//         key_table();
//         vector<jump_off_bridge> key_list;
//     private:
//         int key_count;
        
// };
// key_table::key_table()
// {
//     key_count=0;
// }