#include <iostream>
#define QUEUE_SIZE 2000000
using namespace std;

class Queue {
private:
  int front = 0;
  int rear = 0;
  int q[QUEUE_SIZE];

public:
  void push(int n);
  int pop();
  int getSize();
  bool isEmpty();
  int getFront();
  int getRear();
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  Queue q;
  int n;
  string cmd;
  int arg;
  cin >> n;

  while (n--) {
    cin >> cmd;
    if (cmd[1] == 'u') { // push
      cin >> arg;
      q.push(arg);
    } else if (cmd[1] == 'o') // pop {
      cout << q.pop() << '\n';
    else if (cmd[0] == 's') // size
      cout << q.getSize() << '\n';
    else if (cmd[0] == 'e') // empty
      cout << (q.isEmpty() ? 1 : 0) << '\n';
    else if (cmd[0] == 'f') // front
      cout << q.getFront() << '\n';
    else if (cmd[0] == 'b') // back
      cout << q.getRear() << '\n';
  }

  return 0;
}

bool Queue::isEmpty() { return front == rear; }

int Queue::getFront() {
  if (isEmpty())
    return -1;
  else
    return q[(front + 1) % QUEUE_SIZE];
}

int Queue::getRear() {
  if (isEmpty())
    return -1;
  else
    return q[rear];
}

void Queue::push(int n) {
  rear = (rear + 1) % QUEUE_SIZE;
  q[rear] = n;
}

int Queue::pop() {
  int result;
  if (isEmpty())
    return -1;
  else {
    front = (front + 1) % QUEUE_SIZE;
    return q[front];
  }
}

int Queue::getSize() { return ((rear - front + QUEUE_SIZE) % QUEUE_SIZE); }
