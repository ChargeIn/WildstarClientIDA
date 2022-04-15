//----- (00000001403BB990) ----------------------------------------------------
__int64 __fastcall sub_1403BB990(__int64 a1, __int64 a2, int a3)
{
	__int64 v3; // rcx
	__int64 v4; // rsi
	unsigned __int64 v5; // rax
	_QWORD* v7; // rdi
	__int64 v8; // rbx
	__int64 v9; // rax
	int v10; // eax
	__int64 v11; // rcx
	int v12; // r9d
	__int64 v13; // rbx
	__int64 v14; // rax
	__int64 i; // rax
	__int64 j; // rax
	__int64 v17; // r10
	_DWORD* v18; // rcx
	__int64 v19; // r8
	__int64 v20; // rdx
	__int64(__fastcall * *v22)(); // [rsp+20h] [rbp-28h] BYREF
	int v23; // [rsp+28h] [rbp-20h]
	_QWORD* v24; // [rsp+30h] [rbp-18h]
	int v25; // [rsp+38h] [rbp-10h]
	double v26; // [rsp+50h] [rbp+8h]

	v3 = *(_QWORD*)(a2 + 32);
	v4 = qword_140C65898;
	v22 = off_140B569F0;
	v5 = *(_QWORD*)(v3 + 112);
	v7 = (_QWORD*)a2;
	v24 = (_QWORD*)a2;
	v25 = 1;
	if (*(_QWORD*)(v3 + 120) >= v5)
		sub_14005E2C0(a2);
	v8 = v7[2];
	v9 = sub_14005C1B0((__int64)v7, 0, 0);
	*(_DWORD*)(v8 + 8) = 5;
	*(_QWORD*)v8 = v9;
	v7[2] += 16i64;
	v10 = sub_1400578C0((__int64)v7);
	v11 = *(_QWORD*)(v4 + 2728);
	v12 = v10;
	v23 = v10;
	v13 = *(_QWORD*)(v11 + 16);
	if (v13 != v11)
	{
		do
		{
			if ((unsigned int)sub_1403BBB90(v4, v7, *(_DWORD*)(v13 + 32), a3))
			{
				sub_1400FB470((__int64)&v22);
				v7[2] -= 16i64;
			}
			v14 = *(_QWORD*)(v13 + 24);
			if (v14)
			{
				v13 = *(_QWORD*)(v13 + 24);
				for (i = *(_QWORD*)(v14 + 16); i; i = *(_QWORD*)(i + 16))
					v13 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v13 + 8); v13 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v13 = j;
				if (*(_QWORD*)(v13 + 24) != j)
					v13 = j;
			}
		} while (v13 != *(_QWORD*)(v4 + 2728));
		v7 = v24;
		v12 = v23;
	}
	v17 = *(_QWORD*)(v7[4] + 160i64);
	if ((unsigned int)(v12 - 1) >= *(_DWORD*)(v17 + 56))
	{
		if ((double)v12 == 0.0)
		{
			v18 = *(_DWORD**)(v17 + 32);
		}
		else
		{
			v26 = (double)v12;
			v18 = (_DWORD*)(*(_QWORD*)(v17 + 32)
				+ 40 * ((unsigned int)(LODWORD(v26) + HIDWORD(v26)) % (((1i64 << *(_BYTE*)(v17 + 11)) - 1) | 1)));
		}
		while (v18[6] != 3 || (double)v12 != *((double*)v18 + 2))
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
		v18 = (_DWORD*)(*(_QWORD*)(v17 + 24) + 16i64 * (v12 - 1));
	}
	v19 = v7[2];
	*(_QWORD*)v19 = *(_QWORD*)v18;
	v20 = (unsigned int)v18[2];
	*(_DWORD*)(v19 + 8) = v20;
	v7[2] += 16i64;
	sub_1400579E0((__int64)v7, v20, v12);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;

