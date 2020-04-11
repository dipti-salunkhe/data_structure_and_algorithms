#include <iostream>
using namespace std;

/*

QUES:
    In Second year Computer Engineering class, set A of students play cricket and set B of students play badminton. Write C/C++ program to find and display-
    i.Set of students who play either cricket or badminton or both
    ii. Set of students who play both cricket and badminton
    iii. Set of students who play only cricket
    iv.Set of students who play only badminton
    v.Set of students who play neither cricket nor badminton
    (Note- While realizing the set duplicate entries are to avoided)

*/
class SetOperations {
    //data members
    int setU;   //universal set
    int * setA;   //set A
    int * setB;   //set B
public:

    //member functions
    void acceptData();
    int findUnion();
    int findIntersection();
    int findA();
    int findB();
    int findNeitherAorB();
};

//function for finding union
int SetOperations :: findUnion() {

    int count = 0;
    cout << endl << " Roll NOS : " ;
    for(int i=1; i<=setU ; i++) {
        if( setA[i]==1 || setB[i]==1){
            count ++;
            //for displaying rollnos
            cout << i << " , ";
        }
    }

    return count;
}

// function for finding intersection
int SetOperations :: findIntersection() {

    int count = 0;
    for(int i=1; i<=setU ; i++) {
        if( setA[i]==1 && setB[i]==1)
            count ++;
cout << i << " , ";
    }

    return count;
}

//function for finding no of elements in setA
int SetOperations :: findA() {

    int count = 0;
    for(int i=1; i<=setU ; i++) {
        if( setA[i]==1 && setB[i]!=1)
            count ++;
cout << i << " , ";
    }

    return count;
}

//function for finding no of elements in setB
int SetOperations :: findB() {

    int count = 0;
    for(int i=1; i<=setU ; i++) {
        if( setA[i]!=1 && setB[i]==1)
            count ++;
cout << i << " , ";
    }

    return count;
}

// function for finding students who play neither sport
int SetOperations :: findNeitherAorB() {

    int count = 0;
    for(int i=1; i<=setU ; i++) {
        if( setA[i]!=1 && setB[i]!=1)
            count ++;
cout << i << " , ";
    }

    return count;
}

void SetOperations ::acceptData(){

    int studentCount,cricketStudentNo,badmintonStudentNo;

    cout << endl << " How many students are in total ? ";
    cin >> studentCount;
    setU = studentCount;

    //creating an array equal to number of sudents
    setA = new int[studentCount];
    setB = new int[studentCount];


    cout << endl << " Enter roll nos of student who play cricket and -1 for exit ";
    //take input till available
    while( cin >> cricketStudentNo) {
        if(cricketStudentNo==-1)
                break;
        setA[cricketStudentNo] = 1;
    }

    cout << endl << " Enter roll nos of student who play badminton and -1 for exit ";
    //take input till available
    while( cin >> badmintonStudentNo) {
        if( badmintonStudentNo==-1)
            break;
        setB[badmintonStudentNo] = 1;
    }

}

// main function starts here
int main() {


    SetOperations computerEngg;     // object of class

    computerEngg.acceptData();
    int ch;

    do {
        cout << endl << "\n\n1. Set of students who play either cricket or badminton or both";
        cout << endl << "2. Set of students who play both cricket and badminton";
        cout << endl << "3. Set of students who play only cricket";
        cout << endl << "4. Set of students who play only badminton";
        cout << endl << "5. Set of students who play neither cricket nor badminton";
        cout << endl << "6. Exit " ;
        cout << endl << "--- >";
        cin >> ch;

        switch (ch) {
        case 1:
            cout << endl <<"Set of students who play either cricket or badminton or both are : ";
            cout << endl << " COUNT : " << computerEngg.findUnion();
            break;
        case 2:
            cout << endl <<"Set of students who play both cricket and badminton are : ";
            cout << computerEngg.findIntersection();
            break;
        case 3:
            cout << endl <<"Set of students who play only cricket are : ";
            cout << computerEngg.findA();
            break;
        case 4:
            cout << endl <<"Set of students who play only badminton are : ";
            cout << computerEngg.findB();
            break;
        case 5:
            cout << endl <<"Set of students who play neither cricket nor badminton are : ";
            cout << computerEngg.findNeitherAorB();
            break;
        case 6:
            break;
        default:
            cout << endl << "You entered wrong choice." ;
        }
    }while(ch!=6);

	return 0;
}
