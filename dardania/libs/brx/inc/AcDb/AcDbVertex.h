// Property of Bricsys NV. All rights reserved.
// This file is part of the BRX SDK, and its use is subject to the terms
// of the BRX SDK license agreement.
/////////////////////////////////////////////////////////////////////////
#pragma once

#include "AcDb/AcDbEntity.h"

/** _ */
class BRX_EXPORT AcDbVertex: public AcDbEntity
{
public:
    ACDB_DECLARE_MEMBERS(AcDbVertex);

    AcDbVertex();
    ~AcDbVertex();

protected:
    virtual Adesk::Boolean subWorldDraw(AcGiWorldDraw*);
};
