int commonCharacterCount(std::string s1, std::string s2) {
    int count1[26] = {0};
    int count2[26] = {0};
    
    for(char c: s1) ++count1[c-'a'];
    for(char c: s2) ++count2[c-'a'];
    
    int ret = 0;
    for(int i=0; i<26; ++i)
        ret += min(count1[i],count2[i]);
    
    return ret;
}



// def commonCharacterCount(s1, s2):
//     values=[]
//     counter=0
//     for i in range(len(s1)):
//         values.append(ord(s1[1]))
//     values=list(set()) 
    
//     pass
