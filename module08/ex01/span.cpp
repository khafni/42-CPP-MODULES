#include "span.hpp"  
#include <climits>
	
Span::Span(int N): N(N)
{
	
}
	
Span::~Span()
{
	
}

void Span::addNumber(int num)
{
    if (this->numbers.size() >= this->N)
    {
        throw(addingNumberException());
        return;
    }
    this->numbers.push_back(num);
}

void Span::addRandomNNumber()
{
    srand(time(NULL));
    for (int i = 0; i < this->N; i++)
    {
        addNumber(rand() % 100);
    }
}

int Span::shortestSpan()
{
    int diff = INT_MAX;
    std::vector<int> tmp = this->numbers;
    std::sort(tmp.begin(), tmp.end());
    for (int i = 0; i < tmp.size(); i++)
    {
        if (abs(tmp[i+1] - tmp[i]) < diff)
          diff = tmp[i+1] - tmp[i];
    }
    return (diff);
}

int Span::longestSpan()
{
    int minE;
    int maxE;
    //std::vector<int> tmp = this->numbers;
    //std::sort(tmp.begin(), tmp.end());
    minE = this->numbers[0];
    maxE = this->numbers[0];
    for (int i = 0; i < this->numbers.size(); i++)
    {
        minE = std::min(minE, this->numbers[i]);
        maxE = std::max(maxE, this->numbers[i]);
    }
    return (abs(maxE - minE));
}