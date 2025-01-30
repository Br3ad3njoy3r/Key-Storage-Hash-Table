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

class jump_off_bridge
{
    public:
        jump_off_bridge();
    private:
        string key;
        float x;
        float y;
        string color;
        int val1;
        float val2;
};

class key_table
{
    public:
        key_table();
    private:
        int key_count;
        vector<jump_off_bridge> key_list;
};