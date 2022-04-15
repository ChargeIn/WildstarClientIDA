//----- (00000001407379F0) ----------------------------------------------------
__int64 __fastcall sub_1407379F0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rdx
	__int64 v5; // rcx
	unsigned __int64 v6; // rax
	__int64 v7; // rbx
	__int64 v8; // rax
	int v9; // r14d
	__int64 v10; // rax
	__int64 v11; // rbx
	__int64 v12; // rax
	__int64 v13; // rsi
	_QWORD* v14; // rax
	__int64 v15; // rcx
	__int64 v16; // rbx
	__int64 v17; // rax
	__int64 v18; // r9
	_QWORD* v19; // rax
	__int64 v20; // rcx
	__int64 v21; // rbx
	__int64 v22; // rax
	__int64 v23; // r9
	_QWORD* v24; // rax
	__int64 v25; // r10
	__int64 v26; // rdx
	__int64 v27; // [rsp+20h] [rbp-50h] BYREF
	__int64 v28; // [rsp+28h] [rbp-48h]
	__int64 v29; // [rsp+30h] [rbp-40h]
	__int64 v30; // [rsp+40h] [rbp-30h]
	__int64 v31; // [rsp+48h] [rbp-28h]
	__int64(__fastcall * *v32)(); // [rsp+50h] [rbp-20h] BYREF
	int v33; // [rsp+58h] [rbp-18h]
	_QWORD* v34; // [rsp+60h] [rbp-10h]
	int v35; // [rsp+68h] [rbp-8h]

	v2 = 0i64;
	if (!qword_140C7DE20)
		goto LABEL_4;
	while (1)
	{
		v3 = *(_QWORD*)(qword_140C7DE18 + 8 * v2);
		if (*(_DWORD*)(v3 + 16) == 7)
			break;
		if (++v2 >= (unsigned __int64)qword_140C7DE20)
			goto LABEL_4;
	}
	if (v3)
	{
		v5 = a1[4];
		v32 = off_140B569F0;
		v6 = *(_QWORD*)(v5 + 112);
		v34 = a1;
		v35 = 1;
		if (*(_QWORD*)(v5 + 120) >= v6)
			sub_14005E2C0((__int64)a1);
		v7 = a1[2];
		v8 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v7 + 8) = 5;
		*(_QWORD*)v7 = v8;
		a1[2] += 16i64;
		v9 = sub_1400578C0((__int64)a1);
		v33 = v9;
		v10 = sub_140200220(0x95Bu);
		if (v10)
			v11 = *(unsigned int*)(v10 + 4);
		else
			v11 = 0i64;
		v28 = 1i64;
		v29 = 0i64;
		v12 = sub_140200220(0x95Bu);
		if (v12)
			v13 = *(unsigned int*)(v12 + 8);
		else
			v13 = 0i64;
		v30 = 15i64;
		v31 = 0x900000000i64;
		v14 = (_QWORD*)sub_140059170(a1, 0x18ui64);
		v15 = v28;
		*v14 = v11;
		v14[1] = v15;
		v14[2] = v29;
		v16 = a1[4];
		v17 = sub_140062650((__int64)a1, (unsigned __int64*)"Game.Money", 0xAui64);
		v18 = a1[2];
		v27 = v17;
		LODWORD(v28) = 4;
		sub_14005E8E0((__int64)a1, v16 + 160, (int*)&v27, v18);
		a1[2] += 16i64;
		sub_140058BF0((__int64)a1, -2);
		sub_1400FB540((__int64)&v32);
		a1[2] -= 16i64;
		v19 = (_QWORD*)sub_140059170(a1, 0x18ui64);
		v20 = v30;
		*v19 = v13;
		v19[1] = v20;
		v19[2] = v31;
		v21 = a1[4];
		v22 = sub_140062650((__int64)a1, (unsigned __int64*)"Game.Money", 0xAui64);
		v23 = a1[2];
		v27 = v22;
		LODWORD(v28) = 4;
		sub_14005E8E0((__int64)a1, v21 + 160, (int*)&v27, v23);
		a1[2] += 16i64;
		sub_140058BF0((__int64)a1, -2);
		sub_1400FB540((__int64)&v32);
		a1[2] -= 16i64;
		v24 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v9);
		*(_QWORD*)v25 = *v24;
		*(_DWORD*)(v25 + 8) = *((_DWORD*)v24 + 2);
		a1[2] += 16i64;
		sub_1400579E0((__int64)a1, v26, v9);
		return 1i64;
	}
	else
	{
	LABEL_4:
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 0i64;
	}
}
// 140737C2F: variable 'v25' is possibly undefined
// 140737C41: variable 'v26' is possibly undefined
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;

