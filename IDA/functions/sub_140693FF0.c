//----- (0000000140693FF0) ----------------------------------------------------
__int64 __fastcall sub_140693FF0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64* v4; // rcx
	__int64 v5; // rsi
	__int64 v7; // rcx
	unsigned __int64 v8; // rax
	__int64 v9; // rdi
	__int64 v10; // rax
	int v11; // eax
	__int64 v12; // rcx
	int v13; // r15d
	_QWORD* v14; // rax
	__int64 v15; // rdx
	int v16; // r10d
	_QWORD* v17; // rax
	__int64 v18; // r10
	__int64 v19; // rdx
	int v20; // r11d
	__int64 v21; // rcx
	unsigned __int64 v22; // rax
	__int64 v23; // rdi
	__int64 v24; // rax
	__int64 v25; // rcx
	unsigned int* v26; // rsi
	__int64 v27; // r14
	__int64 v28; // rdi
	__int64 v29; // rax
	_QWORD* v30; // rax
	__int64 v31; // rdx
	int v32; // r10d
	_QWORD* v33; // rax
	__int64 v34; // r10
	__int64 v35; // rdx
	int v36; // r11d
	__int64 v37; // rdx
	int v38; // edi
	_QWORD* v39; // rax
	__int64 v40; // rdx
	__int64 v41; // rcx
	__int64(__fastcall * *v42)(); // [rsp+20h] [rbp-58h] BYREF
	int v43; // [rsp+28h] [rbp-50h]
	_QWORD* v44; // [rsp+30h] [rbp-48h]
	int v45; // [rsp+38h] [rbp-40h]
	__int64(__fastcall * *v46)(); // [rsp+40h] [rbp-38h] BYREF
	int v47; // [rsp+48h] [rbp-30h]
	_QWORD* v48; // [rsp+50h] [rbp-28h]
	int v49; // [rsp+58h] [rbp-20h]

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v3 = *(_QWORD*)(v2 + 8)) != 0 && (v4 = *(__int64**)(v3 + 8)) != 0i64)
	{
		v5 = sub_140644DB0(*v4, *(_DWORD*)*v4);
		if (v5)
		{
			v7 = a1[4];
			v8 = *(_QWORD*)(v7 + 112);
			v46 = off_140B569F0;
			v48 = a1;
			v49 = 1;
			if (*(_QWORD*)(v7 + 120) >= v8)
				sub_14005E2C0((__int64)a1);
			v9 = a1[2];
			v10 = sub_14005C1B0((__int64)a1, 0, 0);
			*(_DWORD*)(v9 + 8) = 5;
			*(_QWORD*)v9 = v10;
			a1[2] += 16i64;
			v11 = sub_1400578C0((__int64)a1);
			v12 = *(_QWORD*)(a1[4] + 160i64);
			v13 = v11;
			v47 = v11;
			v14 = sub_14005C3C0(v12, v11);
			v15 = a1[2];
			*(_QWORD*)v15 = *v14;
			*(_DWORD*)(v15 + 8) = *((_DWORD*)v14 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v15, L"x", v16);
			a1[2] -= 16i64;
			v17 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v13);
			*(_QWORD*)v18 = *v17;
			*(_DWORD*)(v18 + 8) = *((_DWORD*)v17 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v19, L"y", v20);
			a1[2] -= 16i64;
			v21 = a1[4];
			v42 = off_140B569F0;
			v22 = *(_QWORD*)(v21 + 112);
			v44 = a1;
			v45 = 1;
			if (*(_QWORD*)(v21 + 120) >= v22)
				sub_14005E2C0((__int64)a1);
			v23 = a1[2];
			v24 = sub_14005C1B0((__int64)a1, 0, 0);
			*(_DWORD*)(v23 + 8) = 5;
			*(_QWORD*)v23 = v24;
			a1[2] += 16i64;
			v43 = sub_1400578C0((__int64)a1);
			v26 = (unsigned int*)(v5 + 8);
			v27 = 5i64;
			do
			{
				if (*v26 && sub_140644DB0(v25, *v26))
				{
					if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
						sub_14005E2C0((__int64)a1);
					v28 = a1[2];
					v29 = sub_14005C1B0((__int64)a1, 0, 0);
					*(_DWORD*)(v28 + 8) = 5;
					*(_QWORD*)v28 = v29;
					a1[2] += 16i64;
					LODWORD(v28) = sub_1400578C0((__int64)a1);
					v30 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v28);
					v31 = a1[2];
					*(_QWORD*)v31 = *v30;
					*(_DWORD*)(v31 + 8) = *((_DWORD*)v30 + 2);
					a1[2] += 16i64;
					sub_1400F06F0((__int64)a1, v31, L"x", v32);
					a1[2] -= 16i64;
					v33 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v28);
					*(_QWORD*)v34 = *v33;
					*(_DWORD*)(v34 + 8) = *((_DWORD*)v33 + 2);
					a1[2] += 16i64;
					sub_1400F06F0((__int64)a1, v35, L"y", v36);
					a1[2] -= 16i64;
					sub_1400FB1D0((__int64)&v42);
					sub_1400579E0((__int64)a1, v37, v28);
				}
				++v26;
				--v27;
			} while (v27);
			v38 = v43;
			sub_1400FB2A0((__int64)&v46, (__int64)L"arParents", v43);
			v39 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v13);
			v40 = a1[2];
			*(_QWORD*)v40 = *v39;
			v41 = (__int64)v44;
			*(_DWORD*)(v40 + 8) = *((_DWORD*)v39 + 2);
			a1[2] += 16i64;
			if (v41)
				sub_1400579E0(v41, v40, v38);
			sub_1400579E0((__int64)a1, v40, v13);
			return 1i64;
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
			return 1i64;
		}
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 140694114: variable 'v16' is possibly undefined
// 140694146: variable 'v18' is possibly undefined
// 140694158: variable 'v19' is possibly undefined
// 140694158: variable 'v20' is possibly undefined
// 1406941CA: variable 'v25' is possibly undefined
// 140694253: variable 'v32' is possibly undefined
// 140694284: variable 'v34' is possibly undefined
// 140694296: variable 'v35' is possibly undefined
// 140694296: variable 'v36' is possibly undefined
// 1406942B2: variable 'v37' is possibly undefined
// 140694329: variable 'v40' is possibly undefined
// 1409F5D9C: using guessed type wchar_t asc_1409F5D9C[2];
// 1409F5DBC: using guessed type wchar_t aY_11[2];
// 1409F5DEC: using guessed type wchar_t asc_1409F5DEC[2];
// 1409F5E04: using guessed type wchar_t aY_10[2];
// 140B33DB8: using guessed type wchar_t aArparents[10];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

