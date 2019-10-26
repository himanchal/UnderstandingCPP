
#include <iostream>

class Log{
public:
    enum Level : char{
        LevelError,
        LevelWarning,
        LevelInfo
    };
private:
    int _logLevel = LevelInfo;
public:
    void SetLevel(int level){
        _logLevel = level;
    }
    
    void Error(const char* message){
        if (_logLevel >= LevelError)
            std::cout<<"[ERROR]: " << message <<std::endl;
    }
    
    void Warn(const char* message){
        if (_logLevel >= LevelWarning)
            std::cout<<"[WARNING]: " << message <<std::endl;
    }
    
    void Info(const char* message){
        if (_logLevel >= LevelInfo)
            std::cout<<"[INFO]: " << message <<std::endl;
    }
    
};

int main(int argc, const char * argv[]) {
    Log log;
    log.SetLevel(Log::LevelInfo);
    log.Warn("Hello!");
    log.Error("Hello!");
    log.Info("Hello!");
    return 0;
}
