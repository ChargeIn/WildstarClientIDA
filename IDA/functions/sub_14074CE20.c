//----- (000000014074CE20) ----------------------------------------------------
__int64 __fastcall sub_14074CE20(_QWORD* a1)
{
	int v1; // ebx
	unsigned __int64 v3; // rdx
	unsigned int v4; // ecx
	__int64 v5; // r8
	__int64 v6; // rax
	__int64 v7; // rax
	__int64 v8; // rax
	_DWORD* v9; // rdx
	int v10; // eax
	BOOL v11; // ebp
	int* v12; // rax
	int* v13; // rsi
	__int64 v14; // rcx
	__int64 v15; // rcx
	unsigned __int64 v16; // rax
	__int64 v17; // rbx
	__int64 v18; // rax
	int v19; // eax
	int* v20; // rbx
	int v21; // r9d
	__int64 v22; // rdx
	__int64 v23; // r10
	_DWORD* v24; // rcx
	__int64 v25; // rdx
	int* v26; // rbx
	__int64 v27; // rcx
	__int64(__fastcall * *v29)(); // [rsp+20h] [rbp-28h] BYREF
	int* v30; // [rsp+28h] [rbp-20h]
	_QWORD* v31; // [rsp+30h] [rbp-18h]
	int v32; // [rsp+38h] [rbp-10h]
	double v33; // [rsp+50h] [rbp+8h]

	v1 = 0;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = *(_QWORD*)(qword_140C63650 + 760);
		v6 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != a1)
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
	v8 = *(_QWORD*)(v7 + 400);
	v9 = dword_140A12138;
	if (*(_QWORD*)(v8 + 24) < *(_QWORD*)(v8 + 16))
		v9 = *(_DWORD**)(v8 + 24);
	v10 = v9[2];
	v11 = v10 && (v10 != 1 || *v9);
	v12 = sub_14018B280(24i64, 0);
	LOBYTE(v1) = v11;
	*(_QWORD*)v12 = v12;
	v13 = v12;
	v30 = v12;
	*((_QWORD*)v12 + 1) = v12;
	sub_1406444C0(v14, (__int64)&v29, v1);
	v15 = a1[4];
	v29 = off_140B569F0;
	v16 = *(_QWORD*)(v15 + 112);
	v31 = a1;
	v32 = 1;
	if (*(_QWORD*)(v15 + 120) >= v16)
		sub_14005E2C0((__int64)a1);
	v17 = a1[2];
	v18 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v17 + 8) = 5;
	*(_QWORD*)v17 = v18;
	a1[2] += 16i64;
	v19 = sub_1400578C0((__int64)a1);
	v20 = *(int**)v13;
	v21 = v19;
	LODWORD(v30) = v19;
	if (v20 != v13)
	{
		do
		{
			v22 = *(_QWORD*)(*((_QWORD*)v20 + 2) + 40i64);
			if (v22 && (unsigned int)sub_1404332A0(a1, v22))
			{
				sub_1400FB470((__int64)&v29);
				a1 = v31;
				v31[2] -= 16i64;
			}
			v20 = *(int**)v20;
		} while (v20 != v13);
		v21 = (int)v30;
	}
	v23 = *(_QWORD*)(a1[4] + 160i64);
	if ((unsigned int)(v21 - 1) >= *(_DWORD*)(v23 + 56))
	{
		if ((double)v21 == 0.0)
		{
			v24 = *(_DWORD**)(v23 + 32);
		}
		else
		{
			v33 = (double)v21;
			v24 = (_DWORD*)(*(_QWORD*)(v23 + 32)
				+ 40 * ((unsigned int)(LODWORD(v33) + HIDWORD(v33)) % (((1i64 << *(_BYTE*)(v23 + 11)) - 1) | 1)));
		}
		while (v24[6] != 3 || (double)v21 != *((double*)v24 + 2))
		{
			v24 = (_DWORD*)*((_QWORD*)v24 + 4);
			if (!v24)
			{
				v24 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v24 = (_DWORD*)(*(_QWORD*)(v23 + 24) + 16i64 * (v21 - 1));
	}
	v25 = a1[2];
	*(_QWORD*)v25 = *(_QWORD*)v24;
	*(_DWORD*)(v25 + 8) = v24[2];
	a1[2] += 16i64;
	sub_1400579E0((__int64)a1, v25, v21);
	v26 = *(int**)v13;
	while (v26 != v13)
	{
		v27 = (__int64)v26;
		v26 = *(int**)v26;
		sub_14018B900(v27, 0);
	}
	*(_QWORD*)v13 = v13;
	*((_QWORD*)v13 + 1) = v13;
	sub_14018B900((__int64)v13, 0);
	return 1i64;
}
// 14074CEDA: variable 'v14' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63650: using guessed type __int64 qword_140C63650;

