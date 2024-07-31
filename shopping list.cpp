#include <iostream>
#include <vector>

class ShoppingList {
private:
    struct Item {
        int code;
        float price;
    };

    std::vector<Item> items;

public:
    void addItem(int code, float price) {
        Item newItem;
        newItem.code = code;
        newItem.price = price;
        items.push_back(newItem);
        std::cout << "Item added: Code=" << code << ", Price=" << price << std::endl;
    }

    void deleteItem(int code) {
        auto it = std::remove_if(items.begin(), items.end(), [code](const Item& item) {
            return item.code == code;
        });

        if (it != items.end()) {
            items.erase(it, items.end());
            std::cout << "Item deleted: Code=" << code << std::endl;
        } else {
            std::cout << "Item with code " << code << " not found." << std::endl;
        }
    }

    void printTotalValue() const {
        float total = 0.0f;
        for (const auto& item : items) {
            total += item.price;
        }
        std::cout << "Total value of the order: " << total << std::endl;
    }

    void printList() const {
        if (items.empty()) {
            std::cout << "The shopping list is empty." << std::endl;
            return;
        }

        std::cout << "Shopping List:" << std::endl;
        for (const auto& item : items) {
            std::cout << "Code: " << item.code << ", Price: " << item.price << std::endl;
        }
    }
};

int main() {
    ShoppingList list;
    int choice, code;
    float price;

    while (true) {
        std::cout << "\nMenu:\n";
        std::cout << "1. Add Item\n";
        std::cout << "2. Delete Item\n";
        std::cout << "3. Print Total Value\n";
        std::cout << "4. Print Shopping List\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            std::cout << "Enter item code: ";
            std::cin >> code;
            std::cout << "Enter item price: ";
            std::cin >> price;
            list.addItem(code, price);
            break;
        case 2:
            std::cout << "Enter item code to delete: ";
            std::cin >> code;
            list.deleteItem(code);
            break;
        case 3:
            list.printTotalValue();
            break;
        case 4:
            list.printList();
            break;
        case 5:
            return 0;
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }

    return 0;
}

