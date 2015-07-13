#include "stdafx.h"
#include <vector>
#include <iostream>

typedef std::pair<double, unsigned int> dpair;

using std::ostream;
using std::vector;

struct compareAscending
{
	inline bool operator() (const dpair& p1, const dpair& p2)
	{
		return p1.first < p2.first;
	}
};

struct compareDescending
{
	inline bool operator() (const dpair& p1, const dpair& p2)
	{
		return p1.first > p2.first;
	}
};


template<typename T> ostream& operator<< (ostream& out, const vector<T>& vec) {
	out << "{";
	for (size_t i = 0; i < vec.size()-1; ++i) {
		out << vec[i];
		out << ", ";
	}
	out << vec[vec.size() - 1] << "}\n";
	return out;
}

void sortVectorAscending(const std::vector<double>& src, std::vector<double>& sorted, std::vector<unsigned int>& idx);
void sortVectorDescending(const std::vector<double>& src, std::vector<double>& sorted, std::vector<unsigned int>& idx);