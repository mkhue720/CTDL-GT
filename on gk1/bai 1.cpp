#include<bits/stdc++.h>
using namespace std;
template <typename T>
class Node
{
	public:
		T elem;
		Node *next;
		Node<T>(){next = NULL;}
		
};
template <typename T>
class Slist{
	public:
		int n;
		Node<T> *head, *trail;
		Slist(){
			head = trail = NULL;
		}
			
		void push_back(T x){
			Node<T> *tmp = new Node<T>();
			tmp->elem = x;
			if (head == NULL){
				head = trail = tmp;		
			}
			else{
				trail->next=tmp;
				trail = tmp;
			}
		}
		
		void push_front(T x){
			Node<T> *tmp = new Node<T>();
			if(head == NULL){
				push_back(x);
			}
			else{
				tmp->elem = x;
				tmp->next = head;
				head = tmp;
			}
		}

		void erase(T x){
			Node<T> *p = head;
			if(head==NULL) {
				cout<<"List rong";
				return;
			}
			while(p->elem!=x) p=p->next;
			if(p==head){
				head=head->next;
			}else
			if(p==trail){
				Node<T> *q=head;
				if(q->next!=NULL){
					while(q->next!=p) q=q->next;
					q->next=NULL;
					trail=q;
				}
			}
			else{
				Node<T> *q=head;
				while(q->next!=p) 
					q=q->next;
				q->next=p->next;
			}
		}

		void PrintList(){
			Node<T> *p=head;
			while(p!=NULL){
				cout<<p->elem<<" ";
				p=p->next;
			}
		}
};

class Point{
	public:
		int x, y;
		Point(){
			x=y=0;
		}
		Point(int t,int m){
			x=t;y=m;
		}
		bool operator!=(const Point& other) const {
        	return x != other.x || y != other.y;
    	}		
		friend ostream& operator<<(ostream &os, Point T){
			os<<"("<<T.x<<","<<T.y<<") ";
			return os;
		}
};

int main(){
	Slist<Point> l;
	Point p1(2,5);
	Point p2(7,25);
	Point p3(86,25);
	l.push_back(p1);
	l.push_back(p2);
	l.push_front(p3);
	// l.erase(p1);
	l.PrintList();
}
