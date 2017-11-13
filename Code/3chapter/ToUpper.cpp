#include <iostream>
#include <string>
#include <vector>

int main() {
  std::string word;
  std::vector<std::string> wordvec;
  // 读取一组单词
  while (std::cin >> word) {
    // std::cout << word << std::endl;
    wordvec.push_back(word);
  }
  
  // 输出这组单词
  std::vector<std::string>::iterator iter = wordvec.begin();
  for ( ; iter != wordvec.end(); ++iter) {
    for(int i=0; i< (*iter).size(); ++i)
      (*iter)[i] = toupper((*iter)[i]);
    std::cout << (*iter) << std::endl;
  }
  return 0;
}
