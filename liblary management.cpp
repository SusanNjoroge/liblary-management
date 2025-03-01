#include <iostream>
#include <string>

class Person {
protected:
    std::string name;

public:
    void setName(std::string n) {
        name = n;
    }

    std::string getName() {
        return name;
    }
};

class LibraryMember : public Person {
private:
    int memberID;
    int booksBorrowed;

public:
    LibraryMember(std::string n, int id, int books) : memberID(id), booksBorrowed(books) {
        name = n;
    }

    int getMemberID() {
        return memberID;
    }

    int getBooksBorrowed() {
        return booksBorrowed;
    }
};

class PremiumMember : public LibraryMember {
private:
    double membershipFee;

public:
    PremiumMember(std::string n, int id, int books, double fee) : LibraryMember(n, id, books), membershipFee(fee) {}

    double getMembershipFee() {
        return membershipFee;
    }
};

int main() {
    // Creating a premium member
    PremiumMember premiumMember("Jane Smith", 456, 3, 50.0);

    // Displaying premium member information
    std::cout << "Name: " << premiumMember.getName() << std::endl;
    std::cout << "Member ID: " << premiumMember.getMemberID() << std::endl;
    std::cout << "Books Borrowed: " << premiumMember.getBooksBorrowed() << std::endl;
    std::cout << "Membership Fee: " << premiumMember.getMembershipFee() << std::endl;

    return 0;
}
