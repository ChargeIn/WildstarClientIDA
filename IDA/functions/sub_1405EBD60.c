//----- (00000001405EBD60) ----------------------------------------------------
__int64 __fastcall sub_1405EBD60(_QWORD* a1)
{
	_DWORD* v1; // rax
	__int64 v3; // rax
	__int64 v4; // rcx
	__int64 v5; // r15
	__int64 v6; // rcx
	unsigned __int64 v7; // rax
	__int64 v8; // rdi
	__int64 v9; // rax
	__int64 v10; // rsi
	__int64 v11; // r14
	__int64 v12; // rcx
	unsigned __int64 v13; // rax
	__int64 v14; // rdi
	__int64 v15; // rax
	int v16; // eax
	__int64 v17; // rcx
	int v18; // ebp
	_QWORD* v19; // rax
	__int64 v20; // rcx
	__int64 v21; // rdx
	int v22; // r11d
	__int64 v23; // rdi
	_QWORD* v24; // rax
	__int64 v25; // rdx
	int v26; // r11d
	int* v27; // rax
	__int64 v28; // rdx
	_QWORD* v29; // rax
	__int64 v30; // r11
	__int64 v31; // r9
	int v32; // r8d
	__int64 v33; // rdx
	__int64(__fastcall * *v35)(); // [rsp+20h] [rbp-58h] BYREF
	int v36; // [rsp+28h] [rbp-50h]
	_QWORD* v37; // [rsp+30h] [rbp-48h]
	int v38; // [rsp+38h] [rbp-40h]
	__int64(__fastcall * *v39)(); // [rsp+40h] [rbp-38h] BYREF
	int v40; // [rsp+48h] [rbp-30h]
	_QWORD* v41; // [rsp+50h] [rbp-28h]
	int v42; // [rsp+58h] [rbp-20h]

	v1 = (_DWORD*)a1[3];
	if (((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || v1[2])
		&& (v3 = sub_140056AB0(a1, 1u)) != 0
		&& (v4 = *(_QWORD*)(v3 + 8)) != 0
		&& (v5 = sub_1403ACD90(qword_140C65B70, *(_DWORD*)(v4 + 8), *(_QWORD*)(qword_140C65898 + 120))) != 0)
	{
		v6 = a1[4];
		v7 = *(_QWORD*)(v6 + 112);
		v35 = off_140B569F0;
		v37 = a1;
		v38 = 1;
		if (*(_QWORD*)(v6 + 120) >= v7)
			sub_14005E2C0((__int64)a1);
		v8 = a1[2];
		v9 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v8 + 8) = 5;
		*(_QWORD*)v8 = v9;
		a1[2] += 16i64;
		v36 = sub_1400578C0((__int64)a1);
		v10 = 220i64;
		v11 = 3i64;
		do
		{
			if (*(_DWORD*)(v10 + *(_QWORD*)(v5 + 112)))
			{
				v12 = a1[4];
				v39 = off_140B569F0;
				v41 = a1;
				v13 = *(_QWORD*)(v12 + 112);
				v42 = 1;
				if (*(_QWORD*)(v12 + 120) >= v13)
					sub_14005E2C0((__int64)a1);
				v14 = a1[2];
				v15 = sub_14005C1B0((__int64)a1, 0, 0);
				*(_DWORD*)(v14 + 8) = 5;
				*(_QWORD*)v14 = v15;
				a1[2] += 16i64;
				v16 = sub_1400578C0((__int64)a1);
				v17 = a1[4];
				v18 = v16;
				v40 = v16;
				v19 = sub_14005C3C0(*(_QWORD*)(v17 + 160), v16);
				v20 = a1[2];
				*(_QWORD*)v20 = *v19;
				*(_DWORD*)(v20 + 8) = *((_DWORD*)v19 + 2);
				a1[2] += 16i64;
				sub_1400F06F0((__int64)a1, v21, L"nRequired", v22);
				a1[2] -= 16i64;
				v23 = a1[2];
				v24 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v18);
				*(_QWORD*)v23 = *v24;
				*(_DWORD*)(v23 + 8) = *((_DWORD*)v24 + 2);
				a1[2] += 16i64;
				sub_1400F06F0((__int64)a1, v25, L"eType", v26);
				a1[2] -= 16i64;
				v27 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(v5 + 112) + 208, 0i64);
				if ((unsigned int)sub_140415C70(a1, (__int64)v27))
				{
					sub_1400FB540((__int64)&v39);
					a1[2] -= 16i64;
				}
				sub_1400FB1D0((__int64)&v35);
				sub_1400579E0((__int64)a1, v28, v18);
			}
			v10 += 4i64;
			--v11;
		} while (v11);
		v29 = sub_14005C3C0(*(_QWORD*)(v37[4] + 160i64), v36);
		v31 = *(_QWORD*)(v30 + 16);
		v32 = v36;
		*(_QWORD*)v31 = *v29;
		v33 = *((unsigned int*)v29 + 2);
		*(_DWORD*)(v31 + 8) = v33;
		*(_QWORD*)(v30 + 16) += 16i64;
		sub_1400579E0(v30, v33, v32);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 1405EBF14: variable 'v21' is possibly undefined
// 1405EBF14: variable 'v22' is possibly undefined
// 1405EBF5F: variable 'v25' is possibly undefined
// 1405EBF5F: variable 'v26' is possibly undefined
// 1405EBFB9: variable 'v28' is possibly undefined
// 1405EBFE4: variable 'v30' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B23860: using guessed type wchar_t aEtype_4[6];
// 140B23898: using guessed type wchar_t aNrequired[10];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140C65B70: using guessed type __int64 qword_140C65B70;

