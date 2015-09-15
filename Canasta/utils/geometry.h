#ifndef GEOMETRY_H
#define GEOMETRY_H


class Geometry
{
public:
    Geometry();
    unsigned int getMainWindowWidth();
    unsigned int getMainWindowHeight();
    unsigned int getMainFrameWidth();
    unsigned int getMainFrameHeight();
    unsigned int getMainFramePositionX();
    unsigned int getMainFramePositionY();
    void updateSize(unsigned int aWidth, unsigned int aHeight);

private:
    unsigned int mMainWindowWidth;
    unsigned int mMainWindowHeight;
    double mMainWindowRatio;
    unsigned int mMainFrameWidth;
    unsigned int mMainFrameHeight;
    double mMainFrameRatio;
    unsigned int mMainFramePositionX;
    unsigned int mMainFramePositionY;
};

#endif // GEOMETRY_H
