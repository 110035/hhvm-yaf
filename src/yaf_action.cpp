/*===========================================
*   Copyright (C) 2014 All rights reserved.
*   
*   company      : xiaomi
*   author       : root
*   email        : root@xiaomi.com
*   date         ：2014-12-13 09:48:47
*   description  ：
*
=============================================*/
//#include "ext_example.h"
#include "hphp/runtime/base/base-includes.h"
#include "hphp/runtime/ext/extension.h"
#include "ext_yaf.h"

namespace HPHP { 

static Variant HHVM_METHOD(Yaf_Action_Abstract, getController)
{
    auto _controller = this_->o_realProp("_controller", 
            ObjectData::RealPropUnchecked, "Yaf_Action_Abstract");
    if (_controller->isNull()) {
        return *_controller;
    }
    
    return _controller->toObject();
}



void YafExtension::_initYafActionClass()
{
    HHVM_ME(Yaf_Action_Abstract, getController);
    //HHVM_ME(Yaf_Action_Abstract, __construct);
}

}
