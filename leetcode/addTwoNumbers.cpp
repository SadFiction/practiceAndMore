#include <vector>
#include <iostream>
#include <string>

using namespace std;




struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution{

    public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
        
        if (l1 || l2){
            
            if (l1->next !=nullptr || l2->next != nullptr){
                return new ListNode(val, addTwoNumbers(l1, l2));
            }
            else(l1->next == nullptr || l2){
                
            }

            
        }
        return
    }

}



//<=============IT DONT RUN GOOD====================>
/* class Solution {
    private:
        string getInteger(ListNode* l1){
            ListNode *next;
            if(l1->next == nullptr){
                return l1->val == 0 ? "" : to_string(l1->val);
            }
            return ( getInteger(l1->next) + to_string((l1->val)));
        }

        ListNode* toListNode(string f){
            if (f.size() > 1){
                int c = stoi(string("")+f.back());
                f.pop_back();
                return new ListNode(c, toListNode(f));
            }
            else{
                cout << f;
                return f.size() == 1 ? new ListNode(stoi(string("")+f.back())) : new ListNode();
            }
        }


    public:
        ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
            int num1 = getInteger(l1) == "" ? 0 : stoi(getInteger(l1));
            int num2 = getInteger(l2) == "" ? 0 : stoi(getInteger(l2));
            int sum = num1+num2;

            cout << sum;

            return toListNode(to_string(sum));
        }
};
 */