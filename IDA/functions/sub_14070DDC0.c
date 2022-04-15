#include "../winhttp.h"

//----- (000000014070DDC0) ----------------------------------------------------
__int64 __fastcall sub_14070DDC0(__int64 a1)
{
	__int64 v1; // rdi
	__int64 v2; // rcx
	unsigned __int64 v3; // rax
	__int64 v4; // rbx
	__int64 v5; // rax
	int v6; // r9d
	__int64 v7; // rsi
	__int64 v8; // rcx
	unsigned __int64 v9; // rax
	__int64 v10; // rbx
	__int64 v11; // rax
	__int64 v12; // rdx
	__int64 v13; // r10
	_DWORD* v14; // rcx
	__int64 v15; // r8
	__int64 v16; // rdx
	__int64(__fastcall * *v18)(); // [rsp+20h] [rbp-48h] BYREF
	int v19; // [rsp+28h] [rbp-40h]
	__int64 v20; // [rsp+30h] [rbp-38h]
	int v21; // [rsp+38h] [rbp-30h]
	__int64(__fastcall * *v22)(); // [rsp+40h] [rbp-28h] BYREF
	int v23; // [rsp+48h] [rbp-20h]
	__int64 v24; // [rsp+50h] [rbp-18h]
	int v25; // [rsp+58h] [rbp-10h]
	double v26; // [rsp+70h] [rbp+8h]

	v1 = a1;
	v20 = a1;
	v2 = *(_QWORD*)(a1 + 32);
	v3 = *(_QWORD*)(v2 + 112);
	v21 = 1;
	v18 = off_140B569F0;
	if (*(_QWORD*)(v2 + 120) >= v3)
		sub_14005E2C0(v1);
	v4 = *(_QWORD*)(v1 + 16);
	v5 = sub_14005C1B0(v1, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	*(_QWORD*)(v1 + 16) += 16i64;
	v6 = sub_1400578C0(v1);
	v19 = v6;
	v7 = *(_QWORD*)(qword_140C65898 + 27280);
	if (v7)
	{
		do
		{
			v8 = *(_QWORD*)(v1 + 32);
			v22 = off_140B569F0;
			v24 = v1;
			v9 = *(_QWORD*)(v8 + 112);
			v25 = 1;
			if (*(_QWORD*)(v8 + 120) >= v9)
				sub_14005E2C0(v1);
			v10 = *(_QWORD*)(v1 + 16);
			v11 = sub_14005C1B0(v1, 0, 0);
			*(_DWORD*)(v10 + 8) = 5;
			*(_QWORD*)v10 = v11;
			*(_QWORD*)(v1 + 16) += 16i64;
			LODWORD(v10) = sub_1400578C0(v1);
			v23 = v10;
			sub_1405DAB80(v7, (__int64)&v22);
			sub_1400FB1D0((__int64)&v18);
			sub_1400579E0(v1, v12, v10);
			v7 = *(_QWORD*)(v7 + 272);
		} while (v7);
		v1 = v20;
		v6 = v19;
	}
	v13 = *(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64);
	if ((unsigned int)(v6 - 1) >= *(_DWORD*)(v13 + 56))
	{
		if ((double)v6 == 0.0)
		{
			v14 = *(_DWORD**)(v13 + 32);
		}
		else
		{
			v26 = (double)v6;
			v14 = (_DWORD*)(*(_QWORD*)(v13 + 32)
				+ 40 * ((unsigned int)(LODWORD(v26) + HIDWORD(v26)) % (((1i64 << *(_BYTE*)(v13 + 11)) - 1) | 1)));
		}
		while (v14[6] != 3 || (double)v6 != *((double*)v14 + 2))
		{
			v14 = (_DWORD*)*((_QWORD*)v14 + 4);
			if (!v14)
			{
				v14 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v14 = (_DWORD*)(*(_QWORD*)(v13 + 24) + 16i64 * (v6 - 1));
	}
	v15 = *(_QWORD*)(v1 + 16);
	*(_QWORD*)v15 = *(_QWORD*)v14;
	v16 = (unsigned int)v14[2];
	*(_DWORD*)(v15 + 8) = v16;
	*(_QWORD*)(v1 + 16) += 16i64;
	sub_1400579E0(v1, v16, v6);
	return 1i64;
}
// 14070DEC5: variable 'v12' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;

