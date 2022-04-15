#include "../winhttp.h"

//----- (00000001407946D0) ----------------------------------------------------
__int64 __fastcall sub_1407946D0(_QWORD* a1)
{
	int i; // esi
	_DWORD* v3; // rax
	unsigned __int64 v4; // r8
	_DWORD* v5; // rcx
	__int64 v6; // rdx
	__int64 v7; // rcx
	_DWORD* v8; // rax
	__int64* v9; // r11
	__int64 v10; // rcx
	__int64 v11; // rdi
	_QWORD* v12; // rax
	__int64 v13; // rax
	int v14; // ecx
	_DWORD* v15; // rax

	for (i = 0; a1[2] < (unsigned __int64)(a1[3] + 16i64); a1[2] += 16i64)
		*(_DWORD*)(a1[2] + 8i64) = 0;
	a1[2] = a1[3] + 16i64;
	sub_140059170(a1, 0i64);
	v3 = (_DWORD*)a1[3];
	v4 = a1[2];
	v5 = dword_140A12138;
	if ((unsigned __int64)v3 < v4)
		v5 = (_DWORD*)a1[3];
	v6 = (unsigned int)v5[2];
	if ((_DWORD)v6 && ((_DWORD)v6 != 1 || *v5))
	{
		if ((unsigned __int64)v3 >= v4 || v3 == dword_140A12138 || v3[2] != 1)
		{
			if (!(unsigned int)sub_140058960((__int64)a1, 1))
				goto LABEL_20;
			v10 = *(_QWORD*)(a1[5] + 8i64);
			if (*(_BYTE*)(*(_QWORD*)v10 + 11i64))
				v9 = (__int64*)(*(_QWORD*)v10 + 40i64);
			v11 = a1[2];
			v12 = sub_14005C450(*v9, (int*)(v11 - 16));
			*(_QWORD*)(v11 - 16) = *v12;
			*(_DWORD*)(v11 - 8) = *((_DWORD*)v12 + 2);
			v13 = a1[2];
			v14 = *(_DWORD*)(v13 - 8);
			v15 = (_DWORD*)(v13 - 16);
			if (v14 && (v14 != 1 || *v15))
				i = 1;
			a1[2] = v15;
			if (!i)
				LABEL_20:
			sub_140056570(a1, 1u, aBooleanOrProxy);
			sub_140058960((__int64)a1, 1);
		}
		else
		{
			sub_140058900((__int64)a1, v6, 0);
			v7 = a1[2];
			*(_QWORD*)v7 = *(_QWORD*)(v7 - 16);
			*(_DWORD*)(v7 + 8) = *(_DWORD*)(v7 - 8);
			a1[2] += 16i64;
			v8 = (_DWORD*)a1[2];
			*v8 = 1;
			v8[2] = 1;
			a1[2] += 16i64;
			sub_140058AB0((__int64)a1, -10003);
		}
		sub_140058BF0((__int64)a1, 2);
	}
	return 1i64;
}
// 1407947D6: variable 'v9' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

