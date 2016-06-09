//
//  LevelLayer.hpp
//  jump
//
//  Created by zwj on 16/6/9.
//
//

#ifndef LevelLayer_hpp
#define LevelLayer_hpp

#include <stdio.h>
#include "cocos2d.h"
#include "SpriteManager.hpp"


USING_NS_CC;

class LevelLayer:public Layer
{

public:
    int indexLevel;
    SpriteManager* sh;
    
    virtual bool init();
    
    static LevelLayer* create();
    


};
#endif /* LevelLayer_hpp */
