#ifndef PROGRESSQUESTWOW_ITEM_H
#define PROGRESSQUESTWOW_ITEM_H
#include <string>
#include <vector>
#include <memory>

class item {
    std::string item_name;
    int item_code;
public:
    virtual ~item() = default;
    virtual std::string get_item_name() {return std::string(item_name);}
    virtual std::unique_ptr<item> clone() const = 0;
    virtual void print(std::ostream&) = 0;
};

class weapon{};

class sword : public item, public weapon{
    std::string item_name;
    int item_code;
    int damage_value;
public:
    sword(const std::string&, int, int);
    std::unique_ptr<item> clone() const override;
    void print(std::ostream &) override;
};

class armor{};

class chestplate : public item, public armor{
    std::string item_name;
    int item_code;
    int armor_value;
public:
    chestplate(const std::string&, int, int);
    std::unique_ptr<item> clone() const override;
    void print(std::ostream &) override;
};

class potion{};

class healthpotion : public item, public potion{
    std::string item_name;
    int item_code;
    int restore_value;
public:
    healthpotion(const std::string&, int, int);
    std::unique_ptr<item> clone() const override;
    void print(std::ostream &) override;
};

class chest{
    std::vector<std::unique_ptr<item>> items;
public:
    chest() = default;
    chest(const chest&);
    chest& operator=(chest);
    void add_item(const item&);

    friend std::ostream& operator<<(std::ostream&,
                                    const chest&);
};

#endif //PROGRESSQUESTWOW_ITEM_H
