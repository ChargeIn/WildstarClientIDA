#include "../winhttp.h"

//----- (0000000140898BD0) ----------------------------------------------------
__int64 __fastcall sub_140898BD0(__int64 a1)
{
	unsigned __int64 v2; // rbx
	__int64 v3; // rbx
	__int64 result; // rax

	v2 = (unsigned int)((*(_DWORD*)(a1 + 8) - *(_DWORD*)a1) / 24);
	if (v2 >= *(unsigned int*)(a1 + 16) && !sub_1408992A0((__int64*)a1, 1) || v2 >= *(unsigned int*)(a1 + 16))
		return 0i64;
	v3 = *(_QWORD*)(a1 + 8);
	if (v3)
	{
		sub_14087B9A0(*(_QWORD**)(a1 + 8));
		*(_DWORD*)(v3 + 12) = -1;
		*(_QWORD*)v3 = off_1409A9830;
		*(_QWORD*)(v3 + 16) = 0i64;
	}
	result = *(_QWORD*)(a1 + 8);
	*(_QWORD*)(a1 + 8) = result + 24;
	return result;
}
// 1409A9830: using guessed type __int64 (__fastcall *off_1409A9830[7])();

