#include "../winhttp.h"

//----- (000000014004AED0) ----------------------------------------------------
__int64 __fastcall sub_14004AED0(_QWORD* a1)
{
	_DWORD* v1; // rax
	__int64 v3; // rax
	__int64 v4; // rbp
	unsigned int v5; // edi
	unsigned int v6; // eax
	unsigned __int64 v7; // rdx
	unsigned int v8; // r10d
	__int64 v9; // rax
	unsigned __int64 v10; // r8
	__int64 v11; // r11
	unsigned __int64 v12; // rcx
	__int64 v13; // r9
	unsigned int v14; // eax
	unsigned int v15; // eax
	__int64 v17; // rdi
	unsigned int* v18; // rdi
	__int64 v19; // rsi
	__int64 v20; // rax
	__int64 v21; // rbx
	__int64 v22; // rax

	v1 = (_DWORD*)a1[3];
	if ((unsigned __int64)v1 < a1[2] && v1 != dword_140A12138 && !v1[2])
		return 0i64;
	v3 = sub_140056AB0(a1, 1u);
	if (!v3)
		return 0i64;
	v4 = *(_QWORD*)(*(_QWORD*)v3 + 16i64);
	if (!v4 || !*(_QWORD*)(v4 + 16))
		return 0i64;
	v5 = sub_140056D60(a1, 2u);
	v6 = sub_140056D60(a1, 3u);
	v7 = 0i64;
	v8 = v6;
	v9 = *(_QWORD*)(v4 + 5088);
	v10 = *(_QWORD*)(v9 + 448);
	if (!v10)
		return 0i64;
	v11 = *(_QWORD*)(v9 + 440);
	while (1)
	{
		v12 = v7 + ((v10 - v7) >> 1);
		v13 = *(_QWORD*)(v11 + 8 * v12);
		v14 = *(_DWORD*)(v13 + 4);
		if (v5 < v14)
		{
		LABEL_14:
			v10 = v7 + ((v10 - v7) >> 1);
			goto LABEL_15;
		}
		if (v5 <= v14)
		{
			v15 = *(_DWORD*)(v13 + 8);
			if (v8 < v15)
				goto LABEL_14;
			if (v8 <= v15)
				break;
		}
		v7 = v12 + 1;
	LABEL_15:
		if (v7 >= v10)
			return 0i64;
	}
	v17 = *(_QWORD*)(v11 + 8 * v12);
	if (!v13)
		return 0i64;
	sub_140049CD0(v4);
	v18 = (unsigned int*)(v17 + 12);
	v19 = 12i64;
	do
	{
		v20 = sub_14020BD20(*v18);
		v21 = v20;
		if (v20)
		{
			v22 = sub_14020A3A0(*(_DWORD*)(v20 + 16));
			if (v22)
				(*(void(__fastcall**)(_QWORD, _QWORD, __int64, _QWORD))(**(_QWORD**)(v4 + 16) + 88i64))(
					*(_QWORD*)(v4 + 16),
					*(unsigned int*)(v22 + 8),
					v21,
					0i64);
		}
		++v18;
		--v19;
	} while (v19);
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

