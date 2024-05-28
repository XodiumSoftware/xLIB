// Property of Bricsys NV. All rights reserved.
// This file is part of the BRX SDK, and its use is subject to the terms
// of the BRX SDK license agreement.
/////////////////////////////////////////////////////////////////////////
#pragma once

#include "AcRx/AcRxObject.h"

/** _ */
class BRX_IMPORTEXPORT AcDbEmbeddedASMEntPropsPE : public AcRxObject
{
public:
    ACRX_DECLARE_MEMBERS(AcDbEmbeddedASMEntPropsPE);

    virtual void setIsEmbeddedEnt(AcDbObject*, bool = true);
};
