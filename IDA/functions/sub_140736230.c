#include "../winhttp.h"

//----- (0000000140736230) ----------------------------------------------------
__int64 __fastcall sub_140736230(_QWORD* a1)
{
	__int64 result; // rax
	int v3; // [rsp+38h] [rbp+10h] BYREF

	result = sub_1405B1510(&qword_140C7DFB0);
	if (result)
	{
		v3 = *(_DWORD*)(result + 188);
		return sub_1404339C0(a1, &v3);
	}
	return result;
}
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;

