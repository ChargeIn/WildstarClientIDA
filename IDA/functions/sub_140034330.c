#include "../winhttp.h"

//----- (0000000140034330) ----------------------------------------------------
__int64 __fastcall sub_140034330(__int64 a1, void(__fastcall*** a2)(_QWORD), __int64 a3)
{
	__int64 result; // rax
	__int64 v7; // rcx
	int* v8; // rax
	unsigned int v9; // ebx
	__int64 v10; // rax
	int v11; // eax

	result = sub_1400360F0(a1, *(_DWORD*)(a3 + 80));
	if ((int)result >= 0)
	{
		sub_140016E90((_QWORD*)qword_140C635F0);
		v7 = qword_140C635F0;
		*(_QWORD*)(qword_140C635F0 + 5792) = *(_QWORD*)a3;
		sub_140012620(v7, (int*)(a3 + 8));
		*(_DWORD*)(qword_140C635F0 + 5784) = *(_DWORD*)(a3 + 76);
		sub_140016C70();
		*(_QWORD*)(a1 + 88) = a2;
		(**a2)(a2);
		v8 = sub_14018B280(32800i64, 0);
		v9 = 0;
		if (v8)
			v10 = sub_1403E1400((__int64)v8);
		else
			v10 = 0i64;
		*(_QWORD*)(a1 + 96) = v10;
		v11 = sub_1403E7EA0(v10, a2, a3);
		if (v11 < 0)
			return (unsigned int)v11;
		return v9;
	}
	return result;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;

