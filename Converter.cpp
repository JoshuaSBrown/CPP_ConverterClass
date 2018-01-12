

#include <string>
#include <vector>
#include <unordered_map>

using namespace std;


template<class T>
void Converter::importData(unordered_map<string,vector<int>> (*writeInt) (T), T temp){
    this->integers = writeInt(temp);
}

template<class T>
void Converter::importData(unordered_map<string,vector<double>> (*writeDouble) (T), T temp){
    this->doubles = writeDouble(temp);
}

template<class T>
void Converter::importData(unordered_map<string,vector<string>> (*writeString) (T), T temp){
    this->strings = writeString(temp);
}

template<class T>
void Converter::importData(unordered_map<string,vector<int>> (*writeInt) (T), unordered_map<string,vector<double>> (*writeDouble) (T),unordered_map<string,vector<string>> (*writeString) (T),T temp){
    this->integers = writeInt(temp);
    this->doubles  = writeDoubles(temp);
    this->strings  = writeStrings(temp);
}

template<class T>
T& Converter::exportData(void (*readData) (std::unordered_map<std::string,std::vector<int>>,std::unordered_map<std::string,std::vector<double>>,std::unordered_map<std::string,std::vector<std::string>>)){
    return readData(this->integers,this->doubles,this->strings);
}
