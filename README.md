
#Just a trim tool.

I do a lot of text processing in c++ at the moment. So I need a good trim tool. But I do not want to call the boost library. However, I do not want to copy my trim code everywhere either. 
Easy to use:

```c++
void just_trim::trim(std::stringi &);
void just_trim::leftTrim(std::string &);
void just_trim::rightTrim(std::string &);
```
