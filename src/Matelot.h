#ifndef MATELOT_H
#define MATELOT_H

#include <iostream>


class Matelot {
private:
  unsigned int pv;
  unsigned int force;
  bool blesse;
  unsigned int maxPv;
  std::string nom;

public:
  Matelot (unsigned int force, unsigned int maxPv, std::nom);
  int getPv();
  int getForce();
  int getMaxPV();
  std::string getNom();

  void setPv(unsigned int pv);
  void setForce(unsigned int force);
  void setMaxPV(unsigned int maxPv);

  void soigner(unsigned int pv);
  void removePv(unsigned int pv);

  bool estBlesse();


  virtual ~Matelot ();
};

#endif /* end of include guard: MATELOT_H */
