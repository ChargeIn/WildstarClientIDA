#include "../winhttp.h"

//----- (00000001402CFFB0) ----------------------------------------------------
_QWORD* __fastcall sub_1402CFFB0(_QWORD* a1, char a2)
{
	__int64 v4; // r9
	__int64 v5; // rcx
	int v6; // r9d
	char* v7; // rcx
	__int64 v8; // rdx
	_QWORD* v10; // rcx
	__int64 v11; // rcx

	if ((a2 & 2) != 0)
	{
		v4 = *((int*)a1 - 2);
		v5 = (v4 << 6) + 32;
		v6 = v4 - 1;
		if (v6 >= 0)
		{
			v7 = (char*)a1 + v5;
			do
			{
				v7 -= 64;
				*((_QWORD*)v7 - 4) = &off_140B62AC0;
				if (*(_QWORD*)v7)
					**(_QWORD**)v7 = *((_QWORD*)v7 + 1);
				v8 = *((_QWORD*)v7 + 1);
				if (v8)
					*(_QWORD*)(v8 + 32) = *(_QWORD*)v7;
				--v6;
				*(_QWORD*)v7 = 0i64;
				*((_QWORD*)v7 + 1) = 0i64;
			} while (v6 >= 0);
		}
		if ((a2 & 1) != 0)
			sub_14018B900((__int64)(a1 - 1), 0);
		return a1 - 1;
	}
	else
	{
		*a1 = &off_140B62AC0;
		v10 = (_QWORD*)a1[4];
		if (v10)
			*v10 = a1[5];
		v11 = a1[5];
		if (v11)
			*(_QWORD*)(v11 + 32) = a1[4];
		a1[4] = 0i64;
		a1[5] = 0i64;
		if ((a2 & 1) != 0)
			sub_14018B900((__int64)a1, 0);
		return a1;
	}
}
// 140B62AC0: using guessed type __int64 (__fastcall *off_140B62AC0)();

