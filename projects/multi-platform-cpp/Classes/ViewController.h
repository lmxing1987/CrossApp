//
//  ViewController.h
//  project
//
//  Created by ff on 14-4-16.
//
//

#ifndef __project__ViewController__
#define __project__ViewController__

#include <iostream>
#include "cocos2d.h"

USING_NS_CC;

class ViewController: public CAViewController, public CAScrollViewDelegate
{
    
public:
    
    virtual void viewDidLoad();
    
    virtual void viewDidUnload();
    
    void touchUpInSide();
    
    void touchUpInSide2();
    
    CCLabelTTF* ttf;
    
    bool setAllowsSelection(CAButton* btn, CCPoint point);
    
    void scrollViewDidEndDragging(CAScrollView* view);
};

#endif /* defined(__project__ViewController__) */
