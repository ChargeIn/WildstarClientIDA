#include "../winhttp.h"

//----- (000000014076B770) ----------------------------------------------------
__int64 __fastcall sub_14076B770(__int64 a1)
{
	__int64 v2; // rcx
	int v3; // eax
	unsigned int v4; // edi
	int v5; // esi
	__int64 v6; // rcx
	unsigned __int64 v7; // rax
	__int64 v8; // rbx
	__int64 v9; // rax
	int v10; // ebx
	__int64 v11; // r10
	__int64 v12; // r9
	_DWORD* v13; // rcx
	__int64 v14; // r9
	int v15; // r8d
	__int64 v16; // rdx
	__int64(__fastcall * *v18)(); // [rsp+20h] [rbp-28h] BYREF
	int v19; // [rsp+28h] [rbp-20h]
	__int64 v20; // [rsp+30h] [rbp-18h]
	int v21; // [rsp+38h] [rbp-10h]
	double v22; // [rsp+50h] [rbp+8h]

	v2 = *(_QWORD*)(qword_140C65898 + 120);
	if (v2)
		v3 = *(_DWORD*)(v2 + 220);
	else
		v3 = 23;
	v4 = 0;
	switch (v3)
	{
	case 1:
	case 2:
	case 5:
		v5 = 5;
		break;
	case 3:
	case 4:
	case 7:
		v5 = 6;
		break;
	default:
		v5 = 0;
		break;
	}
	v6 = *(_QWORD*)(a1 + 32);
	v20 = a1;
	v18 = off_140B569F0;
	v7 = *(_QWORD*)(v6 + 112);
	v21 = 1;
	if (*(_QWORD*)(v6 + 120) >= v7)
		sub_14005E2C0(a1);
	v8 = *(_QWORD*)(a1 + 16);
	v9 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v8 + 8) = 5;
	*(_QWORD*)v8 = v9;
	*(_QWORD*)(a1 + 16) += 16i64;
	v19 = sub_1400578C0(a1);
	v10 = 1;
	do
	{
		if ((v10 & v5) != 0)
			sub_1400FA9E0((__int64)&v18);
		v10 = __ROL4__(v10, 1);
		++v4;
	} while (v4 < 3);
	v11 = v20;
	v12 = *(_QWORD*)(*(_QWORD*)(v20 + 32) + 160i64);
	if ((unsigned int)(v19 - 1) >= *(_DWORD*)(v12 + 56))
	{
		if ((double)v19 == 0.0)
		{
			v13 = *(_DWORD**)(v12 + 32);
		}
		else
		{
			v22 = (double)v19;
			v13 = (_DWORD*)(*(_QWORD*)(v12 + 32)
				+ 40 * ((unsigned int)(LODWORD(v22) + HIDWORD(v22)) % (((1i64 << *(_BYTE*)(v12 + 11)) - 1) | 1)));
		}
		while (v13[6] != 3 || (double)v19 != *((double*)v13 + 2))
		{
			v13 = (_DWORD*)*((_QWORD*)v13 + 4);
			if (!v13)
			{
				v13 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v13 = (_DWORD*)(*(_QWORD*)(v12 + 24) + 16i64 * (v19 - 1));
	}
	v14 = *(_QWORD*)(v20 + 16);
	v15 = v19;
	*(_QWORD*)v14 = *(_QWORD*)v13;
	v16 = (unsigned int)v13[2];
	*(_DWORD*)(v14 + 8) = v16;
	*(_QWORD*)(v11 + 16) += 16i64;
	sub_1400579E0(v11, v16, v15);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;

