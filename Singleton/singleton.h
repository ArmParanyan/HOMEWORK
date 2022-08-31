#include <string>

class Singleton
{
public:
    ~Singleton();
    Singleton(Singleton& oth) = delete;
    Singleton operator=(const Singleton& oth) = delete;
    static Singleton* get_instance();
    int get_value();
    void set_value(int);
    
private:
    Singleton() = default;
    int m_value;
    static Singleton* m_singleton;
};
