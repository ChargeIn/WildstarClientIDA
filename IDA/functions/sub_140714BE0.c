#include "../winhttp.h"

//----- (0000000140714BE0) ----------------------------------------------------
__int64 __fastcall sub_140714BE0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
	int* v9; // rax
	__int64 v10; // rbx
	int v11; // esi
	__int64* i; // rax

	v9 = sub_14018B280(112i64, 0);
	v10 = (__int64)v9;
	if (v9)
	{
		*((_QWORD*)v9 + 3) = 0i64;
		*((_QWORD*)v9 + 4) = 0i64;
		*((_QWORD*)v9 + 5) = 0i64;
		*((_QWORD*)v9 + 6) = 0i64;
		*(_QWORD*)v9 = off_140B73C28;
		*((_QWORD*)v9 + 7) = 0i64;
		*((_QWORD*)v9 + 8) = 0i64;
		*((_QWORD*)v9 + 9) = 0i64;
		*((_QWORD*)v9 + 10) = 0i64;
		*((_QWORD*)v9 + 11) = 0i64;
	}
	else
	{
		v10 = 0i64;
	}
	v11 = sub_140782360(v10, a2, a3, a4, a5);
	if (v11 >= 0)
	{
		if (!*(_QWORD*)(v10 + 40))
		{
			for (i = (__int64*)(a1 + 48); *i; i = (__int64*)(*i + 48))
				;
			*(_QWORD*)(v10 + 40) = i;
			*(_QWORD*)(v10 + 48) = 0i64;
			*i = v10;
		}
		return 0i64;
	}
	else
	{
		if (v10)
			(**(void(__fastcall***)(__int64, __int64))v10)(v10, 1i64);
		return (unsigned int)v11;
	}
}
// 140B73C28: using guessed type __int64 (__fastcall *off_140B73C28[20])();

