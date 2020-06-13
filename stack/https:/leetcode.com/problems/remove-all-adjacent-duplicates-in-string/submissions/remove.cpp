string removeDuplicates(string S) {
        string ret;
        for (auto ch : S) {
            if (ret.size() != 0 and ret.back() == ch) {
                ret.pop_back();
            }
            else {
                ret.push_back(ch);
            }
        }
        return ret;
        
    }
};
