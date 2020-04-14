#include<iostream>
#include<vector>
// https://www.techiedelight.com/initialize-vector-cpp/
using namespace std;

int main(){
	int arr[3] = {1,3,4}; 

	//vector<Type> VectorName(Size);
	//vector<Type> VectorName;
	vector<int> v0(4); // default value of elements in 0
	for (auto i = v0.begin(); i!=v0.end(); ++i )
		cout<< *i << endl;
	// vector<int> v01(); Wrong syntax: no parenthesis needed
	vector<int> v02;

	//vector<Type> VectorName(size, value);

	vector<int> v01(3,0);
	cout<<v01[2]<<endl;

	//vector<Type> VEctorName {v1, v2, v3, ...};
	//vector<Type VEctorName = {v1, v2, v3, ...};
	vector<int> v2 = {1,2,3,4};

	//  copy a vector custom 
	// vector<Type> VectorName(arr, arr+(sizeof(arr)/sizeof(int)))
	// vector<Type> VectorName(another vector)
	// vector<Type> VectorName(anothervector.begin(), another.end())
	// vector<Type> VectorName(iterator, anotheriterator)


	vector<int> v3(v2);
	vector<int> v4(v2.begin(),v2.begin()+2);

	// update a vector by assigning just like int j; j=2; j=somevariable;
	// by range: assign(InputIterator first, InputIterator last) 
	// by fill: assign(n, value)
	// by initializer list: assign(initializerlist)
	vector<int> new_vector;
	new_vector.assign(v2.begin(), v2.end());
	new_vector.assign(3, 100);	
	// new_vector.assign(v2);	wrong syntax
	new_vector = v2;
	new_vector.assign({1,2,3});

	vector<int> v1;
	for (int i=1; i<=5; i++)
		v1.push_back(i);

	cout << " begin and end: ";
	for (auto i = v1.begin(); i!=v1.end(); ++i)
			cout << *i<< " ";// dereferencing the pointer

// end is after the last element in a vector

// enter forloop
// statement1
// condition1
// insidefor loop 
// statement2 i++ ++i
// condition1
	cout << endl;
	// cout << *v1.end()<<"lala end of vector\n";
	// cout << " using cbegin and cend: ";
	// 
	for (auto i = v1.begin(), x=v1.begin(); x!= v1.end(); i++){
		x = i;
		cout << *x <<" "<< *i << " ";
	}

	cout << "\n using end and begin: ";
	for (auto i = v1.end()-1; i != v1.begin()-1; i--)
		cout << *i << " ";

	cout << "\n using rbegin and rend: ";
	for (auto i = v1.rbegin(); i != v1.rend(); ++i)
		cout << *i << " ";

	cout << "\n capacity: " << v1.capacity();
	cout << "\n size: " << v1.size();
	cout << "\n max_size: " << v1.max_size();

	// resize is different that assign, as it resizes the same vector
	v1.resize(13, 20);

	cout << "\n new size: " << v1.size()<<endl;

	cout<< v1[4]<<"element at 5th place using operator just like array indexing"<<endl;

	// cout<<"\n element at 24"<<v1.at(24)<<endl;
	cout<<"\n element at 2: "<<v1.at(2)<<endl;

	cout<<"back gives last element: "<< v1.back()<<endl;

	// .data() converts vector into array
	int *p = v1.data();

	// vectorName.push_back(val);
	v1.push_back(6);
	cout << v1.back()<< endl;

	// #pops the last element
	// vectorName.pop_back();
	v1.pop_back();
	cout <<"check last element after pop back: "<< v1.back()<< endl;
	//  what hyappens if you pop back on empty vector?
	// just dont pop back on empty vector cause of unexpected behaviour
	auto ve = v1;
	ve.clear();
	// ve.pop_back();
	cout <<"\n pop back on empty vector: "<< ve.back()<< endl;//don't back on empty vector
	cout <<"\n check empty vector size: "<< ve.size()<< endl;


	// erase at a position 
	// vectorName.erase(iterator)
	v1.erase(v1.begin()+1);
	cout<< "\n size of v1 vector after erasing "<< v1.size()<<endl;
	// v1.erase(v1.end()); cannot delete as it is out of range

	// erase or range by giving the iterators
	// the range includes first and last but one 
	// vectorName.erase(first iterator, last iterator)
	v1.erase(v1.begin()+6, v1.begin()+8);

	cout<< "\n size of v1 vector after erasing "<< v1.size()<<endl;

	// insert
	// single element: vectorName.insert(iterator, val);
	// v1.insert(v1.begin()+r, val); inserts at rth position, check v1[r]
	v1.insert(v1.begin()+3, 44);
	cout<<" check 3rd position of v1: "<< v1[3]<< endl;
	cout<<" check 4th position of v1: "<< v1[4]<< endl;

	//to insert at the back use push_back
	
	// cout<<v1<<endl;
	//  fill: vectorName.insert(iterator,n, val);
	v1.insert(v1.begin(), 5, 99);
	cout<< "insert 5 elements: "<<v1[0]<<"till 5th "<< v1[4]<<endl;
	//  range: vectorName.insert(iterator,other firstIterator, other lastIterator);
	v1.insert(v1.begin(), v2.begin(), v2.end());

	cout<<"insret using other range of iterators: "<< v1[0]<<" "<<v1[3]<<" "<<v1[4]<< endl;

	// list: vectorName.insert(iterator, initialiser list); 

	v1.insert(v1.begin(), {8,5,11});
	cout<<"insert using initialiser list"<<v1[0]<<" "<< v1[2]<<" "<<v1[3]<<endl;



}



