#include "../winhttp.h"

//----- (00000001403DB610) ----------------------------------------------------
__int64 __fastcall sub_1403DB610(__int64 a1, __int64 a2)
{
	int v2; // esi
	unsigned int i; // edi
	__int64 v6; // r14
	__int64* v7; // r8
	int v8; // ecx
	unsigned int v9; // r9d
	unsigned int v10; // eax
	unsigned int v11; // r8d
	__int64 v12; // rcx
	__int64 v13; // rax
	__int64 v14; // rcx
	__int64 v16; // [rsp+40h] [rbp-88h] BYREF
	__int64 v17; // [rsp+48h] [rbp-80h]
	unsigned __int16 v18[40]; // [rsp+50h] [rbp-78h] BYREF

	v2 = 0;
	for (i = 0; i < *(_DWORD*)(a2 + 36); ++i)
	{
		v6 = 24i64 * i;
		v7 = (__int64*)(v6 + *(_QWORD*)(a2 + 40));
		v17 = 0i64;
		v16 = 0i64;
		if ((unsigned int)sub_1403F82F0(qword_140C65898, 5, v7, v18, 0x21u, &v16, 0i64))
		{
			v8 = 0;
			v9 = *(_DWORD*)(v6 + *(_QWORD*)(a2 + 40) + 16);
			if (v9 > 0x64)
			{
				v9 -= 100;
				v8 = 1;
			}
			sub_140428AC0(*(_QWORD*)(a1 + 29504), v18, *(_DWORD*)a2, v9, v8);
		}
	}
	if (*(_DWORD*)(a2 + 8) && *(_QWORD*)(a2 + 16))
	{
		v17 = 0i64;
		v16 = 0i64;
		if ((unsigned int)sub_1403F82F0(qword_140C65898, 5, (__int64*)(a2 + 8), v18, 0x21u, &v16, 0i64))
		{
			v10 = *(_DWORD*)(a2 + 24);
			v11 = *(_DWORD*)a2;
			v12 = *(_QWORD*)(a1 + 29504);
			if (v10 == -1)
			{
				sub_140429180(v12, v18, v11);
			}
			else
			{
				LOBYTE(v2) = v10 > 0x64;
				sub_140428E40(v12, v18, v11, v2);
			}
		}
	}
	else
	{
		sub_140429400(*(_QWORD*)(a1 + 29504), *(_DWORD*)a2);
	}
	sub_1405FF370(*(_QWORD*)(a1 + 32144), *(_DWORD*)a2);
	v13 = sub_1403D90D0(qword_140C65898, *(_DWORD*)a2);
	if (v13)
	{
		v14 = *(_QWORD*)(v13 + 13984);
		if (v14)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v14 + 936i64))(v14);
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 1403DB610: using guessed type unsigned __int16 var_78[40];

