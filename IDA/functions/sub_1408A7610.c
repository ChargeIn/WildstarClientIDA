#include "../winhttp.h"

//----- (00000001408A7610) ----------------------------------------------------
_QWORD* __fastcall sub_1408A7610(__int64 a1)
{
	_QWORD* result; // rax
	_BYTE* v2; // rbx

	result = (_QWORD*)(*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 8i64))(a1, 160i64);
	v2 = result;
	if (result)
	{
		*result = off_1409A9ED0;
		sub_1408A7540((__int64)(result + 1));
		v2[25] = 1;
		v2[45] = 1;
		v2[65] = 1;
		v2[85] = 1;
		v2[105] = 1;
		v2[125] = 1;
		result = v2;
		v2[144] = 1;
	}
	return result;
}
// 1409A9ED0: using guessed type __int64 (__fastcall *off_1409A9ED0[6])();

