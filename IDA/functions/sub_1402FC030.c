#include "../winhttp.h"

//----- (00000001402FC030) ----------------------------------------------------
__int64 __fastcall sub_1402FC030(_QWORD* a1, int a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
	__int64 v6; // rax
	int* v11; // rcx
	int** v12; // rbx
	__int64 v13; // rax
	__int64 v15; // rcx
	int v16[6]; // [rsp+20h] [rbp-18h] BYREF

	v6 = *a1;
	v16[0] = 0;
	if ((*(unsigned int(__fastcall**)(_QWORD*, int*, _QWORD))(v6 + 16))(a1, v16, 0i64))
	{
		v15 = a1[212];
		if (v15)
		{
			while (*(_DWORD*)v15 != a2
				|| *(_DWORD*)(v15 + 4) != a3
				|| *(_QWORD*)(v15 + 16) != a4
				|| *(_QWORD*)(v15 + 24) != a5
				|| *(_QWORD*)(v15 + 32) != a6)
			{
				v15 = *(_QWORD*)(v15 + 120);
				if (!v15)
					return 2147943568i64;
			}
			sub_1402F3700((_QWORD*)v15);
			return 0i64;
		}
		else
		{
			return 2147943568i64;
		}
	}
	else
	{
		v11 = sub_14018B280(64i64, 0);
		if (v11)
		{
			*(_QWORD*)v11 = &off_140B64078;
			*((_QWORD*)v11 + 2) = 0i64;
			*((_QWORD*)v11 + 3) = 0i64;
			*((_QWORD*)v11 + 1) = a1;
			v12 = (int**)(a1 + 9);
			if (!*((_QWORD*)v11 + 2))
			{
				*((_QWORD*)v11 + 2) = v12;
				*((_QWORD*)v11 + 3) = *v12;
				*v12 = v11;
				v13 = *((_QWORD*)v11 + 3);
				if (v13)
					*(_QWORD*)(v13 + 16) = v11 + 6;
			}
			v11[8] = a2;
			v11[9] = a3;
			*(_QWORD*)v11 = off_140B63F08;
			*((_QWORD*)v11 + 5) = a4;
			*((_QWORD*)v11 + 6) = a5;
			*((_QWORD*)v11 + 7) = a6;
		}
		return 1i64;
	}
}
// 140B63F08: using guessed type __int64 (__fastcall *off_140B63F08[47])();
// 140B64078: using guessed type __int64 (__fastcall *off_140B64078)();
// 1402FC030: using guessed type int var_18[6];

