//----- (00000001405EB7D0) ----------------------------------------------------
__int64 __fastcall sub_1405EB7D0(_QWORD* a1)
{
	_DWORD* v1; // rax
	__int64 v2; // rbp
	__int64 v3; // rax
	__int64 v4; // rcx
	__int64 v5; // r15
	__int64 v6; // rcx
	unsigned __int64 v7; // rax
	__int64 v8; // rbx
	__int64 v9; // rax
	int v10; // eax
	__int64 v11; // rcx
	int v12; // ebx
	int v13; // r10d
	__int64 v14; // r14
	__int64 v15; // rdi
	__int64 v16; // rax
	int v17; // esi
	_QWORD* v18; // rax
	__int64 v19; // rcx
	__int64 v20; // rdx
	int v21; // r11d
	__int64 v22; // rdi
	_QWORD* v23; // rax
	__int64 v24; // rdx
	int v25; // r11d
	__int64 v26; // rdi
	_QWORD* v27; // rax
	__int64 v28; // rdx
	int v29; // r11d
	__int64 v30; // rdx
	_QWORD* v31; // rax
	__int64 v32; // r8
	__int64 v33; // rdx
	int v34; // r10d
	__int64(__fastcall * *v36)(); // [rsp+20h] [rbp-38h] BYREF
	int v37; // [rsp+28h] [rbp-30h]
	__int64 v38; // [rsp+30h] [rbp-28h]
	int v39; // [rsp+38h] [rbp-20h]

	v1 = (_DWORD*)a1[3];
	v2 = (__int64)a1;
	if (((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || v1[2])
		&& (v3 = sub_140056AB0(a1, 1u)) != 0
		&& (v4 = *(_QWORD*)(v3 + 8)) != 0
		&& (v5 = sub_1403ACD90(qword_140C65B70, *(_DWORD*)(v4 + 8), *(_QWORD*)(qword_140C65898 + 120))) != 0)
	{
		v6 = *(_QWORD*)(v2 + 32);
		v38 = v2;
		v36 = off_140B569F0;
		v7 = *(_QWORD*)(v6 + 112);
		v39 = 1;
		if (*(_QWORD*)(v6 + 120) >= v7)
			sub_14005E2C0(v2);
		v8 = *(_QWORD*)(v2 + 16);
		v9 = sub_14005C1B0(v2, 0, 0);
		*(_DWORD*)(v8 + 8) = 5;
		*(_QWORD*)v8 = v9;
		*(_QWORD*)(v2 + 16) += 16i64;
		v10 = sub_1400578C0(v2);
		v11 = *(_QWORD*)(v5 + 64);
		v12 = 0;
		v13 = v10;
		v37 = v10;
		if (v11)
		{
			v14 = 16i64;
			do
			{
				if ((unsigned __int64)v12 >= 2)
					break;
				if (*(int*)(v11 + v14) > 0)
				{
					if (*(_QWORD*)(*(_QWORD*)(v2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v2 + 32) + 112i64))
						sub_14005E2C0(v2);
					v15 = *(_QWORD*)(v2 + 16);
					v16 = sub_14005C1B0(v2, 0, 0);
					*(_DWORD*)(v15 + 8) = 5;
					*(_QWORD*)v15 = v16;
					*(_QWORD*)(v2 + 16) += 16i64;
					v17 = sub_1400578C0(v2);
					v18 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v17);
					v19 = *(_QWORD*)(v2 + 16);
					*(_QWORD*)v19 = *v18;
					*(_DWORD*)(v19 + 8) = *((_DWORD*)v18 + 2);
					*(_QWORD*)(v2 + 16) += 16i64;
					sub_1400F06F0(v2, v20, L"eVital", v21);
					*(_QWORD*)(v2 + 16) -= 16i64;
					v22 = *(_QWORD*)(v2 + 16);
					v23 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v17);
					*(_QWORD*)v22 = *v23;
					*(_DWORD*)(v22 + 8) = *((_DWORD*)v23 + 2);
					*(_QWORD*)(v2 + 16) += 16i64;
					sub_1400F06F0(v2, v24, L"nValue", v25);
					*(_QWORD*)(v2 + 16) -= 16i64;
					v26 = *(_QWORD*)(v2 + 16);
					v27 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v17);
					*(_QWORD*)v26 = *v27;
					*(_DWORD*)(v26 + 8) = *((_DWORD*)v27 + 2);
					*(_QWORD*)(v2 + 16) += 16i64;
					sub_1400F06F0(v2, v28, L"eEval", v29);
					*(_QWORD*)(v2 + 16) -= 16i64;
					sub_1400FB1D0((__int64)&v36);
					sub_1400579E0(v2, v30, v17);
				}
				v11 = *(_QWORD*)(v5 + 64);
				++v12;
				v14 += 4i64;
			} while (v11);
			v2 = v38;
			v13 = v37;
		}
		v31 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v13);
		v32 = *(_QWORD*)(v2 + 16);
		*(_QWORD*)v32 = *v31;
		v33 = *((unsigned int*)v31 + 2);
		*(_DWORD*)(v32 + 8) = v33;
		*(_QWORD*)(v2 + 16) += 16i64;
		sub_1400579E0(v2, v33, v34);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v2 + 16) + 8i64) = 0;
		*(_QWORD*)(v2 + 16) += 16i64;
		return 1i64;
	}
}
// 1405EB969: variable 'v20' is possibly undefined
// 1405EB969: variable 'v21' is possibly undefined
// 1405EB9B3: variable 'v24' is possibly undefined
// 1405EB9B3: variable 'v25' is possibly undefined
// 1405EB9FE: variable 'v28' is possibly undefined
// 1405EB9FE: variable 'v29' is possibly undefined
// 1405EBA1A: variable 'v30' is possibly undefined
// 1405EBA7A: variable 'v34' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B23650: using guessed type wchar_t aEvital_0[7];
// 140B238D0: using guessed type wchar_t aNvalue_9[7];
// 140B238E0: using guessed type wchar_t aEeval[6];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

