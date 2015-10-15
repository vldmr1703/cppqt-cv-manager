#include "cv.h"
#include"jobrecord.h"
#include<iostream>


CV::CV(const std::string &name, int birthYear, const std::string &skills, const std::vector<JobRecord> &previousJobs) :
    mName{name}
  , mBirthYear{birthYear}
  , mSkills{skills}
  , mPreviousJobs{previousJobs}
{

}

bool CV::isValid() const
{
    return !mName.empty()
            && ((mBirthYear > 1970) && (mBirthYear < 1995))
            && !mSkills.empty()
            && !mPreviousJobs.empty();
}

void CV::print()const
{
    if (isValid())
    {
        std::cout << mName << " (" << mBirthYear << ")" << std::endl;
        std::cout << "=====================" << std::endl;
        std::cout << "Skills: " << mSkills << std::endl;
        std::cout << "Previous work record: " << std::endl;
        for(const auto &p: mPreviousJobs)
        {
            p.print();
        }
        std::cout << std::endl;
    }
}

void CV::addJobRecord(const JobRecord &p)
{
    mPreviousJobs.push_back(p);
}

std::vector<JobRecord> CV::JobRecords()const
{
    return mPreviousJobs;
}
