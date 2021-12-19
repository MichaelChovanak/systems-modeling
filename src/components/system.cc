#include <vector>
#include "../include/flow.hh"
#include "../include/stock.hh"

using namespace std;

template <class T>
class system
{
private:
  vector<stock> stocks;
  vector<flow> flows;


public:
  system();
  ~system();
  void addStock(stock <T> &stock) {
    this.stocks.push_back(stock);
  }
  void addFlow(flow <T> &flow) {
    this.flow.push_back(flow);
  }
  vector<stock> getStocks(){
    return stocks;
  }
  vector<flow> getFlows(){
    return flows;
  }
};
