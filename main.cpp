#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;


int main() {
	string word, temp_word, temp;

	map<string, pair<string, int>> dictionary;
	map<string, pair<string, int>>::iterator iter;
	vector<string> anagrams;

	while (cin >> word) {
		if (word[0] == '#')
			break;

		temp_word = word;

        transform(temp_word.begin(), temp_word.end(),temp_word.begin(), ::toupper);
        sort(temp_word.begin(),temp_word.end());
        dictionary[temp_word].first=word;
        dictionary[temp_word].second++;
	}

	for(iter = dictionary.begin(); iter != dictionary.end(); ++iter){
            if((*iter).second.second == 1)
                anagrams.push_back((*iter).second.first);
    }
    
	sort(anagrams.begin(),anagrams.end());
    
	for (int i = 0; i < anagrams.size(); ++i)
    {
        cout<<anagrams[i]<<endl;
    }

	return EXIT_SUCCESS;
}
