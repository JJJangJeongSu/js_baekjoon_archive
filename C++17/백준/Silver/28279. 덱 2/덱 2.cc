#include <iostream>
#include <queue>
#define DEQUE_SIZE 1000000
#define INC_IDX(x) ((x + 1) % DEQUE_SIZE)
#define DEC_IDX(x) ((x - 1 + DEQUE_SIZE) % DEQUE_SIZE)

using namespace std;

class Deque {
private:
  int deque[DEQUE_SIZE];
  int front = 0;
  int rear = 0;
  bool empty = true;

public:
  void push_front(int n);
  void push_back(int n);
  int pop_front(void);
  int pop_back(void);
  int get_count(void);
  int is_empty(void);
  int get_front(void);
  int get_back(void);
};

void Deque::push_front(int n) {
  if (empty) {
    deque[front] = n; // deque[rear] = n; 과 동일
    empty = false;
  } else {
    front = INC_IDX(front);
    deque[front] = n;
  }
}

void Deque::push_back(int n) {
  if (empty) {
    deque[rear] = n; // deque[rear] = n; 과 동일
    empty = false;
  } else {
    rear = DEC_IDX(rear);
    deque[rear] = n;
  }
}

int Deque::pop_front(void) {
  int front_item;

  if (empty)
    front_item = -1;

  else {
    front_item = deque[front];

    if (front == rear)
      empty = true;

    else {
      front = DEC_IDX(front);
    }
  }
  return front_item;
}

int Deque::pop_back(void) {
  int back_item;

  if (empty)
    back_item = -1;
  else {
    back_item = deque[rear];

    if (front == rear)
      empty = true;

    else {
      rear = INC_IDX(rear);
    }
  }
  return back_item;
}

int Deque::get_count(void) {
  return (empty ? 0 : (front - rear + DEQUE_SIZE + 1) % DEQUE_SIZE);
}

int Deque::is_empty(void) { return empty ? 1 : 0; }

int Deque::get_front(void) { return empty ? -1 : deque[front]; }

int Deque::get_back(void) { return empty ? -1 : deque[rear]; }

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  int cmd, arg;

  cin >> n;

  Deque d;

  while (n--) {
    cin >> cmd;
    if (cmd == 1 || cmd == 2)
      cin >> arg;

    switch (cmd) {
    case 1:
      d.push_front(arg);
      break;

    case 2:
      d.push_back(arg);
      break;

    case 3:
      cout << d.pop_front() << '\n';
      break;
    case 4:
      cout << d.pop_back() << '\n';
      break;

    case 5:
      cout << d.get_count() << '\n';
      break;
    case 6:
      cout << d.is_empty() << '\n';
      break;
    case 7:
      cout << d.get_front() << '\n';
      break;
    case 8:
      cout << d.get_back() << '\n';
      break;
    default:
      break;
    }
  }

  return 0;
}