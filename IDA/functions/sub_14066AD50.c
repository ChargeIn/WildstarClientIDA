//----- (000000014066AD50) ----------------------------------------------------
__int64 __fastcall sub_14066AD50(__int64 a1)
{
	_QWORD* v1; // rdi
	__int64 v2; // rcx
	unsigned __int64 v3; // rax
	__int64 v4; // rbx
	__int64 v5; // rax
	unsigned int v6; // eax
	__int64 v7; // rdx
	__int64 v8; // r8
	__int64 v9; // rbp
	__int64 v10; // r9
	_QWORD* v11; // rcx
	_QWORD* v12; // rbx
	__int64 v13; // rsi
	__int64 v14; // rax
	__int64 v15; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	__int64 v18; // r10
	_DWORD* v19; // rcx
	__int64 v20; // r8
	__int64 v21; // rdx
	__int64(__fastcall * *v23)(); // [rsp+20h] [rbp-28h] BYREF
	unsigned int v24; // [rsp+28h] [rbp-20h]
	_QWORD* v25; // [rsp+30h] [rbp-18h]
	int v26; // [rsp+38h] [rbp-10h]
	double v27; // [rsp+50h] [rbp+8h]

	v1 = (_QWORD*)a1;
	v25 = (_QWORD*)a1;
	v2 = *(_QWORD*)(a1 + 32);
	v23 = off_140B569F0;
	v3 = *(_QWORD*)(v2 + 112);
	v26 = 1;
	if (*(_QWORD*)(v2 + 120) >= v3)
		sub_14005E2C0((__int64)v1);
	v4 = v1[2];
	v5 = sub_14005C1B0((__int64)v1, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	v1[2] += 16i64;
	v6 = sub_1400578C0((__int64)v1);
	v9 = qword_140C65990;
	v10 = v6;
	v24 = v6;
	v11 = *(_QWORD**)(qword_140C65990 + 16);
	v12 = (_QWORD*)v11[2];
	if (v12 != v11)
	{
		do
		{
			v13 = v12[5];
			if ((*(unsigned int(__fastcall**)(__int64, __int64, __int64, __int64, __int64(__fastcall**)()))(*(_QWORD*)v13 + 72i64))(
				v13,
				v7,
				v8,
				v10,
				v23))
			{
				v14 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v13 + 24i64))(v13);
				if ((unsigned int)sub_140432F20(v1, v14))
				{
					sub_1400FB470((__int64)&v23);
					v1 = v25;
					v25[2] -= 16i64;
				}
			}
			v15 = v12[3];
			if (v15)
			{
				v12 = (_QWORD*)v12[3];
				for (i = *(_QWORD**)(v15 + 16); i; i = (_QWORD*)i[2])
					v12 = i;
			}
			else
			{
				for (j = v12[1]; v12 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v12 = (_QWORD*)j;
				if (v12[3] != j)
					v12 = (_QWORD*)j;
			}
		} while (v12 != *(_QWORD**)(v9 + 16));
		LODWORD(v10) = v24;
	}
	v18 = *(_QWORD*)(v1[4] + 160i64);
	if ((unsigned int)(v10 - 1) >= *(_DWORD*)(v18 + 56))
	{
		if ((double)(int)v10 == 0.0)
		{
			v19 = *(_DWORD**)(v18 + 32);
		}
		else
		{
			v27 = (double)(int)v10;
			v19 = (_DWORD*)(*(_QWORD*)(v18 + 32)
				+ 40 * ((unsigned int)(LODWORD(v27) + HIDWORD(v27)) % (((1i64 << *(_BYTE*)(v18 + 11)) - 1) | 1)));
		}
		while (v19[6] != 3 || (double)(int)v10 != *((double*)v19 + 2))
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
		v19 = (_DWORD*)(*(_QWORD*)(v18 + 24) + 16i64 * ((int)v10 - 1));
	}
	v20 = v1[2];
	*(_QWORD*)v20 = *(_QWORD*)v19;
	v21 = (unsigned int)v19[2];
	*(_DWORD*)(v20 + 8) = v21;
	v1[2] += 16i64;
	sub_1400579E0((__int64)v1, v21, v10);
	return 1i64;
}
// 14066ADEA: variable 'v7' is possibly undefined
// 14066ADEA: variable 'v8' is possibly undefined
// 14066ADEA: variable 'v10' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65990: using guessed type __int64 qword_140C65990;

