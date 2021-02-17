#include<iostream>
#include<algorithm>
#include<stack>
#include<cstring>
using namespace std;


int main() {
    stack <int> st;
    int num;
    char str[101];
   
    scanf("%s", str);
    int len = strlen(str);
    st.push(0);
    for (int i = 0; i < len; i++) 
    {
        char c = str[i];
        switch (c)
        {
        case 'H':
            num = 1;
            st.top() += 1;
            break;
        case 'C':
            num = 12;
            st.top() += 12;
            break;
        case 'O':
            num = 16;
            st.top() += 16;
            break;
        case'(':
            st.push(0);
            break;
        case')':
            num = st.top();
            st.pop();
            st.top() += num;
            break;
        default:
            st.top() += num * (c - '1');
        }
    }
    printf("%d", st.top());
    return 0;
}
