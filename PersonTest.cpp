//
//#include "Person.h"

//int main() {
//	//Test Constructor ver 1
//	Person Son(1, "Cao Thanh Son", "08/04/94", "Modor");
//	Son.Set_name("Mother of god");
//	Son.Set_dOB("01/01/01");
//	Son.Set_address("Jerusalem");
//	Son.Print();
//	
//	//Test constructor ver 2
//	int tempId = Son.Get_id()+1;
//	string tempName = Son.Get_name();
//	string tempDOB = Son.Get_dOB();
//	string tempAddress = Son.Get_address();
//	
//	Person SonClone(tempId,
//									tempName, 
//									tempDOB, 
//									tempAddress);
//									
//	SonClone.Print();
//	
//	Person SonClone0 = Son;
//	SonClone0.Print();
//	
//	Person *SonClonePointer;
//	SonClonePointer = &Son;
//	
//	SonClonePointer->Print();
//	SonClonePointer->Set_name("The new God");
//	Son.Print();
//	
//	delete SonClonePointer;
//	
//	return 0;
//}
