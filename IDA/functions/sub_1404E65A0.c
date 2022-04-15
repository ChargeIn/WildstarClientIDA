//----- (00000001404E65A0) ----------------------------------------------------
__int64 __fastcall sub_1404E65A0(__int64 a1)
{
	__int64 v1; // rdi
	__int64 v2; // rcx
	unsigned __int64 v3; // rax
	__int64 v4; // rbx
	__int64 v5; // rax
	int v6; // ebx
	unsigned __int64 v7; // rbp
	__int64(__fastcall * *v8)(); // r14
	unsigned __int64 v9; // rsi
	__int64 v10; // rcx
	unsigned __int64 v11; // rax
	__int64 v12; // rbx
	__int64 v13; // rax
	int v14; // eax
	__int64(__fastcall * v15)(); // rdx
	int v16; // ebx
	__int64 v17; // rdx
	__int64 v18; // r9
	_DWORD* v19; // rcx
	__int64 v20; // r8
	__int64 v21; // rdx
	__int64(__fastcall * *v23)(); // [rsp+20h] [rbp-58h] BYREF
	unsigned __int64 v24; // [rsp+28h] [rbp-50h]
	__int64 v25; // [rsp+30h] [rbp-48h]
	int v26; // [rsp+38h] [rbp-40h]
	__int64(__fastcall * *v27)(); // [rsp+40h] [rbp-38h] BYREF
	int v28; // [rsp+48h] [rbp-30h]
	__int64 v29; // [rsp+50h] [rbp-28h]
	int v30; // [rsp+58h] [rbp-20h]
	double v31; // [rsp+80h] [rbp+8h]

	v1 = a1;
	v29 = a1;
	v2 = *(_QWORD*)(a1 + 32);
	v3 = *(_QWORD*)(v2 + 112);
	v30 = 1;
	v27 = off_140B569F0;
	if (*(_QWORD*)(v2 + 120) >= v3)
		sub_14005E2C0(v1);
	v4 = *(_QWORD*)(v1 + 16);
	v5 = sub_14005C1B0(v1, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	*(_QWORD*)(v1 + 16) += 16i64;
	v6 = sub_1400578C0(v1);
	v28 = v6;
	sub_1403E0840(
		(int**)&v23,
		*(_DWORD*)(*(_QWORD*)(qword_140C635F0 + 5584) + 392i64) + 1,
		*(_DWORD*)(*(_QWORD*)(qword_140C635F0 + 5584) + 384i64));
	v7 = v24;
	v8 = v23;
	v9 = 0i64;
	if (v24)
	{
		do
		{
			v10 = *(_QWORD*)(v1 + 32);
			v23 = off_140B569F0;
			v25 = v1;
			v11 = *(_QWORD*)(v10 + 112);
			v26 = 1;
			if (*(_QWORD*)(v10 + 120) >= v11)
				sub_14005E2C0(v1);
			v12 = *(_QWORD*)(v1 + 16);
			v13 = sub_14005C1B0(v1, 0, 0);
			*(_DWORD*)(v12 + 8) = 5;
			*(_QWORD*)v12 = v13;
			*(_QWORD*)(v1 + 16) += 16i64;
			v14 = sub_1400578C0(v1);
			v15 = v8[v9];
			v16 = v14;
			LODWORD(v24) = v14;
			if (v15)
				sub_1404E62F0((__int64)&v23, v15);
			sub_1400FB1D0((__int64)&v27);
			sub_1400579E0(v1, v17, v16);
			++v9;
		} while (v9 < v7);
		v1 = v29;
		v6 = v28;
	}
	v18 = *(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64);
	if ((unsigned int)(v6 - 1) >= *(_DWORD*)(v18 + 56))
	{
		if ((double)v6 == 0.0)
		{
			v19 = *(_DWORD**)(v18 + 32);
		}
		else
		{
			v31 = (double)v6;
			v19 = (_DWORD*)(*(_QWORD*)(v18 + 32)
				+ 40 * ((unsigned int)(LODWORD(v31) + HIDWORD(v31)) % (((1i64 << *(_BYTE*)(v18 + 11)) - 1) | 1)));
		}
		while (v19[6] != 3 || (double)v6 != *((double*)v19 + 2))
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
		v19 = (_DWORD*)(*(_QWORD*)(v18 + 24) + 16i64 * (v6 - 1));
	}
	v20 = *(_QWORD*)(v1 + 16);
	*(_QWORD*)v20 = *(_QWORD*)v19;
	v21 = (unsigned int)v19[2];
	*(_DWORD*)(v20 + 8) = v21;
	*(_QWORD*)(v1 + 16) += 16i64;
	if (v8)
		(*((void(__fastcall**)(__int64(__fastcall**)())) * (v8 - 2) + 1))(v8 - 2);
	sub_1400579E0(v1, v21, v6);
	return 1i64;
}
// 1404E66DB: variable 'v17' is possibly undefined
// 1404E67B9: variable 'v21' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C635F0: using guessed type __int64 qword_140C635F0;

