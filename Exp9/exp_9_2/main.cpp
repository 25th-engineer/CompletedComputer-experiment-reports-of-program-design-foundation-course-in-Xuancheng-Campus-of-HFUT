#include "_stack.h"

int main()
{
    _stack st;
    for(int i=0;i<10;i++)
        st.push(i+1);
    st._top();
    for(int i=0;i<10;i++)
        st.pop(i);
    //std::cout<<std::endl;
    //st._top();
    //st.~_stack();
    //st._top();
    return 0;
}
