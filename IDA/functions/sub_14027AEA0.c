#include "../winhttp.h"

//----- (000000014027AEA0) ----------------------------------------------------
__int64 __fastcall sub_14027AEA0(__int64 a1, int a2, int a3, int a4, __int64* a5)
{
	int* v10; // rax
	__int64 v11; // rbx
	int v12; // edi

	if (!a5)
		return 2147942487i64;
	v10 = sub_14018B280(96i64, 0);
	v11 = (__int64)v10;
	if (v10)
	{
		*(_QWORD*)v10 = off_140B61CF0;
		*((_QWORD*)v10 + 10) = 0i64;
		*((_QWORD*)v10 + 11) = 0i64;
		v10[9] = 0;
		*((_QWORD*)v10 + 5) = 0i64;
		*((_QWORD*)v10 + 6) = 0i64;
		v10[17] = 0;
		v10[2] = 1;
		*((_QWORD*)v10 + 2) = a1;
		v10[18] = *(_DWORD*)(a1 + 240) - 1;
	}
	else
	{
		v11 = 0i64;
	}
	v12 = sub_14029F460(v11, a2, a3, a4);
	if (v12 >= 0)
	{
		*a5 = v11;
		return 0i64;
	}
	else
	{
		if (v11)
		{
			sub_14029F2D0(v11);
			sub_14018B900(v11, 0);
		}
		return (unsigned int)v12;
	}
}
// 140B61CF0: using guessed type __int64 (__fastcall *off_140B61CF0[9])();

