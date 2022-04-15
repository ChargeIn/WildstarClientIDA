//----- (00000001404E4CF0) ----------------------------------------------------
__int64 __fastcall sub_1404E4CF0(_QWORD* a1)
{
	__int64 v1; // r9
	__int64(__fastcall * **v4)(); // rax
	__int64(__fastcall * **v5)(); // rcx
	int v6; // eax
	BOOL v7; // eax
	int v8; // r10d
	unsigned __int64 v9; // r8
	unsigned __int64 v10; // rcx
	__int64 v11; // rdx
	__int64 v12; // rsi
	__int64 v13; // rcx
	unsigned __int64 v14; // rax
	__int64 v15; // rbx
	__int64 v16; // rax
	int v17; // ebx
	__int64 v18; // rdx
	_QWORD* v19; // rax
	__int64 v20; // rdx
	__int64(__fastcall * *v21)(); // [rsp+20h] [rbp-28h] BYREF
	int v22; // [rsp+28h] [rbp-20h]
	_QWORD* v23; // [rsp+30h] [rbp-18h]
	int v24; // [rsp+38h] [rbp-10h]
	__int64(__fastcall * *v25)(); // [rsp+58h] [rbp+10h] BYREF

	v1 = qword_140C65898;
	if (!qword_140C65898)
	{
		*(_DWORD*)(a1[2] + 8i64) = qword_140C65898;
		a1[2] += 16i64;
		return (unsigned int)(v1 + 1);
	}
	v4 = (__int64(__fastcall***)())a1[3];
	v5 = (__int64(__fastcall***)())dword_140A12138;
	if ((unsigned __int64)v4 < a1[2])
		v5 = v4;
	v6 = *((_DWORD*)v5 + 2);
	if (v6 == 3)
		goto LABEL_9;
	if (v6 == 4)
	{
		v7 = sub_14005AC80((char*)*v5 + 32, (unsigned __int64*)&v25);
		v1 = qword_140C65898;
		if (v7)
		{
			v22 = 3;
			v5 = &v21;
			v21 = v25;
		LABEL_9:
			v8 = (int)*(double*)v5;
			goto LABEL_10;
		}
	}
	v8 = 0;
LABEL_10:
	v9 = *(_QWORD*)(v1 + 32608);
	v10 = 0i64;
	if (v9)
	{
		v11 = 0i64;
		while (1)
		{
			v12 = v11 + *(_QWORD*)(v1 + 32600);
			if (*(_DWORD*)(v12 + 8) == v8)
				break;
			++v10;
			v11 += 16i64;
			if (v10 >= v9)
				goto LABEL_16;
		}
		v13 = a1[4];
		v23 = a1;
		v21 = off_140B569F0;
		v14 = *(_QWORD*)(v13 + 112);
		v24 = 1;
		if (*(_QWORD*)(v13 + 120) >= v14)
			sub_14005E2C0((__int64)a1);
		v15 = a1[2];
		v16 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v15 + 8) = 5;
		*(_QWORD*)v15 = v16;
		a1[2] += 16i64;
		v17 = sub_1400578C0((__int64)a1);
		v22 = v17;
		if ((unsigned int)sub_1404E41F0((__int64)&v21, v12))
		{
			v19 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v17);
			v20 = a1[2];
			*(_QWORD*)v20 = *v19;
			*(_DWORD*)(v20 + 8) = *((_DWORD*)v19 + 2);
			a1[2] += 16i64;
			sub_1400579E0((__int64)a1, v20, v17);
			return 1i64;
		}
		sub_1400579E0((__int64)a1, v18, v17);
	}
LABEL_16:
	*(_DWORD*)(a1[2] + 8i64) = 0;
	a1[2] += 16i64;
	return 1i64;
}
// 1404E4D93: conditional instruction was optimized away because r8.8!=0
// 1404E4E53: variable 'v18' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;

