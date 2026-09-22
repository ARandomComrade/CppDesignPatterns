class Singleton {
public:
    static Singleton* Instance();
    void setValue(int val);
    int getValue();
private:
    Singleton();
    ~Singleton();
    static Singleton* instance;
    int value;
};
