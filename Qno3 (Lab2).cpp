# include <iostream>
using namespace std;
void insertAtBottom(int items[],int size,int elements, int new_item){
	if(elements>=size){
		cout << "Array is full.New Item Cannot Insert" << endl;
		return;
	}
	items[5] = new_item;
}
void printItems(int items[],int elements){
	for(int i=0; i<=elements; i++){
		cout << items[i] << " ";
	}
	cout << endl;
}
int main(){
	int size = 10;
	int items[size] ={3,5,7,9,11};
	int elements = 5;
	int new_item;
	cout << " Enter Insert Item: ";
	cin >> new_item;
	insertAtBottom(items,size,elements,new_item);
	cout << "Array After Inserting the New Item at Bottom: ";
	printItems(items,elements);
	return 0;
}