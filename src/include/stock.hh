#ifndef STOCK
  #define STOCK

  using namespace std;

  template <class T> 
  class stock
  {
  private:
    T accumulant;
    T capacity;

  public:
    stock(T accumulant, T capacity);
    ~stock();
    void print();
  };

#endif