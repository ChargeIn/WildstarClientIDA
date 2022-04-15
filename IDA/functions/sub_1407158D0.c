#include "../winhttp.h"

//----- (00000001407158D0) ----------------------------------------------------
__int64 __fastcall sub_1407158D0(__int64 a1, int a2, __int64 a3, __int64 a4)
{
	int* v8; // rax
	__int64 v9; // rbx
	int v10; // esi
	__int64* i; // rax

	v8 = sub_14018B280(80i64, 0);
	v9 = (__int64)v8;
	if (v8)
	{
		*((_QWORD*)v8 + 3) = 0i64;
		*((_QWORD*)v8 + 4) = 0i64;
		*((_QWORD*)v8 + 5) = 0i64;
		*((_QWORD*)v8 + 6) = 0i64;
		*(_QWORD*)v8 = off_140B73BC8;
	}
	else
	{
		v9 = 0i64;
	}
	v10 = sub_140782EA0(v9, a2, a3, a4);
	if (v10 >= 0)
	{
		if (!*(_QWORD*)(v9 + 40))
		{
			for (i = (__int64*)(a1 + 48); *i; i = (__int64*)(*i + 48))
				;
			*(_QWORD*)(v9 + 40) = i;
			*(_QWORD*)(v9 + 48) = 0i64;
			*i = v9;
		}
		return 0i64;
	}
	else
	{
		if (v9)
			(**(void(__fastcall***)(__int64, __int64))v9)(v9, 1i64);
		return (unsigned int)v10;
	}
}
// 140B73BC8: using guessed type __int64 (__fastcall *off_140B73BC8[32])();

