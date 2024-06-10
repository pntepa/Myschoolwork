// Main function for the program

int main() {

Box Box1;
Box Bax2;
Box Box3;
double volume = 0.0;

// box 1 specification

Box1.Setlength(6.0);
Box1.SetBreadth(7.0);
Box1.SetHeight(5.0);

// box 2 specification
Box2.SetLength(12.0);
Box2.SetBreadth(13.0);
Box2.SetHeight(10.0);

// volume of box 1
 volume = Box1.GetVolume();
 std::cout << "Volume of Box1"<< volume<< endl;
 // volume of box 2
 volume = Box2.GetVolume();
 std::cout << "Volume of Box1"<< volume<< endl;
 // volume of box 1
 volume = Box3.GetVolume();
 std::cout << "Volume of Box1"<< volume<< endl;
 return 0;

 }