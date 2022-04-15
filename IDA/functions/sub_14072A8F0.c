#include "../winhttp.h"

//----- (000000014072A8F0) ----------------------------------------------------
void __fastcall sub_14072A8F0(__int64 a1)
{
	int* v2; // r8
	int v3; // edx
	unsigned int v4; // edx
	unsigned int v5; // eax
	int v6; // ecx
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // [rsp+20h] [rbp-28h] BYREF
	int v10; // [rsp+28h] [rbp-20h]
	__int64 v11; // [rsp+2Ch] [rbp-1Ch]
	__int64 v12; // [rsp+34h] [rbp-14h]
	int v13; // [rsp+3Ch] [rbp-Ch]

	if (a1)
	{
		sub_140789950(*(_QWORD*)(a1 + 1368));
		v2 = (int*)qword_140C63750;
		*(_DWORD*)(a1 + 20) = 4;
		v3 = dword_140C54730;
		if (*v2 < dword_140C54730)
			v3 = *v2;
		v4 = dword_140C54740[v3] + dword_140C636A8;
		v5 = *(_DWORD*)(a1 + 1192);
		if (v5 == -1)
		{
			*(_DWORD*)(a1 + 1192) = v4;
		}
		else
		{
			if (v5 < v4)
				v5 = v4;
			*(_DWORD*)(a1 + 1192) = v5;
		}
		v6 = dword_140C547F0;
		if (*v2 < dword_140C547F0)
			v6 = *v2;
		if (!*((_BYTE*)&dword_140C54800 + v6))
		{
			if (*(_QWORD*)(a1 + 72))
				v7 = *(_QWORD*)(a1 + 1400);
			else
				v7 = *(_QWORD*)(a1 + 1416);
			if (!*(_DWORD*)(v7 + 48))
			{
				*(_DWORD*)(v7 + 48) = 1;
				v8 = *(_QWORD*)(v7 + 56);
				v9 = 1109i64;
				v12 = 2i64;
				v10 = 1065353216;
				v11 = 0i64;
				v13 = 0;
				(*(void(__fastcall**)(__int64, _QWORD, __int64*, unsigned __int64))(*(_QWORD*)v8 + 584i64))(
					v8,
					0i64,
					&v9,
					0x140000000ui64);
			}
		}
	}
}
// 140C54730: using guessed type int dword_140C54730;
// 140C54740: using guessed type int dword_140C54740[16];
// 140C547F0: using guessed type int dword_140C547F0;
// 140C54800: using guessed type int dword_140C54800;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C63750: using guessed type __int64 qword_140C63750;

