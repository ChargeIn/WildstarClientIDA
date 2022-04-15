#include "../winhttp.h"

//----- (0000000140051E80) ----------------------------------------------------
__int64 __fastcall sub_140051E80(__int64 a1)
{
	int v2; // r13d
	unsigned __int64 v3; // rbp
	unsigned __int64 v4; // rbx
	unsigned __int64 v5; // r12
	__int64 v6; // r15
	__int64 v7; // rsi
	__int64 v8; // rax
	unsigned int* v9; // rdx
	__int64 v10; // rax
	__int64 v11; // rcx
	int* v12; // rdx
	int v13; // ecx
	int v14; // eax
	int v15; // eax
	int v16; // r8d

	if ((**(unsigned int (***)(void))qword_140C65848)())
	{
		sub_1400BA9F0(a1 + 16);
		sub_1400BB6B0(a1 + 16);
		sub_1400BBCA0(a1 + 16);
	}
	if (*(_DWORD*)(a1 + 1472) && (v2 = sub_14018CDF0(), v2 - *(_DWORD*)(a1 + 1472) > 0))
	{
		v3 = *(_QWORD*)(a1 + 1464);
		if (v3)
		{
			v4 = 1i64;
			v5 = 0i64;
			if (v3 > 1)
			{
				v6 = 0i64;
				do
				{
					v7 = sub_140233B00(*(_DWORD*)(v6 + *(_QWORD*)(a1 + 1456)));
					v8 = sub_140233B00(*(_DWORD*)(8 * v4 + *(_QWORD*)(a1 + 1456)));
					if (v8 && (!v7 || *(_DWORD*)(v8 + 60) > *(_DWORD*)(v7 + 60)))
					{
						v5 = v4;
						v6 = 8 * v4;
					}
					++v4;
				} while (v4 < v3);
			}
			v9 = (unsigned int*)(*(_QWORD*)(a1 + 1456) + 8 * v5);
			v10 = (int)v9[1];
			if ((unsigned int)v10 < 3)
			{
				v11 = *(_QWORD*)(a1 + 8 * v10 + 720);
				if (v11)
					(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)v11 + 16i64))(
						v11,
						*v9,
						0i64,
						0i64,
						0i64,
						0i64,
						0i64);
			}
			sub_1400523E0((__int64*)(a1 + 1456));
		}
		v12 = (int*)qword_140C63750;
		v13 = dword_140C3B890;
		if (*(_DWORD*)qword_140C63750 < dword_140C3B890)
			v13 = *(_DWORD*)qword_140C63750;
		if (v2 - *(_DWORD*)(a1 + 1472) > dword_140C3B8A0[v13])
			*(_DWORD*)(a1 + 1472) = 0;
	}
	else
	{
		v12 = (int*)qword_140C63750;
	}
	v14 = dword_140C3B7F0;
	if (*v12 < dword_140C3B7F0)
		v14 = *v12;
	if (*((_BYTE*)&dword_140C3B800 + v14))
		goto LABEL_30;
	v15 = dword_140C3B7B0;
	if (*v12 < dword_140C3B7B0)
		v15 = *v12;
	if (*((_BYTE*)&dword_140C3B7C0 + v15) || (*(_DWORD*)(qword_140C635F0 + 64) & 0x2000) != 0)
		v16 = 170;
	else
		LABEL_30:
	v16 = 169;
	return sub_140051CC0(a1, 7, v16);
}
// 140C3B7B0: using guessed type int dword_140C3B7B0;
// 140C3B7C0: using guessed type int dword_140C3B7C0;
// 140C3B7F0: using guessed type int dword_140C3B7F0;
// 140C3B800: using guessed type int dword_140C3B800;
// 140C3B890: using guessed type int dword_140C3B890;
// 140C3B8A0: using guessed type int dword_140C3B8A0[16];
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65848: using guessed type __int64 qword_140C65848;

