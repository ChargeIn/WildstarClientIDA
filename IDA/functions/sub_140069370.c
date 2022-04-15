#include "../winhttp.h"

//----- (0000000140069370) ----------------------------------------------------
__int64 __fastcall sub_140069370(__int64 a1)
{
	bool v1; // zf
	__int64 v3; // rax
	__int64 v4; // rdx
	unsigned int v5; // esi
	__int64 v6; // rax
	__int64 v7; // rbx
	char v8; // al
	const char* v10; // rax
	__int64 v11; // [rsp+20h] [rbp-18h] BYREF
	int v12; // [rsp+28h] [rbp-10h]
	char v13; // [rsp+2Ch] [rbp-Ch]
	char v14; // [rsp+2Dh] [rbp-Bh]
	char v15; // [rsp+2Eh] [rbp-Ah]

	v1 = *(_DWORD*)(a1 + 32) == 287;
	*(_DWORD*)(a1 + 8) = *(_DWORD*)(a1 + 4);
	if (v1)
	{
		*(_DWORD*)(a1 + 16) = sub_140063BB0(a1, (__int64*)(a1 + 24));
	}
	else
	{
		*(_QWORD*)(a1 + 16) = *(_QWORD*)(a1 + 32);
		v3 = *(_QWORD*)(a1 + 40);
		*(_DWORD*)(a1 + 32) = 287;
		*(_QWORD*)(a1 + 24) = v3;
	}
	v5 = sub_1400683A0(a1);
	if (*(_DWORD*)(a1 + 16) != 274)
	{
		v10 = (const char*)sub_14005B130(*(_QWORD*)(a1 + 56), (unsigned __int64*)"'%s' expected", aThen);
		sub_140062CF0(a1, v10, *(_DWORD*)(a1 + 16));
	}
	v1 = *(_DWORD*)(a1 + 32) == 287;
	*(_DWORD*)(a1 + 8) = *(_DWORD*)(a1 + 4);
	if (v1)
	{
		*(_DWORD*)(a1 + 16) = sub_140063BB0(a1, (__int64*)(a1 + 24));
	}
	else
	{
		*(_QWORD*)(a1 + 16) = *(_QWORD*)(a1 + 32);
		v6 = *(_QWORD*)(a1 + 40);
		*(_DWORD*)(a1 + 32) = 287;
		*(_QWORD*)(a1 + 24) = v6;
	}
	v7 = *(_QWORD*)(a1 + 48);
	v12 = -1;
	v15 = 0;
	v8 = *(_BYTE*)(v7 + 74);
	v14 = 0;
	v13 = v8;
	v11 = *(_QWORD*)(v7 + 40);
	*(_QWORD*)(v7 + 40) = &v11;
	sub_140069EC0(a1, v4);
	sub_140065E10(v7);
	return v5;
}
// 140069437: variable 'v4' is possibly undefined
// 140069EC0: using guessed type __int64 __fastcall sub_140069EC0(_QWORD, _QWORD);

