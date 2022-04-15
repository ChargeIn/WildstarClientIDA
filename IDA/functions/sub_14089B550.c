#include "../winhttp.h"

//----- (000000014089B550) ----------------------------------------------------
char __fastcall sub_14089B550(_QWORD* a1, _QWORD* a2)
{
	__int64 v3; // rax
	__int64 v4; // rcx
	int* v5; // rax
	_QWORD* v6; // rax
	__int64 v7; // rcx
	_QWORD* i; // rbx
	__int64 v9; // rcx
	char v11[264]; // [rsp+20h] [rbp-138h] BYREF
	__int64 v12; // [rsp+128h] [rbp-30h]
	__int64 v13; // [rsp+160h] [rbp+8h] BYREF

	a1[22] = *a2;
	if ((sub_14088D000(a1[13]) & 0x4000) != 0)
	{
		sub_140890370((__int64)v11, (__int64)a1, 0);
		if (v12)
		{
			v3 = sub_1408906B0((__int64)v11, &v13);
			v4 = v13;
			if (v3)
				v4 = v3;
			v5 = (int*)sub_140890D60(v4);
			sub_14083BCF0(qword_140C61B80, *(_DWORD*)(a1[13] + 48i64), 0x4000u, v5);
		}
		nullsub_1(v11);
	}
	v6 = (_QWORD*)a1[22];
	if (!*v6)
	{
		v7 = a1[2];
		if (!v7 || (LOBYTE(v6) = sub_1408993F0(v7), !(_BYTE)v6))
		{
			for (i = (_QWORD*)a1[20]; i; i = (_QWORD*)*i)
			{
				v9 = i[1];
				if (v9)
					LOBYTE(v6) = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v9 + 144i64))(v9);
			}
		}
	}
	return (char)v6;
}
// 140001B70: using guessed type __int64 __fastcall nullsub_1(_QWORD);
// 140C61B80: using guessed type __int64 qword_140C61B80;

