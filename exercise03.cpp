#include <iostream>
int volume(int height, int width, int length);

using namespace std;

int volume(int height, int width, int length);

struct box
{
  int height, width, length;

}box1, box2;

int main() {
    
    int totalVolume;
   
    cout << "Enter Box 1 Height : ";
    cin >> box1.height;
    cout << "Enter Box 1 Width : ";
    cin >> box1.width;
    cout << "Enter Box 1 Length : ";
    cin >> box1.length;
    
    cout << "Enter Box 2 Height : ";
    cin >> box2.height;
    cout << "Enter Box 2 Width : ";
    cin >> box2.width;
    cout << "Enter Box 2 Length : ";
    cin >> box2.length;
    
    // 5. Replace the coding below to pass the Box type structure
    totalVolume = volume(height.box1 , width.box1, length.box1 )
             + volume(height.box2 , width.box2, length.box2);
    
    cout << "Volume of Box is " << totalVolume << endl;
    
    return 0;
}

int volume(int height, int width, int length)
{
  return height * width * length;
}
// Implement the functions here
