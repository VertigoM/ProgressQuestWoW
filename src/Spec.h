#ifndef DND___AGAIN_SPEC_H
#define DND___AGAIN_SPEC_H

#include <string>
#include <vector>
#include "Spell.h"

class character_class{
public:
    virtual ~character_class() = default;
    virtual std::string get_name() const = 0;
    virtual std::vector<spell> class_spells() const{
        return std::vector<spell>();
    }
private:
    std::string _name;
};

class mage : public character_class{
public:
    std::string get_name() const override{return "Mage";}
    std::vector<spell> class_spells() const override;

};
#endif //DND___AGAIN_SPEC_H
