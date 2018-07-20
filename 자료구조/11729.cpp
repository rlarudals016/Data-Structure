#include <cstdio>
#include <queue>
using namespace std;

int n;
priority_queue<int> pq;

int main(){
    scanf("%d",&n);
    while(n--){
        int num;
        scanf("%d",&num);
        if(num) pq.push(num);
        else{
            if(pq.empty()) puts("0");
            else{
                int tmp=pq.top();
                pq.pop();
                printf("%d\n",tmp);
            }
        }
    }
}
