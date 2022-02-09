#include "../include/dispatchCall.h"

void dispatchCall(Employees &employeeorg)
{
        vector<bool> respondents=employeeorg.getrespondentAllocation();
       auto respondentFound=find(respondents.begin(),respondents.end(),true);
       if(respondentFound!=respondents.end())
       {
          employeeorg.setRespondentUnavailable(respondentFound-respondents.begin());
           cout<<"Respondent "<<respondentFound-respondents.begin()<<" will solve your queries"<<endl;
        //    employeeorg.getRespondents();
        //    exit(1);
       } 
       else
       {
           cout<<"Calling..."<<endl;
           vector<bool> managers=employeeorg.getmanagerAllocation();
           auto managerFound=find(managers.begin(),managers.end(),true);
           if(managerFound!=managers.end())
           {
               
               employeeorg.setManagerUnavailable(managerFound-managers.begin());
               cout<<"Sorry to keep you waiting. Manger "<<managerFound-managers.begin()<<" will solve your queries"<<endl;
            //    exit(1);
           }
           else
           {
               cout<<"Calling..."<<endl;
               vector<bool> directors=employeeorg.getdirectorAllocation();
               auto directorFound=find(directors.begin(),directors.end(),true);
               if(directorFound!=directors.end())
               {
                   employeeorg.setDirectorUnavailable(directorFound-directors.begin());
                   cout<<"Sorry to keep you waiting. Director "<<directorFound-directors.begin()<<" will solve your queries"<<endl;
               }
               else
               {
                   cout<<"Sorry our executives are busy at this moment.Please call again later."<<endl;
                //    exit(1);
               }
           }
       }
}