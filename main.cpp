#include <iostream>
#include <string>
#include <vector>
#include<cv.h>

int main()
{
    JobRecord johns(1990,1995," developer","IBM");
    JobRecord johns1(1995,1999," junior developer","IBM");
    CV johnsCV ("John Jonson", 1978,"C++, Java",{johns});
    johnsCV.addJobRecord(johns1);
    JobRecord dans{1996,1997,"senior software developer","IBM "};
    CV dansCV("Dan Davidson", 1988, "C++, Java",{dans});
    JobRecord wills{1990,1999,"developer","IBM"};
    JobRecord wills1{1999,2010,"junior deloper", "Microsoft"};
    std::vector<CV> cvList {johnsCV, dansCV, {"Will Walker", 1979, "C++, Java",{wills,wills1}} };
    for(const auto &cv:cvList)
        if(cv.isValid())
        {
            cv.print();
        }
        else
        {
            std::cout << "ERROR: CV is invalid" << std::endl;
        }
    std::vector<JobRecord> list{johnsCV.JobRecords()};
    for(const auto &l:list)
        if(l.isValid())
        {
            l.print();
        }

    return 0;
}

