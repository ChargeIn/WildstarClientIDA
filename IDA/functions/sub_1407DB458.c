#include "../winhttp.h"

//----- (00000001407DB458) ----------------------------------------------------
void __fastcall __noreturn sub_1407DB458(char* a1)
{
	__int64 pExceptionObject[5]; // [rsp+20h] [rbp-28h] BYREF
	char* v2; // [rsp+50h] [rbp+8h] BYREF

	v2 = a1;
	sub_1407E1A38((__int64)pExceptionObject, &v2);
	pExceptionObject[0] = (__int64)&std::out_of_range::`vftable';
		CxxThrowException(pExceptionObject, (_ThrowInfo*)&_TI3_AVout_of_range_std__);
}
// 14095BF58: using guessed type void *std::out_of_range::`vftable';

