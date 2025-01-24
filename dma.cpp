#include <iostream>
#include "dma.h"
using namespace std;
namespace seneca {

	void reverse() {
		int count;
		std::cout << "Enter the number of double values:\n>";
		std::cin >> count;

		double* arr = new double[count];
		for (int i = 0; i < count; i++) {
			std::cout << i + 1 << "> ";
			std::cin >> arr[i];
		}

		for (int i = count - 1; i >= 0; --i) {
			std::cout << arr[i] << std::endl;
		}

		//delete[] arr;
	}

    Contact* getContact() {
        Contact* contact = new Contact;
        std::cout << "Name: ";
        std::cin.ignore(); // Clear newline
        std::cin.getline(contact->m_name, 31);

        std::cout << "Last name: ";
        std::cin.getline(contact->m_lastname, 31);

        std::cout << "Phone number: ";
        std::cin >> contact->m_phoneNumber;

        return contact;
    }

    // Display contact details
    void display(const Contact& contact) {
        std::cout << contact.m_name << " " << contact.m_lastname
            << ", +" << contact.m_phoneNumber << std::endl;
    }

    // Set contact details to empty values
    void setEmpty(Contact& contact) {
        contact.m_name[0] = '\0';
        contact.m_lastname[0] = '\0';
        contact.m_phoneNumber = 0;
    }

    // Deallocate a dynamically allocated Contact
    void deallocate(Contact* contact) {
        delete contact;
    }




}
