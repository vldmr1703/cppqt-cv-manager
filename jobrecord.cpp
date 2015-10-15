#include "jobrecord.h"
#include <string>
#include <iostream>

JobRecord::JobRecord(int StartYear,int EndYear,const std::string &JobTitle,const std::string &CompanyName):
    mStartYear{StartYear},mEndYear{EndYear},mJobTitle{JobTitle},mCompanyName{CompanyName}
{

}

bool JobRecord::isValid() const
{
    return !mCompanyName.empty()
            && ((mStartYear > 1960) && (mEndYear > 1995))
            && !mJobTitle.empty();
}

void JobRecord::print()const
{
    std::cout<<"mStartYear "<<mStartYear<<std::endl;
    std::cout<<"mEndYear "<<mEndYear<<std::endl;
    std::cout<<"mJobTitle "<<mJobTitle<<std::endl;
    std::cout<<"mCompanyName "<<mCompanyName<<std::endl;
}
