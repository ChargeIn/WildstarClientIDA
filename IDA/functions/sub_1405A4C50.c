#include "../winhttp.h"

//----- (00000001405A4C50) ----------------------------------------------------
__int64 __fastcall sub_1405A4C50(__int64 a1)
{
	__int64 result; // rax
	__int64 v2; // rcx

	result = sub_1405A4B80(a1, 1);
	if (result)
		return sub_140564760(v2, **(_DWORD**)(result + 112));
	return result;
}
// 1405A4C6D: variable 'v2' is possibly undefined

