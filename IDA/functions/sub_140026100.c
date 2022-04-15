#include "../winhttp.h"

//----- (0000000140026100) ----------------------------------------------------
__int64 __fastcall sub_140026100(_QWORD* a1)
{
	_DWORD* v1; // rax
	unsigned int v3; // esi
	_DWORD* v4; // rax
	int v5; // edi
	__int64 v6; // rax
	__int64 v7; // rcx
	__int16* v8; // rax
	unsigned __int64* v9; // rdx
	unsigned __int64 v10; // r8
	__int16* v11; // rax
	__int16* v12; // rax
	__int64 v14; // [rsp+20h] [rbp-28h] BYREF
	__int64 v15; // [rsp+28h] [rbp-20h]

	v1 = (_DWORD*)a1[3];
	if ((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || (int)v1[2] <= 0)
		v3 = 0;
	else
		v3 = sub_140056D60(a1, 1u);
	v4 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v4 >= a1[2] || v4 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
		v5 = 0;
	else
		v5 = sub_140056D60(a1, 2u);
	v6 = sub_1401F31E0(v3);
	if (v6)
	{
		if (v5 == 1)
		{
			v11 = sub_14034BDD0(v7, *(_DWORD*)(v6 + 20));
			v9 = (unsigned __int64*)sub_14018F0E0(&v14, (unsigned __int16*)v11)[1];
			if (v9)
			{
				v10 = -1i64;
				do
					++v10;
				while (*((_BYTE*)v9 + v10));
				goto LABEL_25;
			}
		}
		else
		{
			v12 = sub_14034BDD0(v7, *(_DWORD*)(v6 + 16));
			v9 = (unsigned __int64*)sub_14018F0E0(&v14, (unsigned __int16*)v12)[1];
			if (v9)
			{
				v10 = -1i64;
				do
					++v10;
				while (*((_BYTE*)v9 + v10));
				goto LABEL_25;
			}
		}
	LABEL_22:
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		goto LABEL_26;
	}
	v8 = sub_14034BDD0(v7, 249089);
	v9 = (unsigned __int64*)sub_14018F0E0(&v14, (unsigned __int16*)v8)[1];
	if (!v9)
		goto LABEL_22;
	v10 = -1i64;
	do
		++v10;
	while (*((_BYTE*)v9 + v10));
LABEL_25:
	sub_140058710((__int64)a1, v9, v10);
LABEL_26:
	if (v15)
		sub_14018B900(v15, 0);
	return 1i64;
}
// 14002617B: variable 'v7' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

