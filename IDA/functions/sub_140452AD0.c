//----- (0000000140452AD0) ----------------------------------------------------
void __fastcall sub_140452AD0(__int64 a1, unsigned int a2, __int64 a3)
{
	__int64 v3; // r12
	int v5; // edi
	__int64 v6; // rsi
	BOOL v7; // ebp
	_QWORD* v8; // rax
	__int64 v9; // r10
	__int64 v10; // rdx
	__int64 v11; // rbx
	unsigned __int64* v12; // rdx
	unsigned __int64 v13; // r8
	_DWORD* v14; // rax
	__int64* v15; // rax
	__int64 v16; // rdi
	__int64 v17; // rcx
	unsigned __int64 v18; // rax
	__int64 v19; // rbx
	__int64 v20; // rax
	unsigned int* v21; // rsi
	__int64 v22; // r14
	unsigned int v23; // ebx
	__int64 v24; // rax
	unsigned int* v25; // rbp
	__int64 v26; // rbx
	__int64 v27; // rdx
	__int64 v28; // rdi
	__int64 v29; // rax
	__int64 v30; // rdx
	int v31; // ebx
	__int64 v32; // rdx
	__int64(__fastcall * *v33)(); // [rsp+20h] [rbp-68h] BYREF
	int v34; // [rsp+28h] [rbp-60h]
	__int64 v35; // [rsp+30h] [rbp-58h]
	int v36; // [rsp+38h] [rbp-50h]
	__int64(__fastcall * *v37)(); // [rsp+40h] [rbp-48h] BYREF
	__int64 v38; // [rsp+48h] [rbp-40h]
	__int64 v39; // [rsp+50h] [rbp-38h]
	int v40; // [rsp+58h] [rbp-30h]

	v3 = qword_140C65910;
	v5 = 0;
	v6 = sub_140201760(a2);
	v7 = *(_DWORD*)(v6 + 4) == 0;
	v8 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a3 + 16) + 32i64) + 160i64), *(_DWORD*)(a3 + 8));
	v10 = *(_QWORD*)(v9 + 16);
	*(_QWORD*)v10 = *v8;
	*(_DWORD*)(v10 + 8) = *((_DWORD*)v8 + 2);
	*(_QWORD*)(v9 + 16) += 16i64;
	v11 = *(_QWORD*)(a3 + 16);
	v12 = (unsigned __int64*)sub_14018F0E0(&v37, L"bAccountUnlock")[1];
	if (v12)
	{
		v13 = -1i64;
		do
			++v13;
		while (*((_BYTE*)v12 + v13));
		sub_140058710(v11, v12, v13);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v11 + 16) + 8i64) = 0;
		*(_QWORD*)(v11 + 16) += 16i64;
	}
	if (v38)
		sub_14018B900(v38, 0);
	v14 = *(_DWORD**)(v11 + 16);
	LOBYTE(v5) = v7;
	v14[2] = 1;
	*v14 = v5;
	*(_QWORD*)(v11 + 16) += 16i64;
	v15 = (__int64*)sub_1400580E0(v11, -3);
	sub_14005EA50(v11, v15, (int*)(*(_QWORD*)(v11 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v11 + 16) - 16i64));
	*(_QWORD*)(v11 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a3 + 16) + 16i64) -= 16i64;
	v16 = *(_QWORD*)(a3 + 16);
	v17 = *(_QWORD*)(v16 + 32);
	v33 = off_140B569F0;
	v35 = v16;
	v18 = *(_QWORD*)(v17 + 112);
	v36 = 1;
	if (*(_QWORD*)(v17 + 120) >= v18)
		sub_14005E2C0(v16);
	v19 = *(_QWORD*)(v16 + 16);
	v20 = sub_14005C1B0(v16, 0, 0);
	*(_DWORD*)(v19 + 8) = 5;
	*(_QWORD*)v19 = v20;
	*(_QWORD*)(v16 + 16) += 16i64;
	v34 = sub_1400578C0(v16);
	v21 = (unsigned int*)(v6 + 8);
	v22 = 6i64;
	do
	{
		v23 = *v21;
		if (qword_140C63840)
		{
			v24 = qword_140C63840(off_140A6A4E8, v23, qword_140C63858);
		}
		else
		{
			if (dword_140C64C20 || (int)sub_1402010C0() < 0)
				goto LABEL_21;
			v24 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64E50 + 24i64))(qword_140C64E50, v23);
		}
		if (v24)
		{
			v25 = (unsigned int*)sub_1404530F0(v3, *(_DWORD*)(v24 + 24), *(_DWORD*)(v24 + 28));
			if (v25)
			{
				v26 = *(_QWORD*)(a3 + 16);
				v37 = off_140B569F0;
				v40 = 1;
				v27 = *(_QWORD*)(v26 + 32);
				v39 = v26;
				if (*(_QWORD*)(v27 + 120) >= *(_QWORD*)(v27 + 112))
					sub_14005E2C0(v26);
				v28 = *(_QWORD*)(v26 + 16);
				v29 = sub_14005C1B0(v26, 0, 0);
				*(_DWORD*)(v28 + 8) = 5;
				*(_QWORD*)v28 = v29;
				*(_QWORD*)(v26 + 16) += 16i64;
				LODWORD(v28) = sub_1400578C0(v26);
				LODWORD(v38) = v28;
				sub_140451EB0(v25, (__int64)&v37);
				sub_1400FB1D0((__int64)&v33);
				sub_1400579E0(v26, v30, v28);
			}
		}
	LABEL_21:
		++v21;
		--v22;
	} while (v22);
	v31 = v34;
	sub_1400FB2A0(a3, (__int64)L"arUnlocks", v34);
	if (v35)
		sub_1400579E0(v35, v32, v31);
}
// 140452B23: variable 'v9' is possibly undefined
// 140452D34: variable 'v30' is possibly undefined
// 140452D69: variable 'v32' is possibly undefined
// 140A6A4E8: using guessed type wchar_t *off_140A6A4E8[2];
// 140B03558: using guessed type wchar_t aArunlocks[10];
// 140B03570: using guessed type wchar_t aBaccountunlock_0[15];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64C20: using guessed type int dword_140C64C20;
// 140C64E50: using guessed type __int64 qword_140C64E50;
// 140C65910: using guessed type __int64 qword_140C65910;

