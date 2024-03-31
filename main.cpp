#include <iostream>

bool Continue(const std::string& str)
{
    if (str == "yes" || str == "y")
    {
        return true;
    }
    else
    {
        return false;
    }
}

int CalculateTime (int StartHour, int StartMinute, int EndHour, int EndMinute, int Break)
{
    int StartTime = (StartHour * 60) + StartMinute;
    int EndTime = (EndHour * 60) + EndMinute;
    int GrossTime = EndTime - StartTime - Break;
    return GrossTime;
}

int main() {
    std::string FirstName;
    std::string LastName;
    int DayDate;
    int MonthDate;
    int YearDate;
    std::string ContinueCheck;
    std::string Yes = "yes";
    int StartingHour;
    int StartingMinute;
    int EndingHour;
    int EndingMinute;
    int SumTime{};
    int TempTime;
    int BreakTime;

//    std::cout << "Welcome to the Masman Timesheet Calculator!" << std::endl;
//    std::cout << "What is your first name?" << std::endl;
//    std::cin >> FirstName;
//    std::cout << "Great! Now, what is your last name?" << std::endl;
//    std::cin >> LastName;
//    std::cout << "What is today's day date? (DD)" << std::endl;
//    std::cin >> DayDate;
//    std::cout << "What is today's month? (MM)" << std::endl;
//    std::cin >> MonthDate;
//    std::cout << "What is today's year? (YYYY)" << std::endl;
//    std::cin >> YearDate;
    std::cout << "Did you work on Monday? (Yes/No)" << std::endl;
    std::cin >> ContinueCheck;

    if (Continue(ContinueCheck))
    {
        std::cout << "What time did you start? (hour minute)" << std::endl;
        std::cin >> StartingHour >> StartingMinute;
        std::cout << "What time did you finish? (hour minute)" << std::endl;
        std::cin >> EndingHour >> EndingMinute;
        std::cout << "How long was your break? (minutes)" << std::endl;
        std::cin >> BreakTime;
        TempTime = CalculateTime(StartingHour, StartingMinute, EndingHour, EndingMinute, BreakTime);
        SumTime += TempTime;
    }

    std::cout << "Did you work on Tuesday? (Yes/No)" << std::endl;
    std::cin >> ContinueCheck;

    if (Continue(ContinueCheck))
    {
        std::cout << "What time did you start? (hour minute)" << std::endl;
        std::cin >> StartingHour >> StartingMinute;
        std::cout << "What time did you finish? (hour minute)" << std::endl;
        std::cin >> EndingHour >> EndingMinute;
        std::cout << "How long was your break? (minutes)" << std::endl;
        std::cin >> BreakTime;
        TempTime = CalculateTime(StartingHour, StartingMinute, EndingHour, EndingMinute, BreakTime);
        SumTime += TempTime;
    }

    std::cout << "Did you work on Wednesday? (Yes/No)" << std::endl;
    std::cin >> ContinueCheck;

    if (Continue(ContinueCheck))
    {
        std::cout << "What time did you start? (hour minute)" << std::endl;
        std::cin >> StartingHour >> StartingMinute;
        std::cout << "What time did you finish? (hour minute)" << std::endl;
        std::cin >> EndingHour >> EndingMinute;
        std::cout << "How long was your break? (minutes)" << std::endl;
        std::cin >> BreakTime;
        TempTime = CalculateTime(StartingHour, StartingMinute, EndingHour, EndingMinute, BreakTime);
        SumTime += TempTime;
    }

    std::cout << "Did you work on Thursday? (Yes/No)" << std::endl;
    std::cin >> ContinueCheck;

    if (Continue(ContinueCheck))
    {
        std::cout << "What time did you start? (hour minute)" << std::endl;
        std::cin >> StartingHour >> StartingMinute;
        std::cout << "What time did you finish? (hour minute)" << std::endl;
        std::cin >> EndingHour >> EndingMinute;
        std::cout << "How long was your break? (minutes)" << std::endl;
        std::cin >> BreakTime;
        TempTime = CalculateTime(StartingHour, StartingMinute, EndingHour, EndingMinute, BreakTime);
        SumTime += TempTime;
    }

    std::cout << "Did you work on Friday? (Yes/No)" << std::endl;
    std::cin >> ContinueCheck;

    if (Continue(ContinueCheck))
    {
        std::cout << "What time did you start? (hour minute)" << std::endl;
        std::cin >> StartingHour >> StartingMinute;
        std::cout << "What time did you finish? (hour minute)" << std::endl;
        std::cin >> EndingHour >> EndingMinute;
        std::cout << "How long was your break? (minutes)" << std::endl;
        std::cin >> BreakTime;
        TempTime = CalculateTime(StartingHour, StartingMinute, EndingHour, EndingMinute, BreakTime);
        SumTime += TempTime;
    }

    std::cout << "Did you work on Saturday? (Yes/No)" << std::endl;
    std::cin >> ContinueCheck;

    if (Continue(ContinueCheck))
    {
        std::cout << "What time did you start? (hour minute)" << std::endl;
        std::cin >> StartingHour >> StartingMinute;
        std::cout << "What time did you finish? (hour minute)" << std::endl;
        std::cin >> EndingHour >> EndingMinute;
        std::cout << "How long was your break? (minutes)" << std::endl;
        std::cin >> BreakTime;
        TempTime = CalculateTime(StartingHour, StartingMinute, EndingHour, EndingMinute, BreakTime);
        SumTime += TempTime;
    }

    std::cout << "Total hours worked: " << SumTime/60 << std::endl;
    std::cout << "Total minutes worked: " << SumTime % 60 << std::endl;

    return 0;
}
