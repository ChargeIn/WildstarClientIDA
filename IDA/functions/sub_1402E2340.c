#include "../winhttp.h"

//----- (00000001402E2340) ----------------------------------------------------
__int64 __fastcall sub_1402E2340(__int64 a1, int* a2, int** a3)
{
	int* v7; // rax
	int* v8; // rbx
	int v9; // edi
	int* v10; // [rsp+38h] [rbp+10h] BYREF

	if ((unsigned int)*a2 >= 0x80 || (unsigned int)a2[1] >= 0x80 || !a3)
		return 2147942487i64;
	if ((unsigned int)sub_1402DD480(a1 + 40, (__int64)a2, &v10))
	{
		v8 = v10;
		(**(void(__fastcall***)(int*))v10)(v10);
	}
	else
	{
		v7 = sub_14018B280(2136i64, 1u);
		v8 = v7;
		if (!v7)
			return 2147942414i64;
		*(_QWORD*)v7 = off_140B63840;
		*((_QWORD*)v7 + 260) = 0i64;
		*((_QWORD*)v7 + 261) = 0i64;
		*((_QWORD*)v7 + 262) = 0i64;
		*((_QWORD*)v7 + 263) = 0i64;
		*((_QWORD*)v7 + 264) = 0i64;
		*((_QWORD*)v7 + 265) = 0i64;
		*((_QWORD*)v7 + 266) = 0i64;
		*((_QWORD*)v7 + 2) = 0i64;
		*((_QWORD*)v7 + 3) = 0i64;
		v7[2] = 1;
		sub_1407E4830(v7 + 8, 0i64, 0x800ui64);
		v9 = sub_1402E94F0(v8, a1, a2);
		if (v9 < 0)
		{
			sub_1402E93B0((__int64)v8);
			sub_14018B900((__int64)v8, 0);
			return (unsigned int)v9;
		}
	}
	*a3 = v8;
	return 0i64;
}
// 140B63840: using guessed type __int64 (__fastcall *off_140B63840[29])();

