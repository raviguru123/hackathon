#ifndef NEXTGREATERELEMENT_H_INCLUDED
#define NEXTGREATERELEMENT_H_INCLUDED
using namespace std;

class track
{
public:
    int key;
    int index;
};
track * createNewTravkNode(int key,int index)
{
    track *newNode=new track();
    newNode->key=key;
    newNode->index=index;
    return newNode;
}


void printBothArray(vector<int>&v,vector<int>st)
{
    for(int i=0; i<v.size(); ++i)
    {
        cout<<v[i]<<" -->"<<st[i]<<endl;
    }

}

void printNextGreater(vector<int> &v)
{
    stack<track*> st;
    vector<int> nextGreater(v.size(),-1);
    for(int i=0; i<v.size(); i++)
    {

        if(st.empty())
        {
            st.push(createNewTravkNode(v[i],i));
        }
        else
        {
            while(!st.empty()&&st.top()->key<v[i])
            {
                nextGreater[st.top()->index]=v[i];
                st.pop();
            }
            st.push(createNewTravkNode(v[i],i));
        }
    }


    printBothArray(v,nextGreater);
}


void takeInput()
{
    vector<int> v;
    cout<<"if finish then enter -1"<<endl;
    cout<<"enter the number=";
    int num=0;
    do
    {
        cin>>num;
        if(num!=-1)
            v.push_back(num);
    }
    while(num!=-1);
    printNextGreater(v);
}

#endif // NEXTGREATERELEMENT_H_INCLUDED
