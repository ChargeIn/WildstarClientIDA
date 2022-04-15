#include "../winhttp.h"

//----- (0000000140508E50) ----------------------------------------------------
char __fastcall sub_140508E50(_DWORD* a1)
{
	unsigned int v1; // esi
	_QWORD* v3; // rdi
	BOOL v4; // r15d
	int v5; // r14d
	int v6; // eax
	unsigned int v7; // eax
	unsigned int v8; // ebp
	__int64 v9; // rcx
	__int64 v10; // rcx

	v1 = 0;
	v3 = a1 + 288;
	v4 = (unsigned int)(a1[304] - 3) <= 1;
	sub_140002E60((__int64)(a1 + 288));
	v5 = a1[304];
	v6 = (*(__int64(__fastcall**)(_DWORD*))(*(_QWORD*)a1 + 672i64))(a1);
	if (v6)
	{
		v7 = sub_1405090D0();
		v8 = v7;
		if (v7 != a1[410])
		{
			a1[410] = v7;
			if (v3[12])
			{
				if (v3[11])
				{
					v9 = 0i64;
					do
					{
						BinkSetVolume(v3[12], *(unsigned int*)(v3[10] + 4 * v9), v8);
						v9 = ++v1;
					} while ((unsigned __int64)v1 < v3[11]);
				}
			}
		}
		v6 = a1[411];
		if (a1[294] != v6)
			a1[256] = 1;
	}
	if ((a1[7] & 1) != 0)
	{
		if (*((float*)a1 + 162) > 0.0
			&& ((v10 = *((_QWORD*)a1 + 2)) == 0 || (LOBYTE(v6) = sub_1400D1A60(v10), (_BYTE)v6))
			|| a1[256])
		{
			LOBYTE(v6) = v5 - 5;
			if ((unsigned int)(v5 - 5) <= 1 && v4 && v5 == 6)
				LOBYTE(v6) = sub_1400D4040((__int64)a1, "MovieFinished", (char*)a1, byte_1409F1274, *((_QWORD*)a1 + 153));
		}
	}
	return v6;
}
// 140959BC0: using guessed type __int64 __fastcall BinkSetVolume(_QWORD, _QWORD, _QWORD);
// 1409F1274: using guessed type _BYTE byte_1409F1274[24];

