//Function to reverse the queue.
queue<int> rev(queue<int> q)
{
    stack<int> stack;
    while(q.size()>0) {
        stack.push(q.front());
        q.pop();
    }
    while(!stack.empty()) {
        q.push(stack.top());
        stack.pop();
    }
    return q;
}