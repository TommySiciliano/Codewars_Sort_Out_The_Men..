#include <vector>
#include <set>
#include <iostream>
#include <algorithm>
using namespace std ;

bool isEven(const int number) {
	return !(number%2);
}
bool isOdd(const int number) {
	return number%2;
}

vector <int> menFromBoys (vector <int> values)
{
	std::vector<int> result;
	std::set<int, std::greater<int> > no_dup_val(values.begin(), values.end());
	std::set<int>::iterator set_itr;

	for(set_itr = no_dup_val.begin(); set_itr != no_dup_val.end(); set_itr++) {
		if(isEven(*set_itr)) {
			result.push_back(*set_itr);
		}
	}

	sort(result.begin(), result.end());

	for (set_itr = no_dup_val.begin(); set_itr != no_dup_val.end(); set_itr++) {
		if (isOdd(*set_itr)) {
			result.push_back(*set_itr);
		}
	}
  return result;
}

int main() {


	return 0;
}
