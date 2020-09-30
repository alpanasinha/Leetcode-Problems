/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
    	ListNode* temp = head;
    	vector<int> v;
    	while(temp!=NULL)
    	{
    		v.push_back(temp->val);
            temp=temp->next;
    	}
    	reverse(v.begin(), v.end());
    	int sum = 0;
    	for(int i=0; i<v.size(); i++)
    	{
    		sum += v[i]*pow(2,i);
    	}
        return sum;
    }
};