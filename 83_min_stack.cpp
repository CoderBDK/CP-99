#include <iostream>
#include <cmath>
#include <stdexcept>
#include <cassert>

using namespace std;

class MinStack {
private:
    static const int STACK_SIZE = 10;
    int stack[STACK_SIZE];
    int minStack[STACK_SIZE];
    int topIndex;
public:
    MinStack() {
        topIndex = -1;
    }

    void push(int v) {
        if (topIndex + 1 >= STACK_SIZE) {
            throw overflow_error("Stack Overflow");
            return;
        }
        stack[++topIndex] = v;
        if (topIndex == 0) {
            minStack[topIndex] = v;
        } else {
            minStack[topIndex] = min(minStack[topIndex - 1], v);
        }
    }

    int pop() {
        if (topIndex == -1) {
            throw underflow_error("Stack Underflow");
        }
        return stack[topIndex--];
    }

    int top() {
        if (topIndex == -1) {
            throw underflow_error("Stack is empty");
        }
        return stack[topIndex];
    }

    int getMin() {
        if (topIndex == -1) {
            throw underflow_error("Stack is empty");
        }
        return minStack[topIndex];
    }
};

void test_minStack() {
    MinStack stack1;
    try {
        stack1.pop();
        assert(false);
    } catch (const underflow_error& e) {
        assert(true);
    }
    try {
        stack1.top();
        assert(false);
    } catch (const underflow_error& e) {
        assert(true);
    }

    try {
        stack1.getMin();
        assert(false);
    } catch (const underflow_error& e) {
        assert(true);
    }
    
    MinStack stack2;
    stack2.push(-1);
    assert(stack2.top() == -1);
    assert(stack2.getMin() == -1);

    stack2.push(2);
    assert(stack2.top() == 2);
    assert(stack2.getMin() == -1);

    stack2.push(0);
    assert(stack2.top() == 0);
    assert(stack2.getMin() == -1);

    stack2.push(3);
    assert(stack2.top() == 3);
    assert(stack2.getMin() == -1);

    stack2.push(-1);
    assert(stack2.top() == -1);
    assert(stack2.getMin() == -1);

    assert(stack2.pop() == -1);
    assert(stack2.top() == 3);
    assert(stack2.getMin() == -1);

    assert(stack2.pop() == 3);
    assert(stack2.top() == 0);
    assert(stack2.getMin() == -1);

    assert(stack2.pop() == 0);
    assert(stack2.top() == 2);
    assert(stack2.getMin() == -1);

    assert(stack2.pop() == 2);
    assert(stack2.top() == -1);
    assert(stack2.getMin() == -1);

    assert(stack2.pop() == -1);
    
    try {
        stack2.top();
        assert(false);
    } catch (const underflow_error& e) {
        assert(true);
    }

    MinStack stack3;
    stack3.push(5);
    stack3.push(2);
    stack3.push(10);
    stack3.push(1);
    assert(stack3.getMin() == 1);
    assert(stack3.pop() == 1);
    assert(stack3.getMin() == 2);
    stack3.push(-5);
    assert(stack3.getMin() == -5);
    assert(stack3.pop() == -5);
    assert(stack3.getMin() == 2);
    assert(stack3.pop() == 10);
    assert(stack3.getMin() == 2);
    assert(stack3.pop() == 2);
    assert(stack3.getMin() == 5);
    assert(stack3.pop() == 5);

    MinStack stack4;
    for (int i = 0; i < 10; ++i) {
        stack4.push(i);
    }
    try {
        stack4.push(100);
        assert(false);
    } catch (const overflow_error& e) {
        assert(true);
    }
}

int main() {
    test_minStack();
    cout << "All tests passed!" << endl;
    return 0;
}
