//----- (000000014075C0D0) ----------------------------------------------------
__int64 __fastcall sub_14075C0D0(__int64 a1)
{
	_QWORD* v1; // rdi
	__int64 v2; // rcx
	__int64 v3; // rbx
	__int64 v4; // rax
	int v5; // eax
	unsigned __int64 v6; // rcx
	unsigned __int64 v7; // rbx
	int v8; // r9d
	unsigned __int64 v9; // rsi
	_QWORD* v10; // rdx
	__int64 v11; // r10
	_DWORD* v12; // rcx
	__int64 v13; // r8
	__int64 v14; // rdx
	__int64(__fastcall * *v16)(); // [rsp+20h] [rbp-28h] BYREF
	int v17; // [rsp+28h] [rbp-20h]
	_QWORD* v18; // [rsp+30h] [rbp-18h]
	int v19; // [rsp+38h] [rbp-10h]
	double v20; // [rsp+50h] [rbp+8h]

	v1 = (_QWORD*)a1;
	v18 = (_QWORD*)a1;
	v2 = *(_QWORD*)(a1 + 32);
	v16 = off_140B569F0;
	v19 = 1;
	if (*(_QWORD*)(v2 + 120) >= *(_QWORD*)(v2 + 112))
		sub_14005E2C0((__int64)v1);
	v3 = v1[2];
	v4 = sub_14005C1B0((__int64)v1, 0, 0);
	*(_DWORD*)(v3 + 8) = 5;
	*(_QWORD*)v3 = v4;
	v1[2] += 16i64;
	v5 = sub_1400578C0((__int64)v1);
	v6 = qword_140C7DE20;
	v7 = 0i64;
	v8 = v5;
	v17 = v5;
	v9 = qword_140C7DE20;
	if (qword_140C7DE20)
	{
		while (1)
		{
			v10 = v7 >= v6 ? 0i64 : *(_QWORD**)(qword_140C7DE18 + 8 * v7);
			if ((unsigned int)sub_140433470(v1, v10))
			{
				sub_1400FB470((__int64)&v16);
				v1 = v18;
				v18[2] -= 16i64;
			}
			if (++v7 >= v9)
				break;
			v6 = qword_140C7DE20;
		}
		v8 = v17;
	}
	v11 = *(_QWORD*)(v1[4] + 160i64);
	if ((unsigned int)(v8 - 1) >= *(_DWORD*)(v11 + 56))
	{
		if ((double)v8 == 0.0)
		{
			v12 = *(_DWORD**)(v11 + 32);
		}
		else
		{
			v20 = (double)v8;
			v12 = (_DWORD*)(*(_QWORD*)(v11 + 32)
				+ 40 * ((unsigned int)(LODWORD(v20) + HIDWORD(v20)) % (((1i64 << *(_BYTE*)(v11 + 11)) - 1) | 1)));
		}
		while (v12[6] != 3 || (double)v8 != *((double*)v12 + 2))
		{
			v12 = (_DWORD*)*((_QWORD*)v12 + 4);
			if (!v12)
			{
				v12 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v12 = (_DWORD*)(*(_QWORD*)(v11 + 24) + 16i64 * (v8 - 1));
	}
	v13 = v1[2];
	*(_QWORD*)v13 = *(_QWORD*)v12;
	v14 = (unsigned int)v12[2];
	*(_DWORD*)(v13 + 8) = v14;
	v1[2] += 16i64;
	sub_1400579E0((__int64)v1, v14, v8);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;

