#include "../winhttp.h"

//----- (00000001403BEA90) ----------------------------------------------------
__int64 __fastcall sub_1403BEA90(__int64* a1, unsigned int* a2)
{
	__int64 v2; // rdi
	__int64 v5; // r8
	__int64 v6; // rdx
	__int64 v7; // rcx
	__int64 v8; // rax
	__int64 v9; // rax
	__int64 v10; // rdx
	__int64 v11; // rcx
	__int64 v12; // rax
	__int64 v13; // rsi
	__int64 v14; // rax
	__int64 v15; // r14
	__int64 v16; // rcx
	int v17; // ebx
	int v18; // r15d
	unsigned int v19; // edx
	int v20; // ebx
	__int64 v22; // [rsp+20h] [rbp-58h]
	_QWORD v23[4]; // [rsp+30h] [rbp-48h] BYREF
	__int64 v24; // [rsp+88h] [rbp+10h] BYREF

	v2 = *a2;
	if ((_DWORD)v2)
	{
		v5 = a1[693];
		v6 = v5;
		v7 = *(_QWORD*)(v5 + 8);
		v8 = v7;
		while (v8)
		{
			if (*(_DWORD*)(v8 + 32) < (unsigned int)v2)
			{
				v8 = *(_QWORD*)(v8 + 24);
			}
			else
			{
				v6 = v8;
				v8 = *(_QWORD*)(v8 + 16);
			}
		}
		if (v6 == v5 || (v24 = v6, (unsigned int)v2 < *(_DWORD*)(v6 + 32)))
			v24 = v5;
		if (v24 != v5 && *(_DWORD*)(v24 + 36))
		{
			v9 = v5;
			while (v7)
			{
				if (*(_DWORD*)(v7 + 32) < (unsigned int)v2)
				{
					v7 = *(_QWORD*)(v7 + 24);
				}
				else
				{
					v9 = v7;
					v7 = *(_QWORD*)(v7 + 16);
				}
			}
			if (v9 == v5 || (v24 = v9, (unsigned int)v2 < *(_DWORD*)(v9 + 32)))
				v24 = v5;
			if (v24 != v5)
				sub_1403D5FD0((__int64)(a1 + 692), &v24);
		}
		v10 = a1[689];
		v11 = v10;
		v12 = *(_QWORD*)(v10 + 8);
		while (v12)
		{
			if (*(_DWORD*)(v12 + 32) < (unsigned int)v2)
			{
				v12 = *(_QWORD*)(v12 + 24);
			}
			else
			{
				v11 = v12;
				v12 = *(_QWORD*)(v12 + 16);
			}
		}
		if (v11 == v10 || (v24 = v11, (unsigned int)v2 < *(_DWORD*)(v11 + 32)))
			v24 = v10;
		if (v24 != v10)
		{
			v13 = *(_QWORD*)(v24 + 40);
			*(_DWORD*)v13 = *((char*)a2 + 4);
			*(_DWORD*)(v13 + 8) = 0;
			v14 = sub_1403ACD90(qword_140C65B70, v2, a1[15]);
			v15 = v14;
			if (v14)
			{
				v16 = *(_QWORD*)(v14 + 112);
				v17 = *(_DWORD*)(v16 + 24);
				if ((*(_BYTE*)(v16 + 268) & 0x40) == 0)
					Apollo_LUAEvent(a1[3688], "UpdateSpellThreshold", byte_1409E9C44, (unsigned int)v2, *(_DWORD*)v13 + 1);
				v18 = sub_140564FB0(v16, v2);
				if (*(_DWORD*)(*(_QWORD*)(v15 + 112) + 24i64) == 7)
					--v18;
				if (*(_DWORD*)v13 < v18)
				{
					if (v17 == 7)
					{
						if (*(_QWORD*)(v13 + 120))
							sub_140195D70(v13 + 104);
						LODWORD(v23[0]) = 1;
						v20 = sub_1403C0210((__int64)a1, v2);
						v23[1] = sub_14001C280((__int64)a1);
						v23[3] = v2;
						v23[2] = nullsub_1;
						sub_140195960(v13 + 104, v20, (__int64)v23, 4);
						if ((*(_BYTE*)(*(_QWORD*)(v15 + 112) + 268i64) & 0x40) == 0)
						{
							LODWORD(v22) = v18;
							Apollo_LUAEvent(a1[3688], "StartSpellThreshold", byte_1409E98FC, (unsigned int)v2, v22, 7, v23[0]);
						}
					}
				}
				else
				{
					*(_DWORD*)(v13 + 4) = 1;
					if (v17 == 6)
					{
						v19 = *(_DWORD*)(v13 + 20);
						if (v19)
							v15 = sub_1403ACD90(qword_140C65B70, v19, a1[3218]);
						sub_14046B1E0(a1[15], v15, 0i64);
					}
				}
			}
		}
	}
	return 0i64;
}
// 1403BEC45: variable 'v16' is possibly undefined
// 1403BED35: variable 'v22' is possibly undefined
// 140001B70: using guessed type __int64 __fastcall nullsub_1(_QWORD);
// 1409E98FC: using guessed type _BYTE byte_1409E98FC[24];
// 1409E9C44: using guessed type _BYTE byte_1409E9C44[24];
// 140C65B70: using guessed type __int64 qword_140C65B70;

