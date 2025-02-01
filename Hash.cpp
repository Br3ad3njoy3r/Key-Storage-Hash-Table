#include "Hash.h"

int main()
{
    vector<key_list> list; //sequential list
    string line, data; // line = full line of each bit of data (key,x,y,color,val1,val2)
    int cc=0, lc=0; //comma counter & line counter

    ifstream file("example.txt"); // Open file for reading
    if (!file) { //making sure file is opened correct
        cout << "Error opening file!" << endl;
        return 1;
    }
    while (getline(file, line)){ // read the full line
        cout << line << endl;
        for (char ch : line){   //read each character
            if (ch == ','){
                //list[0].add(data, cc);
                cc++;
                cout << cc << " " << data << endl;
                data = "";
            } else {
                data.push_back(ch);
            }
        }
        //list[lc].add(data,cc);
        cc++;
        cout << cc << " " << data << endl;
        data = "";
        cc=0;
        lc++;
    }
}