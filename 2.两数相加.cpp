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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dumnode=new ListNode(0);           //哑节点，简化最后的返回处理
        ListNode  *x=l1,*y=l2,*head=dumnode;
        int carry=0;     //进位
        while(x!=NULL||y!=NULL)
        {
        	int xa= x==NULL?0:x->val;       //注意判断x，y为null时情况
        	int ya= y==NULL?0:y->val;
        	int a=xa+ya+carry;
        	int thisbit=a%10;
          carry=a/10;
          ListNode* thisnode=new ListNode(thisbit);
          head->next=thisnode;
          head=head->next;
          x= x==NULL?x:x->next;
          y= y==NULL?y:y->next; 
        }
        if(carry==1){
        	head->next=new ListNode(1);   //最后判断是否有最高进位
        }
        return dumnode->next; 
        
    }
};
