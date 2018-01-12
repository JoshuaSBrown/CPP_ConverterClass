
#ifndef _CONVERTER_HPP_
#define _CONVERTER_HPP_

#include <string>
#include <vector> 
#include <unordered_map>

class Converter{
    private:
        std::unordered_map<std::string,std::vector<int>>         integers;
        std::unordered_map<std::string,std::vector<double>>      doubles;
        std::unordered_map<std::string,std::vector<std::string>> strings;

    public:
        Converter() {}

        template<class T>
        void importData(std::unordered_map<std::string,std::vector<int>>         (*writeInt)    (T), T temp);

        template<class T>
        void importData(std::unordered_map<std::string,std::vector<double>>      (*writeDouble) (T), T temp);

        template<class T>
        void importData(std::unordered_map<std::string,std::vector<std::string>> (*writeString) (T), T temp);
    
        template<class T>
        void importData(std::unordered_map<std::string,std::vector<int>> (*writeInt) (T),std::unordered_map<std::string,std::vector<double>> (*writeDouble) (T),std::unordered_map<std::string,std::vector<std::string>> (*writeString) (T),

        template<class T>
        T& exportData(void (*readData) (std::unordered_map<std::string,std::vector<int>>,std::unordered_map<std::string,std::vector<double>>,std::unordered_map<std::string,std::vector<std::string>>))
}


#endif
