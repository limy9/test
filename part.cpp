#include <iostream>
#include <string>
#include <iomanip>

class Particle
{
public:
  std::string m_name;
  float m_mass;
  int m_charge;
  int m_spin_num;
  int m_spin_den;

  Particle(std::string name, float mass, int charge, int spin_num, int spin_den)
    : m_name(name), m_mass(mass), m_charge(charge), m_spin_num(spin_num), m_spin_den(spin_den) {}
  void get_things()
  {
    std::cout << "name: "<<m_name <<"\tmass: " <<std::setw(6)<< m_mass << " MeV/c^2";
    std::cout << "\tcharge: " << m_charge << "e" << "\tspin: " << m_spin_num << "/" << m_spin_den << std::endl;
  }

  //使用setw函数来设置整数和浮点数的宽度
};

class Lepton : public Particle
{
public:
  Lepton(std::string name, float mass, int charge, int spin_num, int spin_den)
    : Particle(name, mass, charge, spin_num, spin_den) {}
 void com()
  {
    std::cout << "leptons are all fermions." << std::endl;
  }
};

void test0()
{
  std::cout << "<class Particle>" << std::endl;
  Particle A("electron", 0.51, -1, 1, 2);
  A.get_things();
  Particle B("tau", 1776.82, -1, 1, 2);
  B.get_things();
  Particle C("proton", 938, 1, 1, 2);
  C.get_things();
  Particle D("photon", 0, 0, 1, 1);
  D.get_things();
  Particle E("neutron", 939.565, 0, 1, 2);
  E.get_things();
  Particle F("muon", 105.66, -1, 1, 2);
  F.get_things();
}
  void test1()
{
  std::cout << "<class Lepton>" << std::endl;
  Lepton H("electron neutrion", 0.0000022, 0, 1, 2);
  H.com();
  H.get_things();
  Lepton I("muon neutrion",0.17,0,1,2);
  I.get_things();
  Lepton J("tau neutrion",15.5,0,1,2);
  J.get_things();
}

int main()
{
  test0();
  test1();
  return 0;
}
