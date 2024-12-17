#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  ll a, b;
  string op;
  ll c = 1;
  while (true) {
    cin >> a >> op >> b;

    if (op == "E") return 0;

    cout << "Case " << c << ": ";

    auto ret = false;
    if (op == ">") {
      ret = (a > b);
    } else if (op == ">=") {
      ret = (a >= b);
    } else if (op == "<") {
      ret = (a < b);
    } else if (op == "<=") {
      ret = (a <= b);
    } else if (op == "==") {
      ret = (a == b);
    } else if (op == "!=") {
      ret = (a != b);
    } else {
      return 0;
    }

    if (ret) {
      cout << "true\n";
    } else {
      cout << "false\n";
    }

    ++c;
  }

  return 0;
}