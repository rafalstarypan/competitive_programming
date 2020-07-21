
// Comparator used in order to customize set. It can be used to sort values based on the information stored 
// in some other data structure

struct comp {
	bool operator() (int a, int b) const {
		if (myLeaves[a].size() == myLeaves[b].size()) return a < b;
		return myLeaves[a].size() > myLeaves[b].size();
	}
	
};

set<int, comp> nodes;
