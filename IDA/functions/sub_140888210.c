#include "../winhttp.h"

//----- (0000000140888210) ----------------------------------------------------
void __fastcall sub_140888210(__int64 a1, unsigned int a2)
{
	__int64 v2; // rax
	char v3; // bp
	__int64 v6; // rbx
	_QWORD* v7; // rsi
	struct _RTL_CRITICAL_SECTION* v8; // r15
	__int64 v9; // rax
	char v10; // r15
	__int64 v11; // rdx
	_QWORD* v12; // r8
	_QWORD* v13; // rbx
	bool i; // r8
	__int64 v15; // rcx
	__int64 v16; // rbx
	int v17; // eax
	__int64* v18; // r8
	__int64 v19; // r9
	__int64 v20; // r10
	unsigned __int64 v21; // rcx
	int v22; // ecx
	__int64 v23; // rax
	__int64 v24; // [rsp+20h] [rbp-38h]
	__int64 v25; // [rsp+30h] [rbp-28h]
	_QWORD* v26; // [rsp+38h] [rbp-20h]

	v2 = *(unsigned __int8*)(a1 + 192);
	v3 = 0;
	if (*(_DWORD*)(a1 + 168) <= (unsigned int)v2)
		goto LABEL_20;
	v6 = *(_QWORD*)(a1 + 176);
	v7 = 0i64;
	if (*(_BYTE*)(a1 + 192))
	{
		do
		{
			v7 = (_QWORD*)v6;
			v6 = *(_QWORD*)v6;
			--v2;
		} while (v2);
	}
	v8 = (struct _RTL_CRITICAL_SECTION*)(*(_QWORD*)(a1 + 96) + 24i64);
	EnterCriticalSection(v8);
	if (v6)
	{
		do
		{
			if (v3 || *(_DWORD*)(*(_QWORD*)(v6 + 8) + 24i64) - *(_DWORD*)(v6 + 16) < a2)
			{
				v9 = *(_QWORD*)v6;
				v3 = 1;
				v24 = *(_QWORD*)v6;
				if (v6 == *(_QWORD*)(a1 + 176))
					*(_QWORD*)(a1 + 176) = v9;
				else
					*v7 = v9;
				if (v6 == *(_QWORD*)(a1 + 184))
					*(_QWORD*)(a1 + 184) = v7;
				--* (_DWORD*)(a1 + 168);
				sub_140883FE0(a1, v6);
				v6 = v24;
			}
			else
			{
				v7 = (_QWORD*)v6;
				v6 = *(_QWORD*)v6;
			}
		} while (v6);
		if (v3)
			sub_1408893C0(*(_QWORD*)(a1 + 96));
	}
	LeaveCriticalSection(v8);
	if (!v3 || *(_BYTE*)(*(_QWORD*)(a1 + 96) + 248i64))
		LABEL_20:
	v10 = 0;
	else
		v10 = 1;
	v11 = *(_QWORD*)(a1 + 200);
	v12 = 0i64;
	if (!v3)
	{
		if (!v11)
			goto LABEL_25;
		while (*(_DWORD*)(*(_QWORD*)(v11 + 8) + 24i64) - *(_DWORD*)(v11 + 16) >= a2)
		{
			v12 = (_QWORD*)v11;
			v11 = *(_QWORD*)v11;
			if (!v11)
				goto LABEL_25;
		}
	}
	if (v11)
	{
		while (1)
		{
			v16 = *(_QWORD*)v11;
			v26 = v12;
			v25 = *(_QWORD*)v11;
			if (v11 == *(_QWORD*)(a1 + 200))
				*(_QWORD*)(a1 + 200) = v16;
			else
				*v12 = v16;
			if (v11 == *(_QWORD*)(a1 + 208))
				*(_QWORD*)(a1 + 208) = v12;
			v17 = *(_DWORD*)(v11 + 20);
			if ((v17 & 7) != 0)
			{
				sub_140883AE0(a1, v11, 0);
			}
			else
			{
				v18 = *(__int64**)(v11 + 8);
				v19 = *(unsigned int*)(v11 + 16);
				*(_DWORD*)(v11 + 20) = v17 & 0xFFFFFFF8 | 2;
				v20 = *v18;
				v21 = *(unsigned int*)(a1 + 148);
				if (*v18 + v19 >= v21 || v20 + (unsigned __int64)*((unsigned int*)v18 + 6) <= v21)
					v22 = *((_DWORD*)v18 + 6) - v19;
				else
					v22 = v21 - v19 - v20;
				*(_DWORD*)(a1 + 156) -= v22;
				*(_DWORD*)(v11 + 16) = *(_DWORD*)(*(_QWORD*)(v11 + 8) + 24i64);
				v23 = *(_QWORD*)(a1 + 216);
				if (v23)
				{
					*(_QWORD*)v11 = v23;
					*(_QWORD*)(a1 + 216) = v11;
				}
				else
				{
					*(_QWORD*)(a1 + 216) = v11;
					*(_QWORD*)v11 = 0i64;
				}
			}
			if (!v16)
				break;
			v12 = v26;
			v11 = v25;
		}
	}
LABEL_25:
	v13 = *(_QWORD**)(a1 + 216);
	for (i = 1; v13; i = v10 == 0)
	{
		v15 = (__int64)v13;
		v13 = (_QWORD*)*v13;
		sub_140889F90(v15, *(_QWORD*)(*(_QWORD*)(a1 + 96) + 256i64), i, v10);
	}
}

