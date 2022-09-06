#include <iostream>

class Musician
{
public:
    virtual void play()
    {
        std::cout << "Musician play" << std::endl;
    }
    virtual void listen(Musician& obj)
    {
        std::cout << "Musician listen" << std::endl;
    }
    virtual bool is_playing()
    {
        std::cout << "Musician is_playing" << std::endl;
        return false;
    }
    virtual ~Musician()
    {
        std::cout << "Musician Destructor" << std::endl;
    }
};

class Saxophonist : public Musician
{
public:
    void play() override
    {
        std::cout << "Saxophonist play" << std::endl;
    }
    void listen(Musician& obj) override
    {
        std::cout << "Saxophonist listen" << std::endl;   
    }
    bool is_playing() override
    {
        std::cout << "Saxophonist is_playing" << std::endl;
        return true;
    }
    ~Saxophonist()
    {
        std::cout << "Saxophonist destructor" << std::endl;
    }
};

class Pianist : public Musician
{
public:
    void play() override
    {
        std::cout << "Pianist play" << std::endl;
    }
    void listen(Musician& obj) override
    {
        std::cout << "Pianist listen" << std::endl;
    }
    bool is_playing() override
    {
        std::cout << "Pianist is_playing" << std::endl;
        return false;
    }
    ~Pianist()
    {
        std::cout << "Pianist destructor" << std::endl;
    }
};

class Bassist : public Musician
{
public:
    void play() override
    {
        std::cout << "Bassist play" << std::endl;
    }
    void listen(Musician& obj) override
    {
        std::cout << "Bassist listen" << std::endl;
    }
    bool is_playing() override
    {
        std::cout << "Bassist is_playing " << std::endl;
        return false;
    }
    ~Bassist()
    {
        std::cout << "Bassist destructor" << std::endl;
    }

};

class Drumme : public Musician
{
void play() override
    {
        std::cout << "Drumme play" << std::endl;
    }
    void listen(Musician& obj) override
    {
        std::cout << "Drumme listen" << std::endl;
    }
    bool is_playing() override
    {
        std::cout << "Drumme is_playing " << std::endl;
        return false;
    }
    ~Drumme()
    {
        std::cout << "Drumme destructor" << std::endl;
    }
};
