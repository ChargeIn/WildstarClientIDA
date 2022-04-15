#include "../winhttp.h"

//----- (00000001405C7AD0) ----------------------------------------------------
__int64 __fastcall sub_1405C7AD0(__int64 a1, unsigned int a2, int a3)
{
	int* v6; // rax
	unsigned int v7; // ebp
	int* v8; // r15
	int* v9; // rdx
	__int64 v10; // rax
	__int64 v11; // rsi
	unsigned int v12; // ecx
	__int64 v13; // rax
	__int64 v14; // rcx
	__int64 v15; // rbx
	int v16; // edi
	unsigned __int64 v17; // r12
	__int64 v18; // rdi
	unsigned __int64 v19; // rbx
	__int64 v20; // rcx
	__int64 v21; // rax
	unsigned int v22; // edx
	unsigned int v23; // edx
	unsigned int v24; // eax
	__int64 v26; // [rsp+20h] [rbp-28h] BYREF
	unsigned __int64 v27; // [rsp+28h] [rbp-20h]

	v6 = sub_1400B5DF0(qword_140C658F0, a2, 0i64);
	v7 = 0;
	v8 = v6;
	if (v6)
	{
		*(_DWORD*)(a1 + 320) = a2;
		v9 = (int*)*((_QWORD*)v6 + 61);
		if (v9 && *(_WORD*)v9)
		{
			v10 = 0i64;
			if (*(_WORD*)v9)
			{
				do
					++v10;
				while (*((_WORD*)v9 + v10));
			}
			sub_14001C480(a1 + 16, v9, (int*)((char*)v9 + 2 * v10));
		}
		v11 = 0i64;
		*(_DWORD*)(a1 + 324) = 0;
		if (!a3
			|| (v12 = v8[117]) == 0
			|| (v13 = sub_1402085E0(v12)) == 0
			|| (v14 = qword_140C65898,
				*(_DWORD*)(a1 + 324) = 1,
				(v11 = sub_1403ACD90(qword_140C65B70, *(_DWORD*)(v13 + 4), *(_QWORD*)(v14 + 120))) == 0))
		{
			v15 = qword_140C65898;
			v16 = *(_DWORD*)(a1 + 320);
			v27 = 0i64;
			v26 = 0i64;
			sub_1405CABD0(qword_140C65898 + 160, v16, &v26);
			sub_1405CABD0(v15 + 184, v16, &v26);
			sub_1405CABD0(v15 + 280, v16, &v26);
			sub_1405CABD0(v15 + 304, v16, &v26);
			v17 = v27;
			v18 = v26;
			if (v27)
			{
				v19 = 0i64;
				do
				{
					v20 = *(_QWORD*)(v18 + 8 * v19);
					v11 = 0i64;
					v21 = *(_QWORD*)(v20 + 80);
					if (!v21)
						v21 = *(_QWORD*)(v20 + 64) + 156i64;
					v22 = *(_DWORD*)(v21 + 128);
					if (v22)
						v11 = sub_1403ACD90(qword_140C65B70, v22, *(_QWORD*)(qword_140C65898 + 120));
					if (v11)
						break;
					++v19;
				} while (v19 < v17);
			}
			else if (v8[111])
			{
				v23 = v8[71];
				if (v23)
					v11 = sub_1403ACD90(qword_140C65B70, v23, *(_QWORD*)(qword_140C65898 + 120));
			}
			if (v18)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v18 - 16) + 8i64))(v18 - 16);
		}
		v24 = sub_1405C7620((__int64*)a1, v11);
		if (v11)
			return v24;
		return v7;
	}
	else
	{
		*(_DWORD*)(a1 + 320) = 0;
		sub_1405C7620((__int64*)a1, 0i64);
		return 2147500037i64;
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140C65B70: using guessed type __int64 qword_140C65B70;

