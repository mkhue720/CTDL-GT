#include<bits/stdc++.h>
using namespace std;

template <typename T>
class Node {
public:
    T elem;
    Node *next;
    Node<T>() { next = NULL; }
};

template <typename T>
class Slist {
public:
    int n;
    Node<T> *head, *trail;
    Slist() {
        head = trail = NULL;
    }

    void push_back(T x) {
        Node<T> *tmp = new Node<T>();
        tmp->elem = x;
        if (head == NULL) {
            head = trail = tmp;
        }
        else {
            trail->next = tmp;
            trail = tmp;
        }
    }

    void push_front(T x) {
        Node<T> *tmp = new Node<T>();
        if (head == NULL) {
            push_back(x);
        }
        else {
            tmp->elem = x;
            tmp->next = head;
            head = tmp;
        }
    }

    void erase(T x) {
    Node<T> *p = head, *prev = NULL;
    if (head == NULL) {
        cout << "List rong";
        return;
    }
    while (p != NULL && p->elem != x) {
        prev = p;
        p = p->next;
    }
    if (p == NULL) {
        cout << "Khong tim thay phan tu " << x << endl;
        return;
    }
    if (p == head) {
        head = head->next;
    } else if (p == trail) {
        prev->next = nullptr;
        trail = prev;
    } else {
        prev->next = p->next;
    }
    delete p;
    }

    void PrintList() {
        Node<T> *p = head;
        while (p != NULL) {
            cout << p->elem << " ";
            p = p->next;
        }
    }

    void deleteByMa(int ma) {
    Node<T> *temp = head, *prev = nullptr;

    if (temp != nullptr && temp->elem.ma == ma) {
        head = temp->next;
        delete temp;
        if (head == nullptr) {
            trail = nullptr;
        }
        return;
    }

    while (temp != nullptr && temp->elem.ma != ma) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == nullptr) {
        cout << "Khong tim thay doc gia voi ma " << ma << endl;
        return;
    }

    if (temp == trail) {
        trail = prev;
    }
    prev->next = temp->next;
    delete temp;
}

    T* findByMa(int ma) {
        Node<T> *temp = head;
        while (temp != NULL) {
            if (temp->elem.ma == ma) {
                return &temp->elem;
            }
            temp = temp->next;
        }
        return NULL;
    }
};

class Author {
	public:
		int ma, ns;
		string name, dc;
		Author() {
			ma = ns = 0;
			name = dc = "";
		}

		Author(int m, string n, int p, string q) {
			ma = m;
			name = n;
			ns = p;
			dc = q;
		}

		friend ostream& operator<<(ostream &os, Author A) {
			os << "Ma: " << A.ma << endl << "Ten: " << A.name << endl << "Nam sinh: " << A.ns << endl << "Dia chi: " << A.dc << endl;
			return os;
		}

		friend istream& operator>>(istream &is, Author &A) {
			cout << "Nhap ma: ";
			is >> A.ma;
			cout << "Nhap ten: ";
			cin.ignore();
			getline(is, A.name);
			cout << "Nhap ngay sinh: ";
			is >> A.ns;
			cout << "Nhap dia chi: ";
			cin.ignore();
			getline(is, A.dc);
			return is;
		}

        bool operator!=(const Author& other) const {
        return ma != other.ma || name != other.name || ns != other.ns || dc != other.dc;
    }
};

class AuthorManager {
    Slist<Author> authors;
public:
    void deleteByMa(int ma) {
        Author* author = authors.findByMa(ma);
        if (author != NULL) {
            authors.erase(*author);
        } else {
            cout << "Khong tim thay doc gia voi ma " << ma << endl;
        }
    }

    Author* findByMa(int ma) {
        return authors.findByMa(ma);
    }

    void addAuthor(Author author) {
        authors.push_back(author);
    }

    void printAuthors() {
        authors.PrintList();
    }
};

int main() {
    AuthorManager manager;

    int choice;
    while (true) {
        cout << "1. Them doc gia." << endl;
        cout << "2. Xoa doc gia theo ma." << endl;
        cout << "3. Tim doc gia theo ma." << endl;
        cout << "4. In danh sach doc gia." << endl;
        cout << "5. Ket thuc chuong trinh." << endl;
        cout << "Moi chon 1 2 3 4 hoac 5: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1: {
                Author author;
                cin >> author;
                manager.addAuthor(author);
                break;
            }
            case 2: {
                int ma;
                cout << "Nhap ma: ";
                cin >> ma;
                manager.deleteByMa(ma);
                break;
            }
            case 3: {
                int ma;
                cout << "Nhap ma: ";
                cin >> ma;
                Author* author = manager.findByMa(ma);
                if (author != nullptr) {
                    cout << *author << endl;
                } else {
                    cout << "Khong tim thay doc gia voi ma " << ma << endl;
                }
                break;
            }
            case 4: {
                manager.printAuthors();
                break;
            }
            case 5: {
                return 0;
                break;
            }
            default:
                cout << "Lua chon khong hop le" << endl;
        }
    }

    return 0;
}