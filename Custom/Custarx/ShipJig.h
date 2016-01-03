#include "Stdafx.h"
#include "..\Custdbx\Ship.h"

class ShipJig : public AcEdJig
{
public:
    ShipJig(AcGePoint3d&, AcGePoint3d&);
private:  // данные класса
    AcGePoint3d  m_pt0, m_pt1;
    double m_hw, m_h;
    int mPromptCounter;  // счетчик запросов (0 или 1)
    Ship*  m_pShipObj;
public:
    AcDbObjectId  doIt();
    virtual DragStatus  sampler();
    virtual Adesk::Boolean  update();
    virtual AcDbEntity*  entity() const;
};
