#include "../winhttp.h"

//----- (00000001405770F0) ----------------------------------------------------
__int64 __fastcall sub_1405770F0(int** a1, int* a2, int** a3)
{
	int* v6; // rbx
	__int64 result; // rax
	unsigned int v8; // edi
	__int64 v9; // rax
	__int64 v10; // rax

	v6 = sub_14018B280(392i64, 0);
	if (v6)
	{
		*((_QWORD*)v6 + 1) = 0i64;
		*((_QWORD*)v6 + 2) = 0i64;
		*((_QWORD*)v6 + 3) = 0i64;
		*((_QWORD*)v6 + 4) = 0i64;
		*((_QWORD*)v6 + 5) = 0i64;
		*((_QWORD*)v6 + 6) = 0i64;
		*((_QWORD*)v6 + 9) = 0i64;
		*((_QWORD*)v6 + 10) = 0i64;
		*((_QWORD*)v6 + 12) = 0i64;
		*((_QWORD*)v6 + 13) = 0i64;
		v6[14] = 1414420037;
		v6[31] = 0;
		*((_QWORD*)v6 + 18) = 0i64;
		*((_QWORD*)v6 + 19) = 0i64;
		*((_QWORD*)v6 + 21) = 0i64;
		*((_QWORD*)v6 + 22) = 0i64;
		v6[32] = 1414420037;
		*(_QWORD*)(v6 + 49) = 0i64;
		*((_QWORD*)v6 + 26) = 0i64;
		*(_QWORD*)v6 = off_140B74000;
		*((_QWORD*)v6 + 28) = 0i64;
		sub_1407E4830(v6 + 58, 0i64, 0xA0ui64);
	}
	else
	{
		v6 = 0i64;
	}
	result = sub_14071FAD0((__int64)v6, a2);
	v8 = result;
	if ((int)result >= 0)
	{
		if (!*((_QWORD*)v6 + 3))
		{
			*((_QWORD*)v6 + 3) = a1;
			*((_QWORD*)v6 + 4) = *a1;
			*a1 = v6;
			v9 = *((_QWORD*)v6 + 4);
			if (v9)
				*(_QWORD*)(v9 + 24) = v6 + 8;
		}
		if (a3 && !*((_QWORD*)v6 + 1))
		{
			*((_QWORD*)v6 + 1) = a3;
			*((_QWORD*)v6 + 2) = *a3;
			*a3 = v6;
			v10 = *((_QWORD*)v6 + 2);
			if (v10)
				*(_QWORD*)(v10 + 8) = v6 + 4;
		}
	}
	else
	{
		if (!v6)
			return result;
		(**(void(__fastcall***)(int*, __int64))v6)(v6, 1i64);
	}
	return v8;
}
// 140B74000: using guessed type __int64 (__fastcall *off_140B74000[11])();

