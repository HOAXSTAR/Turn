#ifndef HYENA_H
#define HYENA_H

#include "../Enemy.h"


class Hyena : public Enemy {
  public:
    Hyena();

    EnemyType GetType() override;
    std::string GetIntro() override;
  private:
    int ReturnDamage() override;
    int ReturnRiskAttackDamage() override;
    int ReturnHealAmount() override;
};

#endif // HYENA_H
