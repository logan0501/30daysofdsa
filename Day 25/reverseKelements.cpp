// only function

queue<int> modifyQueue(queue<int> q, int k)
{
    //add code here.
    queue<int> q2;
    stack<int> stack;
    for(int i = 0; i<k; i++){ 
        stack.push(q.front());
        q.pop();
    }
    while(!stack.empty()) {
        q2.push(stack.top());
        stack.pop();
    }
    while(q.size() > 0) {
        q2.push(q.front());
        q.pop();
    }
    return q2;
}