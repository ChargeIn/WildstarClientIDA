//----- (00000001405EA980) ----------------------------------------------------
__int64 __fastcall sub_1405EA980(_QWORD* a1)
{
	_DWORD* v1; // rax
	__int64 v3; // rax
	__int64 v4; // rcx
	__int64 v5; // r15
	__int64 v6; // rcx
	unsigned __int64 v7; // rax
	__int64 v8; // rbx
	__int64 v9; // rax
	unsigned __int64 i; // rsi
	__int64 v11; // rax
	int v12; // ebp
	int v13; // r14d
	__int64 v14; // rbx
	__int64 v15; // rax
	_QWORD* v16; // rax
	__int64 v17; // rcx
	__int64 v18; // rdx
	_QWORD* v19; // rax
	__int64 v20; // r11
	__int64 v21; // rdx
	__int64 v22; // rdx
	_QWORD* v23; // rax
	__int64 v24; // r11
	__int64 v25; // r9
	int v26; // r8d
	__int64 v27; // rdx
	__int64(__fastcall * *v29)(); // [rsp+20h] [rbp-38h] BYREF
	int v30; // [rsp+28h] [rbp-30h]
	_QWORD* v31; // [rsp+30h] [rbp-28h]
	int v32; // [rsp+38h] [rbp-20h]

	v1 = (_DWORD*)a1[3];
	if (((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || v1[2])
		&& (v3 = sub_140056AB0(a1, 1u)) != 0
		&& (v4 = *(_QWORD*)(v3 + 8)) != 0
		&& (v5 = sub_1403ACD90(qword_140C65B70, *(_DWORD*)(v4 + 8), *(_QWORD*)(qword_140C65898 + 120))) != 0)
	{
		v6 = a1[4];
		v29 = off_140B569F0;
		v7 = *(_QWORD*)(v6 + 112);
		v31 = a1;
		v32 = 1;
		if (*(_QWORD*)(v6 + 120) >= v7)
			sub_14005E2C0((__int64)a1);
		v8 = a1[2];
		v9 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v8 + 8) = 5;
		*(_QWORD*)v8 = v9;
		a1[2] += 16i64;
		v30 = sub_1400578C0((__int64)a1);
		for (i = 176i64; i < 0xB8; i += 4i64)
		{
			v11 = *(_QWORD*)(v5 + 112);
			v12 = *(_DWORD*)(v11 + i - 8);
			v13 = *(_DWORD*)(v11 + i);
			if (v12 && v12 < 31 && v13)
			{
				if (v12 == 15)
					v13 = (int)(float)(sub_140462A90(*(_QWORD*)(qword_140C65898 + 120)) * (float)v13);
				if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
					sub_14005E2C0((__int64)a1);
				v14 = a1[2];
				v15 = sub_14005C1B0((__int64)a1, 0, 0);
				*(_DWORD*)(v14 + 8) = 5;
				*(_QWORD*)v14 = v15;
				a1[2] += 16i64;
				LODWORD(v14) = sub_1400578C0((__int64)a1);
				v16 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v14);
				v17 = a1[2];
				*(_QWORD*)v17 = *v16;
				*(_DWORD*)(v17 + 8) = *((_DWORD*)v16 + 2);
				a1[2] += 16i64;
				sub_1400F06F0((__int64)a1, v18, L"eVital", v12);
				a1[2] -= 16i64;
				v19 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v14);
				*(_QWORD*)v20 = *v19;
				*(_DWORD*)(v20 + 8) = *((_DWORD*)v19 + 2);
				a1[2] += 16i64;
				sub_1400F06F0((__int64)a1, v21, L"nValue", v13);
				a1[2] -= 16i64;
				sub_1400FB1D0((__int64)&v29);
				sub_1400579E0((__int64)a1, v22, v14);
			}
		}
		v23 = sub_14005C3C0(*(_QWORD*)(v31[4] + 160i64), v30);
		v25 = *(_QWORD*)(v24 + 16);
		v26 = v30;
		*(_QWORD*)v25 = *v23;
		v27 = *((unsigned int*)v23 + 2);
		*(_DWORD*)(v25 + 8) = v27;
		*(_QWORD*)(v24 + 16) += 16i64;
		sub_1400579E0(v24, v27, v26);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 1405EAB34: variable 'v18' is possibly undefined
// 1405EAB67: variable 'v20' is possibly undefined
// 1405EAB77: variable 'v21' is possibly undefined
// 1405EAB93: variable 'v22' is possibly undefined
// 1405EABC2: variable 'v24' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B23708: using guessed type wchar_t aEvital[7];
// 140B23718: using guessed type wchar_t aNvalue_8[7];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

