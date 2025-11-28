#include <iostream>
using namespace std;

class samsung
{
public:
    int speaker;
    int mic;
};

class samsungS2 : public samsung
{
public: // make members accessible in main
    int camera;
    int screen;
};

int main()
{
    samsung a1, a2;
    samsungS2 s2;

    s2.speaker = 2;
    s2.mic = 1;
    s2.camera = 108;
    s2.screen = 6;

    cout << "Speaker: " << s2.speaker << endl;
    cout << "Mic: " << s2.mic << endl;
    cout << "Camera: " << s2.camera << " MP" << endl;
    cout << "Screen: " << s2.screen << " inch" << endl;

    return 0;
}
