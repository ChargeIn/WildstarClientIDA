#include "../winhttp.h"

//----- (0000000140068560) ----------------------------------------------------
void __fastcall sub_140068560(__int64 a1, int a2)
{
	bool v2; // zf
	__int64 v3; // rsi
	__int64 v6; // rax
	int v7; // ebp
	int v8; // eax
	__int64 v9; // rdx
	char v10; // cl
	int v11; // r14d
	__int64 v12; // rax
	__int64 v13; // rbx
	char v14; // al
	int v15; // eax
	int v16; // ecx
	const char* v17; // rax
	__int64 v18; // [rsp+30h] [rbp-38h] BYREF
	int v19; // [rsp+38h] [rbp-30h]
	char v20; // [rsp+3Ch] [rbp-2Ch]
	char v21; // [rsp+3Dh] [rbp-2Bh]
	char v22; // [rsp+3Eh] [rbp-2Ah]
	__int64 v23; // [rsp+40h] [rbp-28h] BYREF
	int v24; // [rsp+48h] [rbp-20h]
	char v25; // [rsp+4Ch] [rbp-1Ch]
	char v26; // [rsp+4Dh] [rbp-1Bh]
	char v27; // [rsp+4Eh] [rbp-1Ah]

	v2 = *(_DWORD*)(a1 + 32) == 287;
	v3 = *(_QWORD*)(a1 + 48);
	*(_DWORD*)(a1 + 8) = *(_DWORD*)(a1 + 4);
	if (v2)
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
	v7 = *(_DWORD*)(v3 + 48);
	*(_DWORD*)(v3 + 52) = v7;
	v8 = sub_1400683A0(a1);
	v19 = -1;
	v22 = 1;
	v10 = *(_BYTE*)(v3 + 74);
	v21 = 0;
	v20 = v10;
	v11 = v8;
	v18 = *(_QWORD*)(v3 + 40);
	*(_QWORD*)(v3 + 40) = &v18;
	if (*(_DWORD*)(a1 + 16) != 259)
	{
		v17 = (const char*)sub_14005B130(*(_QWORD*)(a1 + 56), (unsigned __int64*)"'%s' expected", aDo);
		sub_140062CF0(a1, v17, *(_DWORD*)(a1 + 16));
	}
	v2 = *(_DWORD*)(a1 + 32) == 287;
	*(_DWORD*)(a1 + 8) = *(_DWORD*)(a1 + 4);
	if (v2)
	{
		*(_DWORD*)(a1 + 16) = sub_140063BB0(a1, (__int64*)(a1 + 24));
	}
	else
	{
		*(_QWORD*)(a1 + 16) = *(_QWORD*)(a1 + 32);
		v12 = *(_QWORD*)(a1 + 40);
		*(_DWORD*)(a1 + 32) = 287;
		*(_QWORD*)(a1 + 24) = v12;
	}
	v13 = *(_QWORD*)(a1 + 48);
	v24 = -1;
	v27 = 0;
	v14 = *(_BYTE*)(v13 + 74);
	v26 = 0;
	v25 = v14;
	v23 = *(_QWORD*)(v13 + 40);
	*(_QWORD*)(v13 + 40) = &v23;
	sub_140069EC0(a1, v9);
	sub_140065E10(v13);
	v15 = sub_14006A030((__int64*)v3);
	v16 = *(_DWORD*)(v3 + 48);
	if (v7 == v16)
	{
		*(_DWORD*)(v3 + 52) = v16;
		if (v15 != -1)
			sub_14006A3C0((__int64*)v3, (int*)(v3 + 56), v15);
	}
	else
	{
		sub_14006A230((__int64*)v3, v15, v7, 255, v7);
	}
	sub_1400656B0(a1, 262, 277, a2);
	sub_140065E10(v3);
	*(_DWORD*)(v3 + 52) = *(_DWORD*)(v3 + 48);
	if (v11 != -1)
		sub_14006A3C0((__int64*)v3, (int*)(v3 + 56), v11);
}
// 14006866A: variable 'v9' is possibly undefined
// 140069EC0: using guessed type __int64 __fastcall sub_140069EC0(_QWORD, _QWORD);

