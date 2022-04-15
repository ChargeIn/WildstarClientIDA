#include "../winhttp.h"

//----- (00000001406F68A0) ----------------------------------------------------
__int64 __fastcall sub_1406F68A0(_QWORD* a1)
{
	unsigned int v2; // esi
	_DWORD* v3; // rax
	int v4; // edi
	__int64 v5; // rax
	__int64 v6; // rcx
	__int16* v7; // rax
	unsigned __int64* v8; // rdx
	unsigned __int64 v9; // r8
	__int16* v10; // rax
	__int16* v11; // rax
	__int64 v13; // [rsp+20h] [rbp-28h] BYREF
	__int64 v14; // [rsp+28h] [rbp-20h]

	v2 = sub_140056D60(a1, 1u);
	v3 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v3 >= a1[2] || v3 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
		v4 = 0;
	else
		v4 = sub_140056D60(a1, 2u);
	v5 = sub_1401F31E0(v2);
	if (v5)
	{
		if (v4 == 1)
		{
			v10 = sub_14034BDD0(v6, *(_DWORD*)(v5 + 20));
			v8 = (unsigned __int64*)sub_14018F0E0(&v13, (unsigned __int16*)v10)[1];
			if (v8)
			{
				v9 = -1i64;
				do
					++v9;
				while (*((_BYTE*)v8 + v9));
				goto LABEL_20;
			}
		}
		else
		{
			v11 = sub_14034BDD0(v6, *(_DWORD*)(v5 + 16));
			v8 = (unsigned __int64*)sub_14018F0E0(&v13, (unsigned __int16*)v11)[1];
			if (v8)
			{
				v9 = -1i64;
				do
					++v9;
				while (*((_BYTE*)v8 + v9));
				goto LABEL_20;
			}
		}
	LABEL_17:
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		goto LABEL_21;
	}
	v7 = sub_14034BDD0(v6, 249089);
	v8 = (unsigned __int64*)sub_14018F0E0(&v13, (unsigned __int16*)v7)[1];
	if (!v8)
		goto LABEL_17;
	v9 = -1i64;
	do
		++v9;
	while (*((_BYTE*)v8 + v9));
LABEL_20:
	sub_140058710((__int64)a1, v8, v9);
LABEL_21:
	if (v14)
		sub_14018B900(v14, 0);
	return 1i64;
}
// 1406F6907: variable 'v6' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

