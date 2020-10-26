#include "../../include/Common.h"
#include "../../include/EnemyTypes/Hyena.h"

Hyena::Hyena() {
    name = "Hyena";
    ExperienceAmount = 120;
    CoinsDrop = Common::RandomInt(70, 130);
}

EnemyType Hyena::GetType() {
    return etHyena;
}

int Hyena::ReturnDamage() {
    return Common::RandomInt(12, 24);
}

int Vampire::ReturnRiskAttackDamage() {
    int selector = Common::RandomInt(0, 5);
    switch (selector) {
    case 0:
    case 1:
    case 2:
        return 8;
        break;
    case 4:
    case 5:
    case 6:
        return 25;
        break;
    default:
        return 0;
        break;
    }
}

int Hyena::ReturnHealAmount() {
    return Common::RandomInt(14, 28);
}

std::string Hyena::GetIntro() {
    return "A ruthless muderer.. ..";
}
