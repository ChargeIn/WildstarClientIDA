//----- (00000001404E7DD0) ----------------------------------------------------
__int64 __fastcall sub_1404E7DD0(__int64 a1)
{
	__int64 v1; // rdi
	__int64 v2; // rcx
	__int64 v3; // rbx
	__int64 v4; // rax
	int v5; // eax
	__int64 v6; // rsi
	unsigned __int64 v7; // rbx
	int v8; // r9d
	__int64 v9; // r10
	_DWORD* v10; // rcx
	__int64 v11; // r8
	__int64 v12; // rdx
	__int64(__fastcall * *v14)(); // [rsp+20h] [rbp-28h] BYREF
	int v15; // [rsp+28h] [rbp-20h]
	__int64 v16; // [rsp+30h] [rbp-18h]
	int v17; // [rsp+38h] [rbp-10h]
	double v18; // [rsp+50h] [rbp+8h]

	v1 = a1;
	v16 = a1;
	v2 = *(_QWORD*)(a1 + 32);
	v14 = off_140B569F0;
	v17 = 1;
	if (*(_QWORD*)(v2 + 120) >= *(_QWORD*)(v2 + 112))
		sub_14005E2C0(v1);
	v3 = *(_QWORD*)(v1 + 16);
	v4 = sub_14005C1B0(v1, 0, 0);
	*(_DWORD*)(v3 + 8) = 5;
	*(_QWORD*)v3 = v4;
	*(_QWORD*)(v1 + 16) += 16i64;
	v5 = sub_1400578C0(v1);
	v6 = qword_140C635F0;
	v7 = 0i64;
	v8 = v5;
	v15 = v5;
	if (*(_QWORD*)(qword_140C635F0 + 5968))
	{
		do
		{
			sub_1400FAD30((__int64)&v14);
			++v7;
		} while (v7 < *(_QWORD*)(v6 + 5968));
		v1 = v16;
		v8 = v15;
	}
	v9 = *(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64);
	if ((unsigned int)(v8 - 1) >= *(_DWORD*)(v9 + 56))
	{
		if ((double)v8 == 0.0)
		{
			v10 = *(_DWORD**)(v9 + 32);
		}
		else
		{
			v18 = (double)v8;
			v10 = (_DWORD*)(*(_QWORD*)(v9 + 32)
				+ 40 * ((unsigned int)(LODWORD(v18) + HIDWORD(v18)) % (((1i64 << *(_BYTE*)(v9 + 11)) - 1) | 1)));
		}
		while (v10[6] != 3 || (double)v8 != *((double*)v10 + 2))
		{
			v10 = (_DWORD*)*((_QWORD*)v10 + 4);
			if (!v10)
			{
				v10 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v10 = (_DWORD*)(*(_QWORD*)(v9 + 24) + 16i64 * (v8 - 1));
	}
	v11 = *(_QWORD*)(v1 + 16);
	*(_QWORD*)v11 = *(_QWORD*)v10;
	v12 = (unsigned int)v10[2];
	*(_DWORD*)(v11 + 8) = v12;
	*(_QWORD*)(v1 + 16) += 16i64;
	sub_1400579E0(v1, v12, v8);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C635F0: using guessed type __int64 qword_140C635F0;

