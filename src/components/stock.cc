using namespace std;

template <class T> 
class stock
{
private:
  T accumulant;
  T capacity;

public:
  stock(T accumulant, T capacity){
    this->accumulant = accumulant;
    this->capacity = capacity;
  };
  ~stock();
  print(){
    cout << "acc: " << accumulant << " cap: " << capacity << endl; 
  }
};
