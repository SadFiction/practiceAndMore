#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main() {

    //input parameters 
    vector<int> param;


    //Position of favourite team 
    int favPos;


    //Process parameters 
    string input;
    getline(cin, input);
    istringstream iss(input);
    string word;
    while (iss >> word){
        param.push_back(stoi(word));
    }

    //Assign position 
    favPos = param[2];

    //Teams position and pending chronology 
    typedef  vector<vector<bool>> bool2D;
    bool2D teams(param[0], vector<bool>(param[1], false));

    //Numbers of Pending Algos
    int nrPs = 0;

    for (int i= 0; i < param[0]; i++){
        string tempFreezeScore;

        string text;
        cin >> text;

        for (int j = 0; j < param[1]; j ++){
            if (text[j] == 'P'){

                
                teams[i][j] = true;
                nrPs ++;
            }
        }

    }

    cin.ignore();

    for (int j = 0; j < param[1]; j++){
        for (int i= 0; i < teams.size(); i++){
        
            if(teams[i][j]){
                string temp;
                
                getline(cin, temp);
                cout << temp << endl;
                temp.erase(0, 16);
                cout << temp << endl; 
                temp.erase(temp.size() - 3);
                cout << temp << endl;
                if (temp.size() > 0){
                    int posTranslate = temp.size();
                    
                    if (posTranslate > 0){

                        //three slices at least to insert 
                        // slice from  [0...i-tempTranslate-1]+{[i]}+[i-tempTranslate+1..]+[..i-1]+[i+1...]
                        cout << "hello this is a test" << endl;
                        auto begin = teams.begin();
                        cout << "you fail here?" << endl;
                        teams.erase(begin+i);
                        cout << "fail fail hjere?" << endl;
                        
                        begin = teams.begin();
                        teams.insert(begin+i-posTranslate, teams[i]);
                        cout << "Or fail here?" << endl;

                        if (i == favPos){
                            cout << "pos changed" << endl;
                            favPos = i - posTranslate;
                        }
                    }
                }
                else{
                    teams[i][j] = false;
                }
            }
        }
    }
    





    cout << favPos;


    return 1;
}