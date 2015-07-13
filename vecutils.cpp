#include "stdafx.h"
#include "vecutils.h"
#include <algorithm>

void sortVectorAscending(const std::vector<double>& src, std::vector<double>& sorted, std::vector<unsigned int>& idx){

	//Prepare dpair vector
	std::vector<dpair> v;
	for (unsigned int k = 0; k < src.size(); k++){
		dpair p;
		p.first = src[k];
		p.second = k;
		v.push_back(p);
	}

	std::sort(v.begin(), v.end(), compareAscending());

	for (unsigned int k = 0; k < v.size(); k++){
		sorted.push_back(v[k].first);
		idx.push_back(v[k].second);
	}
}


void sortVectorDescending(const std::vector<double>& src, std::vector<double>& sorted, std::vector<unsigned int>& idx){

	std::vector<dpair> v;
	for (unsigned int k = 0; k < src.size(); k++){
		dpair p;
		p.first = src[k];
		p.second = k;
		v.push_back(p);
	}

	std::sort(v.begin(), v.end(), compareDescending());

	for (unsigned int k = 0; k < v.size(); k++){
		sorted.push_back(v[k].first);
		idx.push_back(v[k].second);
	}
}