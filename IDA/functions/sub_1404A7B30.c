#include "../winhttp.h"

//----- (00000001404A7B30) ----------------------------------------------------
__int64 __fastcall sub_1404A7B30(__int64 a1, int* a2)
{
	unsigned int v2; // ebx
	__int64 v3; // rdi
	__int64 v4; // rcx
	int v6; // eax
	__int64 v7; // rax
	__int64 v8; // rcx
	__int64 v9; // rsi
	__int64 v11; // r8
	unsigned int v12; // edx
	unsigned int v13; // r8d
	__int64 v14; // rdx
	int* v15; // rax
	__int64 v16; // rcx
	int v17; // eax
	__int64 v18; // rax
	char v19[16]; // [rsp+20h] [rbp-48h] BYREF
	__int64(__fastcall * *v20)(); // [rsp+30h] [rbp-38h] BYREF
	int v21; // [rsp+38h] [rbp-30h]
	int v22; // [rsp+3Ch] [rbp-2Ch]
	__int64 v23; // [rsp+40h] [rbp-28h]
	__int64 v24; // [rsp+70h] [rbp+8h] BYREF
	int* v25; // [rsp+78h] [rbp+10h] BYREF
	int* v26; // [rsp+80h] [rbp+18h] BYREF

	v24 = a1;
	v2 = *a2;
	v3 = qword_140C659B0;
	v4 = *(_QWORD*)(qword_140C65898 + 7152);
	LODWORD(v24) = *a2;
	if (v4)
		v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 24i64))(v4);
	else
		v6 = 0;
	v7 = sub_1404A9B30(v3, v6, v2);
	v9 = v7;
	if (!v7)
		return 2147500037i64;
	v11 = *(_QWORD*)v7;
	if (*(_DWORD*)(*(_QWORD*)v7 + 4i64) == 1)
	{
		if (((a2[1]
			- (((unsigned int)a2[1] >> 2) & 0x9249249)
			- (((unsigned int)a2[1] >> 1) & 0x5B6DB6DB)
			+ ((a2[1] - (((unsigned int)a2[1] >> 2) & 0x9249249) - (((unsigned int)a2[1] >> 1) & 0x5B6DB6DB)) >> 3)) & 0xC71C71C7)
			% 0x3F < *(_DWORD*)(v11 + 44))
		{
			v14 = *(_QWORD*)(v3 + 1048);
			v15 = (int*)v14;
			v16 = *(_QWORD*)(v14 + 8);
			while (v16)
			{
				if (*(_DWORD*)(v16 + 32) < v2)
				{
					v16 = *(_QWORD*)(v16 + 24);
				}
				else
				{
					v15 = (int*)v16;
					v16 = *(_QWORD*)(v16 + 16);
				}
			}
			if (v15 == (int*)v14 || v2 < v15[8])
			{
				v24 = v2;
				v25 = v15;
				sub_140032B30(v3 + 1040, &v26, (__int64*)&v25, &v24);
				v15 = v26;
			}
			v15[9] = a2[1];
			goto LABEL_20;
		}
		sub_140481460(v3 + 1040, &v24);
		v12 = 5;
		v13 = *(_DWORD*)(*(_QWORD*)v9 + 40i64);
	}
	else
	{
		v13 = *(_DWORD*)(v11 + 40);
		v12 = 4;
	}
	sub_1404CF010(v8, v12, v13, 1);
	sub_1400293C0(v3 + 1008, (__int64)v19, a2);
LABEL_20:
	v17 = *(_DWORD*)(*(_QWORD*)(qword_140C65898 + 120) + 8i64);
	v23 = 4i64;
	v22 = 33;
	v21 = v17;
	v20 = off_140B6F400;
	LODWORD(v23) = *(_DWORD*)(*(_QWORD*)v9 + 4i64);
	if (sub_14060AF20((__int64)&v20))
	{
		v18 = sub_1403D90D0(qword_140C65898, v21);
		if (v18)
		{
			if (sub_14047DCA0(v18))
				sub_14060AFE0((int*)&v20, v21);
		}
	}
	return 0i64;
}
// 1404A7C93: variable 'v8' is possibly undefined
// 140B6F400: using guessed type __int64 (__fastcall *off_140B6F400[237])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659B0: using guessed type __int64 qword_140C659B0;
// 1404A7B30: using guessed type char var_48[16];

