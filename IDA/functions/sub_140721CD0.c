#include "../winhttp.h"

//----- (0000000140721CD0) ----------------------------------------------------
__int64 __fastcall sub_140721CD0(__int64 a1, unsigned int a2)
{
	__int64 v2; // r9
	__int64 v3; // rax
	__int64 v6; // r8
	__int64 v7; // rdi
	_QWORD* v8; // rax
	_QWORD* v9; // rbx
	void(__fastcall * **v10)(_QWORD, __int64); // rcx
	__int64 v11; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	__int64 v14; // rdx
	__int64 v15; // rcx
	__int64 v16; // rax
	__int64 v17; // rdi
	_QWORD* v18; // rax
	_QWORD* v19; // rbx
	void(__fastcall * **v20)(_QWORD, __int64); // rcx
	__int64 v21; // rax
	_QWORD* k; // rax
	__int64 m; // rax
	__int64 v25; // [rsp+40h] [rbp+8h] BYREF

	v2 = *(_QWORD*)(a1 + 144);
	v3 = *(_QWORD*)(v2 + 8);
	v6 = v2;
	while (v3)
	{
		if (*(_DWORD*)(v3 + 32) < a2)
		{
			v3 = *(_QWORD*)(v3 + 24);
		}
		else
		{
			v6 = v3;
			v3 = *(_QWORD*)(v3 + 16);
		}
	}
	if (v6 == v2 || (v25 = v6, a2 < *(_DWORD*)(v6 + 32)))
		v25 = v2;
	v7 = v25;
	if (v25 != v2)
	{
		v8 = *(_QWORD**)(v25 + 48);
		v9 = (_QWORD*)v8[2];
		if (v9 != v8)
		{
			do
			{
				v10 = (void(__fastcall***)(_QWORD, __int64))v9[5];
				if (v10)
					(**v10)(v10, 1i64);
				v11 = v9[3];
				if (v11)
				{
					v9 = (_QWORD*)v9[3];
					for (i = *(_QWORD**)(v11 + 16); i; i = (_QWORD*)i[2])
						v9 = i;
				}
				else
				{
					for (j = v9[1]; v9 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
						v9 = (_QWORD*)j;
					if (v9[3] != j)
						v9 = (_QWORD*)j;
				}
			} while (v9 != *(_QWORD**)(v7 + 48));
		}
		sub_140008410(v7 + 40);
		v25 = v7;
		sub_140722A30(a1 + 136, &v25);
	}
	v14 = *(_QWORD*)(a1 + 176);
	v15 = v14;
	v16 = *(_QWORD*)(v14 + 8);
	while (v16)
	{
		if (*(_DWORD*)(v16 + 32) < a2)
		{
			v16 = *(_QWORD*)(v16 + 24);
		}
		else
		{
			v15 = v16;
			v16 = *(_QWORD*)(v16 + 16);
		}
	}
	if (v15 == v14 || (v25 = v15, a2 < *(_DWORD*)(v15 + 32)))
		v25 = v14;
	v17 = v25;
	if (v25 != *(_QWORD*)(a1 + 176))
	{
		v18 = *(_QWORD**)(v25 + 48);
		v19 = (_QWORD*)v18[2];
		if (v19 != v18)
		{
			do
			{
				v20 = (void(__fastcall***)(_QWORD, __int64))v19[5];
				if (v20)
					(**v20)(v20, 1i64);
				v21 = v19[3];
				if (v21)
				{
					v19 = (_QWORD*)v19[3];
					for (k = *(_QWORD**)(v21 + 16); k; k = (_QWORD*)k[2])
						v19 = k;
				}
				else
				{
					for (m = v19[1]; v19 == *(_QWORD**)(m + 24); m = *(_QWORD*)(m + 8))
						v19 = (_QWORD*)m;
					if (v19[3] != m)
						v19 = (_QWORD*)m;
				}
			} while (v19 != *(_QWORD**)(v17 + 48));
		}
		sub_140008410(v17 + 40);
		v25 = v17;
		sub_140722B60(a1 + 168, &v25);
	}
	return 0i64;
}

