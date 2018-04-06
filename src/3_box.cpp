#include <iostream>
#include <string>

using namespace std;

struct box {
    string name;
    unsigned int width, height, length;
};

void printBoxes(const box* boxes, unsigned int numOfBoxes){
    for(unsigned int i = 0; i < numOfBoxes; ++i){
        cout << "Name: " << boxes[i].name << " (w: " << boxes[i].width << ", h: " << boxes[i].height << ", l: " << boxes[i].length << ")" << endl;
    }
}

void printBoxData(const box& b){
    unsigned int volume = b.height * b.length * b.width;
    unsigned int surface = 2 * (b.height * b.length + b.height * b.width + b.length * b.width);
    cout << "Name: " << b.name << ", Volume: " << volume << ", Surface: " << surface << endl;
}

void reallocBoxes(box*& boxes, unsigned int& numOfBoxes, unsigned int size){
    box* b = new box[numOfBoxes + size];
    for(unsigned int i = 0; i < numOfBoxes; ++i){
        b[i] = boxes[i];
    }
    delete[] boxes;
    boxes = b;
    numOfBoxes += size;
}

void rotateBox(box& b){
    unsigned int tmp = b.width;
    b.width = b.height;
    b.height = b.length;
    b.length = tmp;
}

unsigned int fit(const box& b1, const box& b2){
    if(b1.height <= b2.height && b1.length <= b2.length && b1.width <= b2.width){
        return (b2.height / b1.height) * (b2.length / b1.length) * (b2.width / b1.width);
    }
    else if(b1.height >= b2.height && b1.length >= b2.length && b1.width >= b2.width){
        return (b1.height / b2.height) * (b1.length / b2.length) * (b1.width / b2.width);
    }
    return 0;
}

unsigned int fit(const box& b, unsigned int w, unsigned int h, unsigned int l){
    return (w / b.width) * (h / b.height) * (l / b.length);
}

int main(){
    cout << "Number of boxes?: ";
    unsigned int numOfBoxes;
    cin >> numOfBoxes;
    box* boxes = new box[numOfBoxes];
    for(unsigned int i = 0; i < numOfBoxes; ++i){
        cout << "Enter box details #" << i+1 << endl;
        cout << "Name: ";
        cin >> boxes[i].name;
        cout << "Width: ";
        cin >> boxes[i].width;
        cout << "Height: ";
        cin >> boxes[i].height;
        cout << "Length: ";
        cin >> boxes[i].length;
    }

    cout << endl;

    cout << "Box details:\n";
    printBoxes(boxes, numOfBoxes);

    cout << endl;

    cout << "Size increment: ";
    unsigned int size;
    cin >> size;
    reallocBoxes(boxes, numOfBoxes, size);
    for(unsigned int i = numOfBoxes - size; i < numOfBoxes; ++i){
        cout << "Enter box details #" << i+1 << endl;
        cout << "Name: ";
        cin >> boxes[i].name;
        cout << "Width: ";
        cin >> boxes[i].width;
        cout << "Height: ";
        cin >> boxes[i].height;
        cout << "Length: ";
        cin >> boxes[i].length;
    }
    cout << "Box details:\n";
    printBoxes(boxes, numOfBoxes);

    delete[] boxes;

    return 0;
}
