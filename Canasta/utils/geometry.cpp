#include "geometry.h"

Geometry::Geometry()
{
    mMainWindowWidth = 1280;
    mMainWindowHeight = 720;
    mMainWindowRatio = (double)mMainWindowWidth / (double)mMainWindowHeight;
    mMainFrameWidth = 1276;
    mMainFrameHeight = 716;
    mMainFrameRatio = (double)mMainFrameWidth / (double)mMainFrameHeight;
}

unsigned int Geometry::getMainWindowWidth() {
    return mMainWindowWidth;
}

unsigned int Geometry::getMainWindowHeight() {
    return mMainWindowHeight;
}

unsigned int Geometry::getMainFrameWidth() {
    return mMainFrameWidth;
}

unsigned int Geometry::getMainFrameHeight() {
    return mMainFrameHeight;
}

unsigned int Geometry::getMainFramePositionX() {
    return mMainFramePositionX;
}

unsigned int Geometry::getMainFramePositionY() {
    return mMainFramePositionY;
}

void Geometry::updateSize(unsigned int aWidth, unsigned int aHeight) {
    mMainWindowWidth = aWidth;
    mMainWindowHeight = aHeight;
    mMainWindowRatio = (double)mMainWindowWidth / (double)mMainWindowHeight;
    if (mMainWindowRatio > mMainFrameRatio) {
        mMainFrameHeight = mMainWindowHeight - 4;
        mMainFrameWidth = mMainFrameHeight * mMainFrameRatio;
        mMainFramePositionX = (mMainWindowWidth - mMainFrameWidth) / 2;
        mMainFramePositionY = 2;
    }
    else {
        mMainFrameWidth = mMainWindowWidth - 4;
        mMainFrameHeight = mMainFrameWidth / mMainFrameRatio;
        mMainFramePositionX = 2;
        mMainFramePositionY = (mMainWindowHeight - mMainFrameHeight) / 2;
    }
}
