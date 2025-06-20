#pragma once
#ifndef SHOP_H  
#define SHOP_H  

#include <iostream>  
#include <string>  
#include <vector>  
#include "../Item/Item.h" // ��� ��η� �����Ͽ� Item.h ������ �ùٸ��� ����
#include "../Item/HealthPotion.h"
#include "../Item/AttackBoost.h" // ��� ��η� �����Ͽ� AttackBoost.h ������ �ùٸ��� ����


using namespace std;

class Character; // ���� ��� ���� ���� �س��� ����  

//dd

class Shop {
private:
    vector<unique_ptr<Item>> availableItems;
public:
    void displayItems()const;
    void buyItem(int index, Character* player);
    void sellItem(int index, Character* player);
    Shop();
};

#endif // SHOP_H
