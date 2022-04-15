#include "../winhttp.h"

//----- (00000001404A7D40) ----------------------------------------------------
__int64 __fastcall sub_1404A7D40(__int64 a1, unsigned int* a2)
{
	__int64 v2; // rsi
	__int64 v4; // rax
	__int64** v5; // rcx
	unsigned int v6; // ebp
	__int64 v7; // rdi
	int v8; // ebx
	__int64 v9; // rcx
	int v10; // eax
	__int64 v11; // rax
	int v12; // ecx
	__int64 v13; // rax
	char v15[16]; // [rsp+20h] [rbp-38h] BYREF
	__int64(__fastcall * *v16)(); // [rsp+30h] [rbp-28h] BYREF
	int v17; // [rsp+38h] [rbp-20h]
	int v18; // [rsp+3Ch] [rbp-1Ch]
	__int64 v19; // [rsp+40h] [rbp-18h]
	__int64 v20; // [rsp+60h] [rbp+8h] BYREF

	v20 = a1;
	v2 = qword_140C659B0;
	sub_140481460(qword_140C659B0 + 1072, a2);
	v20 = *(_QWORD*)a2;
	sub_140032F50(v2 + 1072, (__int64)v15, &v20);
	if ((unsigned int)sub_1404A80B0(v2, *a2))
	{
		v4 = sub_1404A88A0(v2, *a2);
		if (v4)
		{
			v5 = *(__int64***)(v4 + 8);
			if (v5 != *(__int64***)(v4 + 16))
				sub_1404CF010(**v5, 6u, *(_DWORD*)(**v5 + 40), 1);
		}
	}
	v6 = *a2;
	v7 = qword_140C65898;
	v8 = 0;
	v9 = *(_QWORD*)(qword_140C65898 + 7152);
	if (v9)
	{
		v10 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v9 + 24i64))(v9);
		v7 = qword_140C65898;
	}
	else
	{
		v10 = 0;
	}
	v11 = sub_1404A9BB0(v2, v10, v6);
	if (v11)
	{
		v12 = *(_DWORD*)(*(_QWORD*)(v7 + 120) + 8i64);
		v19 = 2i64;
		v18 = 33;
		v17 = v12;
		v16 = off_140B6F400;
		LOBYTE(v8) = (unsigned int)((__int64)(*(_QWORD*)(v11 + 24) - *(_QWORD*)(v11 + 16)) >> 3) > 1;
		HIDWORD(v19) = v8;
		if (sub_14060AF20((__int64)&v16))
		{
			v13 = sub_1403D90D0(qword_140C65898, v17);
			if (v13)
			{
				if (sub_14047DCA0(v13))
					sub_14060AFE0((int*)&v16, v17);
			}
		}
	}
	return 0i64;
}
// 140B6F400: using guessed type __int64 (__fastcall *off_140B6F400[237])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659B0: using guessed type __int64 qword_140C659B0;
// 1404A7D40: using guessed type char var_38[16];

