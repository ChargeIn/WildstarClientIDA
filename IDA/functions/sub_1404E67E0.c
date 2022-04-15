//----- (00000001404E67E0) ----------------------------------------------------
__int64 __fastcall sub_1404E67E0(__int64 a1)
{
	unsigned __int64 v1; // rsi
	unsigned __int64 v3; // rdx
	unsigned int v4; // ecx
	__int64 v5; // r8
	__int64 v6; // rax
	__int64 v7; // rbx
	unsigned int v8; // ebp
	unsigned int v9; // eax
	__int64 v10; // rcx
	unsigned int v11; // r14d
	unsigned __int64 v12; // rax
	__int64 v13; // rbx
	__int64 v14; // rax
	int v15; // ebx
	unsigned __int64 v16; // rbp
	__int64(__fastcall * *v17)(); // r14
	__int64 v18; // rcx
	unsigned __int64 v19; // rax
	__int64 v20; // rbx
	__int64 v21; // rax
	int v22; // eax
	__int64(__fastcall * v23)(); // rdx
	int v24; // ebx
	__int64 v25; // rdx
	__int64 v26; // r9
	_DWORD* v27; // rcx
	__int64 v28; // r8
	__int64 v29; // rdx
	__int64(__fastcall * *v31)(); // [rsp+20h] [rbp-58h] BYREF
	unsigned __int64 v32; // [rsp+28h] [rbp-50h]
	__int64 v33; // [rsp+30h] [rbp-48h]
	int v34; // [rsp+38h] [rbp-40h]
	__int64(__fastcall * *v35)(); // [rsp+40h] [rbp-38h] BYREF
	int v36; // [rsp+48h] [rbp-30h]
	__int64 v37; // [rsp+50h] [rbp-28h]
	int v38; // [rsp+58h] [rbp-20h]
	double v39; // [rsp+80h] [rbp+8h]

	v1 = 0i64;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = *(_QWORD*)(qword_140C63650 + 760);
		v6 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != a1)
		{
			v6 = ++v4;
			if (v4 >= v3)
				goto LABEL_5;
		}
		v7 = *(_QWORD*)(v5 + 8i64 * v4);
	}
	else
	{
	LABEL_5:
		v7 = 0i64;
	}
	v8 = sub_1400F26A0(v7 + 384, 1);
	v9 = sub_1400F26A0(v7 + 384, 2);
	v10 = *(_QWORD*)(a1 + 32);
	v11 = v9;
	v12 = *(_QWORD*)(v10 + 112);
	v35 = off_140B569F0;
	v37 = a1;
	v38 = 1;
	if (*(_QWORD*)(v10 + 120) >= v12)
		sub_14005E2C0(a1);
	v13 = *(_QWORD*)(a1 + 16);
	v14 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v13 + 8) = 5;
	*(_QWORD*)v13 = v14;
	*(_QWORD*)(a1 + 16) += 16i64;
	v15 = sub_1400578C0(a1);
	v36 = v15;
	sub_1403E0840((int**)&v31, v8, v11);
	v16 = v32;
	v17 = v31;
	if (v32)
	{
		do
		{
			v18 = *(_QWORD*)(a1 + 32);
			v31 = off_140B569F0;
			v33 = a1;
			v19 = *(_QWORD*)(v18 + 112);
			v34 = 1;
			if (*(_QWORD*)(v18 + 120) >= v19)
				sub_14005E2C0(a1);
			v20 = *(_QWORD*)(a1 + 16);
			v21 = sub_14005C1B0(a1, 0, 0);
			*(_DWORD*)(v20 + 8) = 5;
			*(_QWORD*)v20 = v21;
			*(_QWORD*)(a1 + 16) += 16i64;
			v22 = sub_1400578C0(a1);
			v23 = v17[v1];
			v24 = v22;
			LODWORD(v32) = v22;
			if (v23)
				sub_1404E62F0((__int64)&v31, v23);
			sub_1400FB1D0((__int64)&v35);
			sub_1400579E0(a1, v25, v24);
			++v1;
		} while (v1 < v16);
		a1 = v37;
		v15 = v36;
	}
	v26 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64);
	if ((unsigned int)(v15 - 1) >= *(_DWORD*)(v26 + 56))
	{
		if ((double)v15 == 0.0)
		{
			v27 = *(_DWORD**)(v26 + 32);
		}
		else
		{
			v39 = (double)v15;
			v27 = (_DWORD*)(*(_QWORD*)(v26 + 32)
				+ 40 * ((unsigned int)(LODWORD(v39) + HIDWORD(v39)) % (((1i64 << *(_BYTE*)(v26 + 11)) - 1) | 1)));
		}
		while (v27[6] != 3 || (double)v15 != *((double*)v27 + 2))
		{
			v27 = (_DWORD*)*((_QWORD*)v27 + 4);
			if (!v27)
			{
				v27 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v27 = (_DWORD*)(*(_QWORD*)(v26 + 24) + 16i64 * (v15 - 1));
	}
	v28 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v28 = *(_QWORD*)v27;
	v29 = (unsigned int)v27[2];
	*(_DWORD*)(v28 + 8) = v29;
	*(_QWORD*)(a1 + 16) += 16i64;
	if (v17)
		(*((void(__fastcall**)(__int64(__fastcall**)())) * (v17 - 2) + 1))(v17 - 2);
	sub_1400579E0(a1, v29, v15);
	return 1i64;
}
// 1404E696B: variable 'v25' is possibly undefined
// 1404E6A51: variable 'v29' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63650: using guessed type __int64 qword_140C63650;

