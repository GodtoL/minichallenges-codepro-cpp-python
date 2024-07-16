# include <iostream>

class Point2D{
    public:
    Point2D(int X, int Y): X(X), Y(Y){};
    int X;
    int Y;
    void showCoordinates(){
        std::cout << "Las denadas son: " << X << "," << Y;
    }
};

int main(){
    Point2D Point2De(2 , 15);
    Point2De.showCoordinates();

    return 0;
}