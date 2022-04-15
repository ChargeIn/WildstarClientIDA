#include "../winhttp.h"

//----- (00000001404B6E50) ----------------------------------------------------
__int64 __fastcall sub_1404B6E50(__int64 a1, unsigned __int64 a2)
{
	__int64 result; // rax
	__int64 v4; // rcx

	result = sub_1405B1510(*(_QWORD**)(qword_140C659F0 + 824));
	if (result)
		return sub_1404C9E20(v4, *(_DWORD*)(result + 188), a2);
	return result;
}
// 1404B6E85: variable 'v4' is possibly undefined
// 140C659F0: using guessed type __int64 qword_140C659F0;

