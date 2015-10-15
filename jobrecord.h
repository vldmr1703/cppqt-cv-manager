#ifndef JOBRECORD_H
#define JOBRECORD_H
#include<string>

class JobRecord
{
private:
    int mStartYear;
    int mEndYear;
    std::string mJobTitle;
    std::string mCompanyName;
public:
    JobRecord(int mStartYear,int mEndYear,const std::string &mJobTitle,const std::string &mCompanyName);
    bool isValid()const;
    void print()const;
};

#endif
