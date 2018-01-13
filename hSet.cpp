#include <iostream>
#include <algorithm>
#include <set>
#include <iterator>
#include <string>

int main(){
	std::string arr[] = {"something", "good", "by", "alt","-","j"};
	std::string arr2[] = {"taro","by","alt","-","j"};	

	std::set<std::string> sSet(arr,arr+6);
	std::set<std::string> sSet2(arr2,arr2+5);
	std::set<std::string> sSet3;
	std::set<std::string>::iterator it;
	
	for(it=sSet.begin(); it!=sSet.end(); it++)
		std::cout << *it << std::endl; 
	std::cout << std::endl;
	for(it=sSet2.begin(); it!=sSet2.end(); it++)
		std::cout << *it << std::endl;
	
	std::cout << "\nDifferences:\n";

	set_difference(sSet.begin(), sSet.end(), sSet2.begin(), sSet2.end(), 
		std::insert_iterator<std::set<std::string>>(sSet3, sSet3.begin()));	 
	for(it=sSet3.begin(); it!=sSet3.end(); it++)
		std::cout << *it << std::endl;
	
	std::cout << "\nUnion:\n";
	
	set_union(sSet.begin(), sSet.end(), sSet2.begin(), sSet2.end(), 
		std::insert_iterator<std::set<std::string>>(sSet3, sSet3.begin()));
	for(it=sSet3.begin(); it!=sSet3.end(); it++)
		std::cout << *it << std::endl;
	return 0;
}
