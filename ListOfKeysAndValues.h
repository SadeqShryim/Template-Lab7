#ifndef LISTOFKEYSANDVALUES_H
#define LISTOFKEYSANDVALUES_H

#include <iostream>
#include <vector>

using namespace std; 


template<class KeyType, class ValueType> 

class ListOfKeysAndValues {

private:
	vector<KeyType> key;
	vector<ValueType> value;
public:
	void addKeyValuePair(KeyType K, ValueType V){

		key.push_back(K);
		value.push_back(V);
	}

	auto getPair(int indexValue) {
		return make_pair(key[indexValue], value[indexValue]);
	}

	ValueType getValue(KeyType& K) const {
		for (int i = 0; i < key.size(); ++i) {
			if (key[i] == K)
				return value[i];
		}
		
		cout << "The KEY is not Found!!!" << endl;
		return ValueType{};
	}
};
#endif // !LISTOFKEYSANDVALUES_H
