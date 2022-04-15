#include "../winhttp.h"

//----- (00000001406D6600) ----------------------------------------------------
__int64 __fastcall sub_1406D6600(_QWORD* a1)
{
	int v2; // ebp
	_DWORD* v3; // rdx
	__int64 result; // rax
	_DWORD* v5; // rax
	int v6; // ebx
	_DWORD* v7; // rax
	int v8; // edi
	__int64 v9; // r14
	_QWORD* v10; // r12
	int v11; // edx
	int v12; // edi
	int v13; // ebx
	__int64 v14; // rax
	int v15; // eax
	_DWORD* v16; // rcx
	_DWORD* v17; // rax
	_DWORD* v18; // rax
	int v19; // [rsp+68h] [rbp+10h] BYREF
	int v20; // [rsp+6Ch] [rbp+14h]

	v2 = 0;
	if (sub_1406D5FA0(a1))
	{
		v5 = (_DWORD*)(a1[3] + 16i64);
		if ((unsigned __int64)v5 >= a1[2] || v5 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
			v6 = 0;
		else
			v6 = sub_140056D60(a1, 2u);
		v7 = (_DWORD*)(a1[3] + 32i64);
		if ((unsigned __int64)v7 >= a1[2] || v7 == dword_140A12138 || *(int*)(a1[3] + 40i64) <= 0)
			v8 = 0;
		else
			v8 = sub_140056D60(a1, 3u);
		if (v6 <= 0 || v8 <= 0)
		{
			v18 = (_DWORD*)a1[2];
			*v18 = 0;
			v18[2] = 1;
		}
		else
		{
			v9 = qword_140C65898;
			v19 = BYTE1(v6);
			v20 = (unsigned __int8)v6;
			v10 = (_QWORD*)sub_1403AC780(qword_140C65898 + 160, &v19);
			if (v10)
			{
				v20 = v8 + 16;
				v11 = *(_DWORD*)(v9 + 26180);
				v19 = 0;
				v12 = v11 == 67;
				v13 = v11 == 66;
				v14 = sub_1403AC780(v9 + 160, &v19);
				v15 = sub_1403AD100(v9, v10, v14, &v19, v13, v12);
				v16 = (_DWORD*)a1[2];
				v16[2] = 1;
				LOBYTE(v2) = v15 == 0;
				*v16 = v2;
			}
			else
			{
				v17 = (_DWORD*)a1[2];
				*v17 = 0;
				v17[2] = 1;
			}
		}
		a1[2] += 16i64;
		return 1i64;
	}
	else
	{
		v3 = (_DWORD*)a1[2];
		result = 1i64;
		*v3 = 0;
		v3[2] = 1;
		a1[2] += 16i64;
	}
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;

