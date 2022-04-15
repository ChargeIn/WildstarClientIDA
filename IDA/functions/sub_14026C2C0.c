#include "../winhttp.h"

//----- (000000014026C2C0) ----------------------------------------------------
__int64 __fastcall sub_14026C2C0(__int64 a1, __int64 a2, __int64* a3)
{
	int* v6; // rax
	__int64 v7; // rbx

	if (a3)
	{
		v6 = sub_14018B280(200i64, 0);
		if (v6)
			v7 = sub_140298630((__int64)v6, a1);
		else
			v7 = 0i64;
		if (a2)
		{
			*(_QWORD*)(v7 + 56) = a2;
			(*(void(__fastcall**)(__int64))(*(_QWORD*)a2 + 8i64))(a2);
			*(_DWORD*)(v7 + 160) = 0;
			*a3 = v7;
			return 0i64;
		}
		if (v7)
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v7 + 16i64))(v7, 1i64);
	}
	return 2147942487i64;
}

