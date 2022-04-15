#include "../winhttp.h"

//----- (000000014027ADC0) ----------------------------------------------------
__int64 __fastcall sub_14027ADC0(__int64 a1, int a2, int a3, __int64* a4)
{
	int* v9; // rax
	__int64 v10; // rbx
	int v11; // edi

	if (!a4)
		return 2147942487i64;
	v9 = sub_14018B280(88i64, 0);
	v10 = (__int64)v9;
	if (v9)
	{
		*(_QWORD*)v9 = off_140B61CA0;
		*((_QWORD*)v9 + 9) = 0i64;
		*((_QWORD*)v9 + 10) = 0i64;
		v9[12] = 0;
		*((_QWORD*)v9 + 4) = 0i64;
		*((_QWORD*)v9 + 5) = 0i64;
		v9[16] = 0;
		v9[2] = 1;
		*((_QWORD*)v9 + 2) = a1;
		v9[17] = *(_DWORD*)(a1 + 240) - 1;
	}
	else
	{
		v10 = 0i64;
	}
	v11 = sub_14029E630(v10, a2, a3);
	if (v11 >= 0)
	{
		*a4 = v10;
		return 0i64;
	}
	else
	{
		if (v10)
		{
			sub_14029E4A0(v10);
			sub_14018B900(v10, 0);
		}
		return (unsigned int)v11;
	}
}
// 140B61CA0: using guessed type __int64 (__fastcall *off_140B61CA0[9])();

