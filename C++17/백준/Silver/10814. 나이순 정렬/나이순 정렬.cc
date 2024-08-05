#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct Person {
  int age;
  string name;
};

bool compPerson(Person p1, Person p2) { return p1.age < p2.age; }

void printPerson(Person p) { cout << p.age << " " << p.name << '\n'; }

int main() {
  int n;
  vector<Person> v;
  scanf("%d", &n);

  while (n--) {
    Person p;
    cin >> p.age >> p.name;
    v.push_back(p);
  }

  stable_sort(v.begin(), v.end(), compPerson);

  for (auto i : v) {
    printPerson(i);
  }

  return 0;
}
