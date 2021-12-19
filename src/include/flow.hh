#ifndef FLOW
  #define FLOW

  using namespace std;

  template <class T>
  class flow
  {
  private:
    stock <T> left;
    stock <T> right;
    T rate;
    T capacity;
  public:
    flow(stock <T> * left, stock <T> * right, T rate, T capacity);
    ~flow();
  };
#endif