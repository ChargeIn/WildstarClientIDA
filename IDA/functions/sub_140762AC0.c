//----- (0000000140762AC0) ----------------------------------------------------
__int64 __fastcall sub_140762AC0(__int64 a1)
{
	__int64 v2; // rbx
	__int64 v3; // rax
	int v4; // r13d
	unsigned int i; // r12d
	__int64 v6; // rcx
	_QWORD* v7; // rdi
	unsigned __int64 v8; // rax
	__int64 v9; // rbx
	__int64 v10; // rax
	int v11; // eax
	__int64 v12; // rcx
	int v13; // r14d
	unsigned __int64 v14; // rbp
	__int64 v15; // r15
	unsigned __int64 v16; // rbx
	__int64 v17; // r9
	_DWORD* v18; // rdx
	__int64 v19; // rcx
	__int64 v20; // rcx
	int v21; // eax
	__int64 v22; // rax
	__int64 v23; // r10
	__int64 v24; // r9
	_DWORD* v25; // rcx
	__int64 v26; // r8
	__int64 v27; // rdx
	__int64 v28; // r9
	_DWORD* v29; // r8
	__int64 v30; // rdx
	__int64 v32; // [rsp+20h] [rbp-78h] BYREF
	unsigned __int64 v33; // [rsp+28h] [rbp-70h]
	__int64(__fastcall * *v34)(); // [rsp+30h] [rbp-68h] BYREF
	int v35; // [rsp+38h] [rbp-60h]
	_QWORD* v36; // [rsp+40h] [rbp-58h]
	int v37; // [rsp+48h] [rbp-50h]
	int v38; // [rsp+A0h] [rbp+8h]
	double v39; // [rsp+A0h] [rbp+8h]
	double v40; // [rsp+A8h] [rbp+10h] BYREF

	v38 = 1;
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v2 = *(_QWORD*)(a1 + 16);
	v3 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v2 + 8) = 5;
	*(_QWORD*)v2 = v3;
	*(_QWORD*)(a1 + 16) += 16i64;
	v4 = sub_1400578C0(a1);
	for (i = 1; i < 3; ++i)
	{
		v6 = *(_QWORD*)(a1 + 32);
		v34 = off_140B569F0;
		v7 = (_QWORD*)a1;
		v8 = *(_QWORD*)(v6 + 112);
		v36 = (_QWORD*)a1;
		v37 = 1;
		if (*(_QWORD*)(v6 + 120) >= v8)
			sub_14005E2C0(a1);
		v9 = *(_QWORD*)(a1 + 16);
		v10 = sub_14005C1B0(a1, 0, 0);
		*(_DWORD*)(v9 + 8) = 5;
		*(_QWORD*)v9 = v10;
		*(_QWORD*)(a1 + 16) += 16i64;
		v11 = sub_1400578C0(a1);
		v12 = *(_QWORD*)qword_140C65B80;
		v13 = v11;
		v35 = v11;
		sub_1405FD1D0(v12, &v32, i);
		v14 = v33;
		v15 = v32;
		v16 = 0i64;
		if (v33)
		{
			do
			{
				LODWORD(v40) = *(_DWORD*)(v15 + 4 * v16);
				if ((unsigned int)sub_140433830(v7, (int*)&v40))
				{
					sub_1400FB470((__int64)&v34);
					v7 = v36;
					v36[2] -= 16i64;
				}
				++v16;
			} while (v16 < v14);
			v13 = v35;
		}
		v17 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64);
		if ((unsigned int)(v4 - 1) >= *(_DWORD*)(v17 + 56))
		{
			v40 = (double)v4;
			if ((double)v4 == 0.0)
				v18 = *(_DWORD**)(v17 + 32);
			else
				v18 = (_DWORD*)(*(_QWORD*)(v17 + 32)
					+ 40 * ((unsigned int)(LODWORD(v40) + HIDWORD(v40)) % (((1i64 << *(_BYTE*)(v17 + 11)) - 1) | 1)));
			while (v18[6] != 3 || (double)v4 != *((double*)v18 + 2))
			{
				v18 = (_DWORD*)*((_QWORD*)v18 + 4);
				if (!v18)
				{
					v18 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v18 = (_DWORD*)(*(_QWORD*)(v17 + 24) + 16i64 * (v4 - 1));
		}
		v19 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v19 = *(_QWORD*)v18;
		*(_DWORD*)(v19 + 8) = v18[2];
		*(_QWORD*)(a1 + 16) += 16i64;
		v20 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v20 + 8) = 3;
		v21 = v38++;
		*(double*)v20 = (double)v21;
		v22 = *(_QWORD*)(a1 + 32);
		v23 = *(_QWORD*)(a1 + 16) + 16i64;
		*(_QWORD*)(a1 + 16) = v23;
		v24 = *(_QWORD*)(v22 + 160);
		if ((unsigned int)(v13 - 1) >= *(_DWORD*)(v24 + 56))
		{
			v40 = (double)v13;
			if ((double)v13 == 0.0)
				v25 = *(_DWORD**)(v24 + 32);
			else
				v25 = (_DWORD*)(*(_QWORD*)(v24 + 32)
					+ 40 * ((unsigned int)(LODWORD(v40) + HIDWORD(v40)) % (((1i64 << *(_BYTE*)(v24 + 11)) - 1) | 1)));
			while (v25[6] != 3 || (double)v13 != *((double*)v25 + 2))
			{
				v25 = (_DWORD*)*((_QWORD*)v25 + 4);
				if (!v25)
				{
					v25 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v25 = (_DWORD*)(*(_QWORD*)(v24 + 24) + 16i64 * (v13 - 1));
		}
		*(_QWORD*)v23 = *(_QWORD*)v25;
		*(_DWORD*)(v23 + 8) = v25[2];
		v26 = *(_QWORD*)(a1 + 16) + 16i64;
		*(_QWORD*)(a1 + 16) = v26;
		sub_14005EA50(a1, (__int64*)(v26 - 48), (int*)(v26 - 32), (unsigned int*)(v26 - 16));
		*(_QWORD*)(a1 + 16) -= 48i64;
		if (v15)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v15 - 16) + 8i64))(v15 - 16);
		if (v7)
			sub_1400579E0((__int64)v7, v27, v13);
	}
	v28 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64);
	if ((unsigned int)(v4 - 1) >= *(_DWORD*)(v28 + 56))
	{
		if ((double)v4 == 0.0)
		{
			v29 = *(_DWORD**)(v28 + 32);
		}
		else
		{
			v39 = (double)v4;
			v29 = (_DWORD*)(*(_QWORD*)(v28 + 32)
				+ 40 * ((unsigned int)(LODWORD(v39) + HIDWORD(v39)) % (((1i64 << *(_BYTE*)(v28 + 11)) - 1) | 1)));
		}
		while (v29[6] != 3 || (double)v4 != *((double*)v29 + 2))
		{
			v29 = (_DWORD*)*((_QWORD*)v29 + 4);
			if (!v29)
			{
				v29 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v29 = (_DWORD*)(*(_QWORD*)(v28 + 24) + 16i64 * (v4 - 1));
	}
	v30 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v30 = *(_QWORD*)v29;
	*(_DWORD*)(v30 + 8) = v29[2];
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400579E0(a1, v30, v4);
	return 1i64;
}
// 140762DD1: variable 'v27' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65B80: using guessed type __int64 qword_140C65B80;

