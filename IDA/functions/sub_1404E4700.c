//----- (00000001404E4700) ----------------------------------------------------
__int64 __fastcall sub_1404E4700(__int64 a1)
{
	__int64 v1; // rdi
	__int64 v2; // rcx
	__int64 v3; // rbx
	__int64 v4; // rax
	int v5; // r9d
	__int64 v6; // rax
	unsigned __int64 v7; // rbp
	unsigned __int64 v8; // r15
	__int64 v9; // r14
	__int64 v10; // rax
	__int64 v11; // rsi
	__int64 v12; // rcx
	unsigned __int64 v13; // rax
	__int64 v14; // rbx
	__int64 v15; // rax
	__int64 v16; // rdx
	int v17; // ebx
	__int64 v18; // r10
	_DWORD* v19; // rcx
	__int64 v20; // r8
	__int64 v21; // rdx
	__int64(__fastcall * *v23)(); // [rsp+20h] [rbp-68h] BYREF
	int v24; // [rsp+28h] [rbp-60h]
	__int64 v25; // [rsp+30h] [rbp-58h]
	int v26; // [rsp+38h] [rbp-50h]
	__int64(__fastcall * *v27)(); // [rsp+40h] [rbp-48h] BYREF
	int v28; // [rsp+48h] [rbp-40h]
	__int64 v29; // [rsp+50h] [rbp-38h]
	int v30; // [rsp+58h] [rbp-30h]
	double v31; // [rsp+90h] [rbp+8h]

	v25 = a1;
	v1 = a1;
	v2 = *(_QWORD*)(a1 + 32);
	v26 = 1;
	v23 = off_140B569F0;
	if (*(_QWORD*)(v2 + 120) >= *(_QWORD*)(v2 + 112))
		sub_14005E2C0(v1);
	v3 = *(_QWORD*)(v1 + 16);
	v4 = sub_14005C1B0(v1, 0, 0);
	*(_DWORD*)(v3 + 8) = 5;
	*(_QWORD*)v3 = v4;
	*(_QWORD*)(v1 + 16) += 16i64;
	v5 = sub_1400578C0(v1);
	v24 = v5;
	v6 = qword_140C635F0;
	v7 = 0i64;
	v8 = *(_QWORD*)(*(_QWORD*)(qword_140C635F0 + 5584) + 160i64);
	if (v8)
	{
		v9 = 0i64;
		while (1)
		{
			v10 = *(_QWORD*)(v6 + 5584);
			if (v7 >= *(_QWORD*)(v10 + 160))
				v11 = 0i64;
			else
				v11 = v9 + *(_QWORD*)(v10 + 152);
			v12 = *(_QWORD*)(v1 + 32);
			v27 = off_140B569F0;
			v29 = v1;
			v13 = *(_QWORD*)(v12 + 112);
			v30 = 1;
			if (*(_QWORD*)(v12 + 120) >= v13)
				sub_14005E2C0(v1);
			v14 = *(_QWORD*)(v1 + 16);
			v15 = sub_14005C1B0(v1, 0, 0);
			*(_DWORD*)(v14 + 8) = 5;
			*(_QWORD*)v14 = v15;
			*(_QWORD*)(v1 + 16) += 16i64;
			v17 = sub_1400578C0(v1);
			v28 = v17;
			if (v11 && (unsigned int)sub_1404E41F0((__int64)&v27, v11))
				sub_1400FB1D0((__int64)&v23);
			sub_1400579E0(v1, v16, v17);
			++v7;
			v9 += 16i64;
			if (v7 >= v8)
				break;
			v6 = qword_140C635F0;
		}
		v1 = v25;
		v5 = v24;
	}
	v18 = *(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64);
	if ((unsigned int)(v5 - 1) >= *(_DWORD*)(v18 + 56))
	{
		if ((double)v5 == 0.0)
		{
			v19 = *(_DWORD**)(v18 + 32);
		}
		else
		{
			v31 = (double)v5;
			v19 = (_DWORD*)(*(_QWORD*)(v18 + 32)
				+ 40 * ((unsigned int)(LODWORD(v31) + HIDWORD(v31)) % (((1i64 << *(_BYTE*)(v18 + 11)) - 1) | 1)));
		}
		while (v19[6] != 3 || (double)v5 != *((double*)v19 + 2))
		{
			v19 = (_DWORD*)*((_QWORD*)v19 + 4);
			if (!v19)
			{
				v19 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v19 = (_DWORD*)(*(_QWORD*)(v18 + 24) + 16i64 * (v5 - 1));
	}
	v20 = *(_QWORD*)(v1 + 16);
	*(_QWORD*)v20 = *(_QWORD*)v19;
	v21 = (unsigned int)v19[2];
	*(_DWORD*)(v20 + 8) = v21;
	*(_QWORD*)(v1 + 16) += 16i64;
	sub_1400579E0(v1, v21, v5);
	return 1i64;
}
// 1404E484C: variable 'v16' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C635F0: using guessed type __int64 qword_140C635F0;

