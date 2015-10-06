#include <iostream>

// We should keep list of programmers CVs
// For each CV we have
//      * name field
//      * birthday year
//      * list of skills
//      * list of previous jobs
//      * we would like to print our CV

struct CV
{
    char *name;
    int birthYear;
    char *skills;
    char *previousJobs;
};

void printCV(const CV& cv)
{
    std::cout << cv.name << " (" << cv.birthYear << ")" << std::endl;
    std::cout << "=====================" << std::endl;
    std::cout << "Skills: " << cv.skills << std::endl;
    std::cout << "Previous work record: " << cv.previousJobs << std::endl;
    std::cout << std::endl;
}

int main()
{
    CV johnsCV;
    johnsCV.name = "John Jonson";
    johnsCV.birthYear = 1978;
    johnsCV.skills = "C++, Java";
    johnsCV.previousJobs = "IBM 1990-1995; Microsoft 1996-2002";

    CV dansCV {"Dan Davidson", 1988, "C++, Java", "IBM 1996-1997"};

    CV cvList[] {johnsCV, dansCV, {"Will Walker", 1977, "C++, Java", "IBM 1990-1999; Microsoft 1999-2010"} };

    for (const auto& cv: cvList)
    {
        printCV(cv);
    }

    return 0;
}

