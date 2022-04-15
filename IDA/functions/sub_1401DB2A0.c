#include "../winhttp.h"

//----- (00000001401DB2A0) ----------------------------------------------------
__int64 __fastcall sub_1401DB2A0(__int64 a1, __int64 a2, __int64* a3)
{
	int* v6; // rax
	__int64 v7; // rbx
	int v8; // edi

	v6 = sub_14018B280(3200i64, 0);
	if (v6)
		v7 = sub_1401DF340((__int64)v6);
	else
		v7 = 0i64;
	v8 = (*(__int64(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v7 + 24i64))(v7, a1, a2);
	if (v8 >= 0)
	{
		*a3 = v7;
		return 0i64;
	}
	else
	{
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v7 + 360i64))(v7, 1i64);
		return (unsigned int)v8;
	}
}

