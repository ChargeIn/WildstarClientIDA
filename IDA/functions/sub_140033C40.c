#include "../winhttp.h"

//----- (0000000140033C40) ----------------------------------------------------
__int64 __fastcall sub_140033C40(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rbx
	int v4; // esi
	__int64 result; // rax

	if (!*(_QWORD*)(a1 + 104))
	{
		v2 = sub_14018B280(264i64, 0);
		if (v2)
			v3 = sub_1400367F0((__int64)v2);
		else
			v3 = 0i64;
		v4 = sub_140036BF0(v3);
		if (v4 < 0)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
			return (unsigned int)v4;
		}
		*(_QWORD*)(a1 + 104) = v3;
	}
	result = sub_140048100(a1, *(_QWORD*)(a1 + 104), 1);
	if ((int)result >= 0)
	{
		*(_DWORD*)(a1 + 96) = 1;
		return 0i64;
	}
	return result;
}

