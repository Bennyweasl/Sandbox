template <class T>
class Arithametic
{
private:
  T a;
  T b;

public:
  Arithametic(T a, T b);
  T add();
  T sub();
};
template <class T>
Arithametic<T>::Arithametic(T a, T b)
{
  this->a = a;
  this->b = b;
}
template <class T>
T Arithametic<T>::add()
{
  T c;
  c = a + b;
  return c;
}
template <class T>
T Arithametic<T>::sub()
{
  T c;
  c = a - b;
  return c;
}