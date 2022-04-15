#include "../winhttp.h"

//----- (00000001408A7670) ----------------------------------------------------
_BYTE* __fastcall sub_1408A7670(_BYTE* a1)
{
	__int64 v2; // rcx
	_BYTE* result; // rax

	v2 = (__int64)(a1 + 8);
	*(_QWORD*)(v2 - 8) = off_1409A9ED0;
	sub_1408A7540(v2);
	a1[25] = 1;
	a1[45] = 1;
	a1[65] = 1;
	a1[85] = 1;
	a1[105] = 1;
	a1[125] = 1;
	result = a1;
	a1[144] = 1;
	return result;
}
// 1409A9ED0: using guessed type __int64 (__fastcall *off_1409A9ED0[6])();

