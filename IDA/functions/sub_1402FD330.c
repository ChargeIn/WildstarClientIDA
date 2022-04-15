#include "../winhttp.h"

//----- (00000001402FD330) ----------------------------------------------------
__int64 __fastcall sub_1402FD330(__int64* a1, unsigned int a2)
{
	__int64 v2; // rax
	int v5; // eax
	unsigned int v7; // r11d
	__int64 v8; // r8
	unsigned int v9; // ebp
	unsigned __int16* v10; // r8
	__int64 v11; // rax
	__int64 v12; // rcx
	__int64 v13; // r9
	unsigned __int64 v14; // r10
	unsigned __int64 v15; // r9
	__int64 v16; // rbx
	int v17[6]; // [rsp+20h] [rbp-18h] BYREF

	v2 = *a1;
	v17[0] = -1;
	(*(void(__fastcall**)(__int64*, int*, _QWORD))(v2 + 16))(a1, v17, 0i64);
	v5 = dword_140C421A0;
	if (*(_DWORD*)qword_140C63750 < dword_140C421A0)
		v5 = *(_DWORD*)qword_140C63750;
	if (!byte_140C421B0[v5] && (a1[5] & 4) != 0)
		return 0i64;
	if ((a2 & 4) != 0)
	{
		if (*(_DWORD*)(((unsigned __int64)*((unsigned int*)a1 + 78) << 6) + *(_QWORD*)(a1[8] + 1176) + 16))
			return 1i64;
	}
	else
	{
		v7 = 0;
		v8 = *(_QWORD*)(a1[7] + 64);
		v9 = *(_DWORD*)(v8 + 128);
		if (v9)
		{
			v10 = (unsigned __int16*)(*(_QWORD*)(v8 + 136) + 30i64);
			do
			{
				if (((unsigned __int8)a2 & *((_BYTE*)v10 + 27)) != 0)
				{
					v11 = a1[8];
					v12 = *v10;
					if ((unsigned int)v12 >= *(_DWORD*)(v11 + 512)
						|| (v13 = a1[153],
							v14 = *(unsigned __int16*)(*(_QWORD*)(v11 + 520) + 4 * v12),
							v14 >> 3 < *(_QWORD*)(v13 + 1048))
						&& ((unsigned __int8)(1 << (v14 & 7)) & *(_BYTE*)((v14 >> 3) + *(_QWORD*)(v13 + 1040))) != 0
						&& (v15 = (unsigned __int64)*(unsigned __int16*)(*(_QWORD*)(v11 + 520) + 4 * v12) >> 3, v15 < a1[131])
						&& ((unsigned __int8)(1 << (v14 & 7)) & *(_BYTE*)(v15 + a1[130])) != 0)
					{
						if (*(_WORD*)(96i64 * *(v10 - 3) + a1[62] + 52)
							&& ((v10[13] & 4) == 0 || (*(_BYTE*)(a1[2] + 232) & 2) == 0))
						{
							return 1i64;
						}
					}
				}
				++v7;
				v10 += 56;
			} while (v7 < v9);
		}
	}
	v16 = a1[154];
	if (v16)
	{
		while (*(_DWORD*)(v16 + 1200) && !*(_QWORD*)(v16 + 1208)
			|| !(*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v16 + 1312i64))(v16, a2))
		{
			v16 = *(_QWORD*)(v16 + 1248);
			if (!v16)
				return 0i64;
		}
		return 1i64;
	}
	return 0i64;
}
// 140C421A0: using guessed type int dword_140C421A0;
// 140C421B0: using guessed type _BYTE byte_140C421B0[32];
// 140C63750: using guessed type __int64 qword_140C63750;
// 1402FD330: using guessed type int var_18[6];

