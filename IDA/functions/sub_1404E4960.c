//----- (00000001404E4960) ----------------------------------------------------
__int64 __fastcall sub_1404E4960(_QWORD* a1)
{
	__int64(__fastcall * **v1)(); // rax
	__int64(__fastcall * **v3)(); // rcx
	int v4; // eax
	int v5; // r9d
	unsigned __int64 v6; // rcx
	__int64 v7; // r8
	unsigned __int64 v8; // r10
	__int64 v9; // rdx
	__int64 v10; // rsi
	__int64 v12; // rcx
	unsigned __int64 v13; // rax
	__int64 v14; // rbx
	__int64 v15; // rax
	int v16; // ebx
	__int64 v17; // rdx
	_QWORD* v18; // rax
	__int64 v19; // rdx
	__int64(__fastcall * *v20)(); // [rsp+20h] [rbp-28h] BYREF
	int v21; // [rsp+28h] [rbp-20h]
	_QWORD* v22; // [rsp+30h] [rbp-18h]
	int v23; // [rsp+38h] [rbp-10h]
	__int64(__fastcall * *v24)(); // [rsp+58h] [rbp+10h] BYREF

	v1 = (__int64(__fastcall***)())a1[3];
	v3 = (__int64(__fastcall***)())dword_140A12138;
	if ((unsigned __int64)v1 < a1[2])
		v3 = v1;
	v4 = *((_DWORD*)v3 + 2);
	if (v4 == 3)
		goto LABEL_7;
	if (v4 == 4 && sub_14005AC80((char*)*v3 + 32, (unsigned __int64*)&v24))
	{
		v21 = 3;
		v3 = &v20;
		v20 = v24;
	LABEL_7:
		v5 = (int)*(double*)v3;
		goto LABEL_8;
	}
	v5 = 0;
LABEL_8:
	v6 = 0i64;
	v7 = *(_QWORD*)(qword_140C635F0 + 5584);
	v8 = *(_QWORD*)(v7 + 160);
	if (v8)
	{
		v9 = 0i64;
		while (1)
		{
			v10 = v9 + *(_QWORD*)(v7 + 152);
			if (*(_DWORD*)(v10 + 8) == v5)
				break;
			++v6;
			v9 += 16i64;
			if (v6 >= v8)
				goto LABEL_14;
		}
		v12 = a1[4];
		v22 = a1;
		v20 = off_140B569F0;
		v13 = *(_QWORD*)(v12 + 112);
		v23 = 1;
		if (*(_QWORD*)(v12 + 120) >= v13)
			sub_14005E2C0((__int64)a1);
		v14 = a1[2];
		v15 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v14 + 8) = 5;
		*(_QWORD*)v14 = v15;
		a1[2] += 16i64;
		v16 = sub_1400578C0((__int64)a1);
		v21 = v16;
		if ((unsigned int)sub_1404E41F0((__int64)&v20, v10))
		{
			v18 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v16);
			v19 = a1[2];
			*(_QWORD*)v19 = *v18;
			*(_DWORD*)(v19 + 8) = *((_DWORD*)v18 + 2);
			a1[2] += 16i64;
			sub_1400579E0((__int64)a1, v19, v16);
			return 1i64;
		}
		sub_1400579E0((__int64)a1, v17, v16);
	}
LABEL_14:
	*(_DWORD*)(a1[2] + 8i64) = 0;
	a1[2] += 16i64;
	return 1i64;
}
// 1404E49E7: conditional instruction was optimized away because r10.8!=0
// 1404E4AA7: variable 'v17' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C635F0: using guessed type __int64 qword_140C635F0;

