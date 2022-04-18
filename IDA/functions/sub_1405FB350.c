#include "../winhttp.h"

//----- (00000001405FB350) ----------------------------------------------------
__int64 __fastcall sub_1405FB350(__int64 a1, __int64 a2)
{
	__int64 v4; // rcx
	unsigned int v5; // edi
	__int64 v6; // rsi
	__int64 v7; // rax
	__int64 v8; // rcx
	__int64 v9; // rbx
	int* v10; // rsi
	unsigned int v11; // edi
	__int64 v12; // rsi
	__int64 v13; // rax
	__int64 v14; // rcx
	__int64 v15; // rbx
	unsigned int v16; // r12d
	__int64 v17; // rbp
	__int64 v18; // rdi
	unsigned __int64 v19; // rsi
	_QWORD* v20; // rbx
	__int64 v21; // rcx
	__int64* v23; // rbx
	__int64 v24; // rbx
	__int64 v25; // r8
	unsigned int v26; // edx
	__int64 v27; // rax
	__int64 v28; // rcx
	__int64* v29; // rax
	__int64 v30; // rax
	__int64 v31; // rsi
	unsigned int v32; // ebx
	char v33[32]; // [rsp+30h] [rbp-58h] BYREF
	unsigned int v34; // [rsp+90h] [rbp+8h] BYREF
	__int64 v35; // [rsp+98h] [rbp+10h] BYREF
	__int64 v36; // [rsp+A0h] [rbp+18h] BYREF

	*(_DWORD*)(a1 + 148) = 0;
	qword_140C65938 = *(_QWORD*)(a2 + 48);
	sub_140489AA0(a1, 1);
	v5 = 0;
	if (*(_DWORD*)a2)
	{
		do
		{
			v6 = 8i64 * v5;
			v7 = sub_1405A8A40(v4, *(_DWORD*)(v6 + *(_QWORD*)(a2 + 8)));
			v9 = v7;
			if (!v7)
				return 2685075457i64;
			if (!*(_QWORD*)(v7 + 104))
				sub_1407241F0(v8, v7);
			if (!*(_DWORD*)(*(_QWORD*)(v9 + 8) + 436i64) || (v10 = (int*)(*(_QWORD*)(a2 + 8) + v6), v10[1]))
			{
				sub_1405FBDC0(a1, v9, 3, 0);
			}
			else
			{
				sub_14043F640((_QWORD*)(a1 + 96), *(_QWORD*)(a1 + 136) + 1i64);
				sub_1405A96F0((_QWORD*)(a1 + 96), (__int64)v33, v10);
			}
		} while (++v5 < *(_DWORD*)a2);
	}
	v11 = 0;
	if (*(_DWORD*)(a2 + 16))
	{
		do
		{
			v12 = 8i64 * v11;
			v13 = sub_1405A8A40(v4, *(_DWORD*)(v12 + *(_QWORD*)(a2 + 24)));
			v15 = v13;
			if (!v13)
				return 2685075457i64;
			if (!*(_QWORD*)(v13 + 104))
				sub_1407241F0(v14, v13);
			sub_1405FBDC0(a1, v15, *(_DWORD*)(v12 + *(_QWORD*)(a2 + 24) + 4), 0);
		} while (++v11 < *(_DWORD*)(a2 + 16));
	}
	v16 = 0;
	if (*(_DWORD*)(a2 + 32))
	{
		while (1)
		{
			v17 = qword_140C65B80;
			v18 = *(_QWORD*)(a2 + 40) + 48i64 * v16;
			v34 = *(_DWORD*)v18;
			v19 = (*(__int64(__fastcall**)(unsigned int*))(qword_140C65B80 + 32))(&v34);
			v20 = *(_QWORD**)(*(_QWORD*)(v17 + 24) + 8 * (v19 % *(_QWORD*)(v17 + 16)));
			if (!v20)
				return 2685075457i64;
			while (v19 != *v20 || !(*(unsigned int(__fastcall**)(unsigned int*, _QWORD*))(v17 + 40))(&v34, v20 + 2))
			{
				v20 = (_QWORD*)v20[1];
				if (!v20)
					return 2685075457i64;
			}
			v23 = v20 + 3;
			if (!v23)
				return 2685075457i64;
			v24 = *v23;
			if (!v24)
				return 2685075457i64;
			if (!*(_QWORD*)(v24 + 104))
				sub_1407241F0(v21, v24);
			sub_1405FBDC0(a1, v24, *(_DWORD*)(v18 + 4), *(_DWORD*)(v18 + 8));
			v25 = *(_QWORD*)(a1 + 8);
			v26 = *(_DWORD*)v18;
			v27 = *(_QWORD*)(v25 + 8);
			v28 = v25;
			while (v27)
			{
				if (*(_DWORD*)(v27 + 32) < v26)
				{
					v27 = *(_QWORD*)(v27 + 24);
				}
				else
				{
					v28 = v27;
					v27 = *(_QWORD*)(v27 + 16);
				}
			}
			if (v28 == v25 || v26 < *(_DWORD*)(v28 + 32))
			{
				v36 = *(_QWORD*)(a1 + 8);
				v29 = &v36;
			}
			else
			{
				v35 = v28;
				v29 = &v35;
			}
			v30 = *v29;
			v31 = 0i64;
			if (v30 != v25)
				v31 = v30 + 40;
			v32 = 0;
			for (*(_DWORD*)(v31 + 68) = *(_DWORD*)(v18 + 12); v32 < *(_DWORD*)(v18 + 16); ++v32)
				sub_14079D700(*(__int64**)(v31 + 8i64 * v32 + 16), 1, *(_DWORD*)(*(_QWORD*)(v18 + 24) + 4i64 * v32), 0, 0);
			*(_DWORD*)(v31 + 72) = 0;
			sub_140611710(v31);
			sub_1406118A0((char*)v31, *(_DWORD*)(v18 + 32), *(char**)(v18 + 40), *(_DWORD*)(v18 + 16));
			if (++v16 >= *(_DWORD*)(a2 + 32))
				goto LABEL_40;
		}
	}
	else
	{
	LABEL_40:
		sub_1405FCCB0(a1);
		Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "QuestInit", &unk_1409D0C12);
		*(_DWORD*)(a1 + 148) = 1;
		return 0i64;
	}
}
// 1405FB3A1: variable 'v4' is possibly undefined
// 1405FB3BB: variable 'v8' is possibly undefined
// 1405FB45B: variable 'v14' is possibly undefined
// 1405FB535: variable 'v21' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65938: using guessed type __int64 qword_140C65938;
// 140C65B80: using guessed type __int64 qword_140C65B80;
// 1405FB350: using guessed type char var_58[32];

