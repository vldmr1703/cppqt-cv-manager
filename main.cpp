#include <iostream>
#include <string>
#include <array>

// We should keep list of programmers CVs
// For each CV we have
//      * name field
//      * birthday year
//      * list of skills
//      * list of previous jobs
//      * we would like to print our CV

class CV
{
public:
    CV(const std::string &name, int birthYear, const std::string &skills, const std::string &previousJobs) :
        mName{name}
      , mBirthYear{birthYear}
      , mSkills{skills}
      , mPreviousJobs{previousJobs}
    {

    }

    bool isValid() const
    {
        return !mName.empty()
                && ((mBirthYear > 1970) && (mBirthYear < 1995))
                && !mSkills.empty()
                && !mPreviousJobs.empty();
    }

    void print() const
    {
        if (isValid())
        {
            std::cout << mName << " (" << mBirthYear << ")" << std::endl;
            std::cout << "=====================" << std::endl;
            std::cout << "Skills: " << mSkills << std::endl;
            std::cout << "Previous work record: " << mPreviousJobs << std::endl;
            std::cout << std::endl;
        }
    }

private:
    std::string mName;
    int mBirthYear;
    std::string mSkills;
    std::string mPreviousJobs;
};


int main()
{
    CV johnsCV {"John Jonson", 1978,"C++, Java", "IBM 1990-1995; Microsoft 1996-2002"};

    CV dansCV("Dan Davidson", 1988, "C++, Java", "IBM 1996-1997");

    std::array<CV, 3> cvList {johnsCV, dansCV, {"Will Walker", 197, "C++, Java", "IBM 1990-1999; Microsoft 1999-2010"} };

    for (const auto& cv: cvList)
    {
        if (cv.isValid())
        {
            cv.print();
        }
        else
        {
            std::cout << "ERROR: CV is invalid" << std::endl;
        }
    }

    return 0;
}

