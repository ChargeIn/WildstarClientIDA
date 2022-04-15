#include "../winhttp.h"

//----- (000000014016DC40) ----------------------------------------------------
char __fastcall sub_14016DC40(__int64 a1, int* a2)
{
	__int64 v2; // rax
	__int64 v4; // rcx
	__int64 v5; // rbp
	__int64 v6; // rax
	int v7; // ebx
	__int64* v8; // rdi
	__int64 v9; // rcx
	__int64* v10; // rsi
	__int64** v11; // rax
	int v13; // [rsp+48h] [rbp+10h] BYREF

	LODWORD(v2) = *a2;
	if (*a2 >= 0 && (int)v2 < (int)((__int64)(*(_QWORD*)(a1 + 1424) - *(_QWORD*)(a1 + 1416)) >> 3))
	{
		v4 = *a2;
		v2 = *(_QWORD*)(a1 + 1416);
		v5 = *(_QWORD*)(v2 + 8 * v4);
		if (v5)
		{
			for (LOBYTE(v2) = sub_14016C820(*(_QWORD*)(v2 + 8 * v4)); (_BYTE)v2; LOBYTE(v2) = sub_14016C820(v5))
			{
				v6 = *(_QWORD*)(v5 + 96);
				if (*(_QWORD*)v6 == v6)
					v7 = -1;
				else
					v7 = *(_DWORD*)(*(_QWORD*)v6 + 16i64);
				v13 = v7;
				sub_14016DD40(a1, &v13);
				v8 = *(__int64**)(v5 + 96);
				v9 = *v8;
				if ((__int64*)*v8 != v8)
				{
					do
					{
						v10 = *(__int64**)v9;
						if (*(_DWORD*)(v9 + 16) == v7)
						{
							v11 = *(__int64***)(v9 + 8);
							*v11 = v10;
							v10[1] = (__int64)v11;
							sub_14018B900(v9, 0);
						}
						v9 = (__int64)v10;
					} while (v10 != v8);
				}
			}
			if (*(_BYTE*)(v5 + 108))
				*(_BYTE*)(a1 + 1368) = 1;
		}
	}
	return v2;
}
// 14016DD40: using guessed type __int64 __fastcall sub_14016DD40(_QWORD, _QWORD);

