#include <iostream>
#include <vector> // for std::vector

void ajoute_double(std::vector<int> &v)
{
  auto size = v.size();
  for (size_t i = 0; i < size; i++)
  {
    v.emplace_back(v[i] * 2);
  }
}

void affiche(const std::vector<int> &v)
{
  for (auto num : v)
  {
    std::cout << " " << num;
  }
  std::cout << std::endl;
}

int main()
{
  std::vector<int> entiers;
  std::string in;
  do
  {
    std::cin >> in;
    try
    {
      int x;
      if ((x = stoi(in)) >= 0)
      {
        entiers.emplace_back(x);
      }
      else
      {
        entiers.erase(entiers.begin());
      }
    }
    catch (const std::invalid_argument &e)
    {
      std::cerr << "Ceci n'est pas un entier!" << '\n';
    }

  } while (in != "0");

  std::cout << "Le tableau contient les valeurs :";
  affiche(entiers);

  std::cout << entiers.front()
            << " "
            << entiers.back()
            << std::endl;

  ajoute_double(entiers);
  affiche(entiers);

  return 0;
}
