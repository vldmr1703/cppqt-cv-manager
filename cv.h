#ifndef CV_H
#define CV_H
#include"jobrecord.h"
#include<vector>

class CV
{
private:
    std::string mName;
    int mBirthYear;
    std::string mSkills;
    std::vector<JobRecord> mPreviousJobs;
public:
    CV(const std::string &name, int birthYear, const std::string &skills, const std::vector<JobRecord> &previousJobs);
    bool isValid() const;
    void print() const;
    void addJobRecord(const JobRecord &p);
    std::vector<JobRecord> JobRecords()const;
};
#endif
