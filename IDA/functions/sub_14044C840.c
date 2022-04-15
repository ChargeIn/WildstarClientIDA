//----- (000000014044C840) ----------------------------------------------------
__int64 __fastcall sub_14044C840(__int64 a1, unsigned int* a2)
{
	int* v2; // rbp
	_QWORD* v3; // r15
	__int64 v5; // r13
	__int64 v6; // rbx
	int* v7; // rax
	int* v8; // rdi
	unsigned __int64 v9; // rbx
	int* v10; // rbx
	_QWORD* v11; // rbp
	__int64 v12; // rbx
	int* v13; // rax
	int* v14; // rdi
	unsigned __int64 v15; // rbx
	__int64 v16; // rcx
	int* v17; // rbx
	_QWORD* v18; // rbp
	__int64 v19; // rbx
	int* v20; // rax
	int* v21; // rdi
	unsigned __int64 v22; // rbx
	__int64 v23; // rcx
	int* v24; // rbx
	_QWORD* v25; // rbp
	__int64 v26; // rbx
	int* v27; // rax
	int* v28; // rdi
	unsigned __int64 v29; // rbx
	__int64 v30; // rcx
	int* v31; // rbx
	int v32; // r13d
	_QWORD* v33; // rbp
	__int64 v34; // rbx
	int* v35; // rax
	int* v36; // rdi
	unsigned __int64 v37; // rbx
	__int64 v38; // rcx
	int* v39; // rbx
	int v40; // r12d
	_QWORD* v41; // rbp
	__int64 v42; // rbx
	int* v43; // rax
	int* v44; // rdi
	unsigned __int64 v45; // rbx
	__int64 v46; // rcx
	__int64 v47; // rcx
	__int64 v48; // rax
	__int64 v50; // [rsp+20h] [rbp-B8h]
	__int64 v51; // [rsp+28h] [rbp-B0h]
	__int64 v52; // [rsp+30h] [rbp-A8h]
	__int64 v53; // [rsp+38h] [rbp-A0h]
	__int64 v54; // [rsp+40h] [rbp-98h]
	__int64 v55; // [rsp+48h] [rbp-90h]
	__int64 v56; // [rsp+80h] [rbp-58h] BYREF
	__int64 v57; // [rsp+88h] [rbp-50h]
	int v58; // [rsp+E0h] [rbp+8h]
	int v59; // [rsp+E8h] [rbp+10h]
	int v60; // [rsp+F0h] [rbp+18h]

	v2 = (int*)*((_QWORD*)a2 + 8);
	v3 = (_QWORD*)qword_140C65908;
	v5 = *(_QWORD*)(qword_140C65908 + 456);
	if (v2)
	{
		v6 = 0i64;
		if (*(_WORD*)v2)
		{
			do
				++v6;
			while (*((_WORD*)v2 + v6));
		}
		v7 = sub_14018B280(2 * v6 + 18, 0);
		if (v7)
		{
			*(_QWORD*)v7 = off_140B55060;
			*((_QWORD*)v7 + 1) = v6;
		}
		else
		{
			v7 = 0i64;
		}
		v8 = v7 + 4;
		v9 = 2 * v6;
		sub_1407DB590(v7 + 4, v2, v9);
		*(_WORD*)((char*)v8 + v9) = 0;
		v3[57] = v8;
	}
	else
	{
		*(_QWORD*)(qword_140C65908 + 456) = 0i64;
	}
	if (v5)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v5 - 16) + 8i64))(v5 - 16);
	v10 = (int*)*((_QWORD*)a2 + 2);
	v60 = sub_14018E2C0((__int64)v10, L"null");
	if (v60)
	{
		v11 = sub_140450ED0(&v56, v10);
		v12 = (__int64)(v11[2] - v11[1]) >> 1;
		v13 = sub_14018B280(2 * v12 + 18, 0);
		if (v13)
		{
			*(_QWORD*)v13 = off_140B55060;
			*((_QWORD*)v13 + 1) = v12;
		}
		else
		{
			v13 = 0i64;
		}
		v14 = v13 + 4;
		v15 = 2 * v12;
		sub_1407DB590(v13 + 4, (int*)v11[1], v15);
		*(_WORD*)((char*)v14 + v15) = 0;
		v16 = v3[58];
		v3[58] = v14;
		if (v16)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v16 - 16) + 8i64))(v16 - 16);
		if (v57)
			sub_14018B900(v57, 0);
	}
	v17 = (int*)*((_QWORD*)a2 + 1);
	v59 = sub_14018E2C0((__int64)v17, L"null");
	if (v59)
	{
		v18 = sub_140450ED0(&v56, v17);
		v19 = (__int64)(v18[2] - v18[1]) >> 1;
		v20 = sub_14018B280(2 * v19 + 18, 0);
		if (v20)
		{
			*(_QWORD*)v20 = off_140B55060;
			*((_QWORD*)v20 + 1) = v19;
		}
		else
		{
			v20 = 0i64;
		}
		v21 = v20 + 4;
		v22 = 2 * v19;
		sub_1407DB590(v20 + 4, (int*)v18[1], v22);
		*(_WORD*)((char*)v21 + v22) = 0;
		v23 = v3[59];
		v3[59] = v21;
		if (v23)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v23 - 16) + 8i64))(v23 - 16);
		if (v57)
			sub_14018B900(v57, 0);
	}
	v24 = (int*)*((_QWORD*)a2 + 3);
	v58 = sub_14018E2C0((__int64)v24, L"null");
	if (v58)
	{
		v25 = sub_140450ED0(&v56, v24);
		v26 = (__int64)(v25[2] - v25[1]) >> 1;
		v27 = sub_14018B280(2 * v26 + 18, 0);
		if (v27)
		{
			*(_QWORD*)v27 = off_140B55060;
			*((_QWORD*)v27 + 1) = v26;
		}
		else
		{
			v27 = 0i64;
		}
		v28 = v27 + 4;
		v29 = 2 * v26;
		sub_1407DB590(v27 + 4, (int*)v25[1], v29);
		*(_WORD*)((char*)v28 + v29) = 0;
		v30 = v3[60];
		v3[60] = v28;
		if (v30)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v30 - 16) + 8i64))(v30 - 16);
		if (v57)
			sub_14018B900(v57, 0);
	}
	v31 = (int*)*((_QWORD*)a2 + 4);
	v32 = sub_14018E2C0((__int64)v31, L"null");
	if (v32)
	{
		v33 = sub_140450ED0(&v56, v31);
		v34 = (__int64)(v33[2] - v33[1]) >> 1;
		v35 = sub_14018B280(2 * v34 + 18, 0);
		if (v35)
		{
			*(_QWORD*)v35 = off_140B55060;
			*((_QWORD*)v35 + 1) = v34;
		}
		else
		{
			v35 = 0i64;
		}
		v36 = v35 + 4;
		v37 = 2 * v34;
		sub_1407DB590(v35 + 4, (int*)v33[1], v37);
		*(_WORD*)((char*)v36 + v37) = 0;
		v38 = v3[61];
		v3[61] = v36;
		if (v38)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v38 - 16) + 8i64))(v38 - 16);
		if (v57)
			sub_14018B900(v57, 0);
	}
	v39 = (int*)*((_QWORD*)a2 + 5);
	v40 = sub_14018E2C0((__int64)v39, L"null");
	if (v40)
	{
		v41 = sub_140450ED0(&v56, v39);
		v42 = (__int64)(v41[2] - v41[1]) >> 1;
		v43 = sub_14018B280(2 * v42 + 18, 0);
		if (v43)
		{
			*((_QWORD*)v43 + 1) = v42;
			*(_QWORD*)v43 = off_140B55060;
		}
		else
		{
			v43 = 0i64;
		}
		v44 = v43 + 4;
		v45 = 2 * v42;
		sub_1407DB590(v43 + 4, (int*)v41[1], v45);
		*(_WORD*)((char*)v44 + v45) = 0;
		v46 = v3[62];
		v3[62] = v44;
		if (v46)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v46 - 16) + 8i64))(v46 - 16);
		if (v57)
			sub_14018B900(v57, 0);
	}
	if (qword_140C65898)
		sub_1400EA3E0(
			*(_QWORD*)(*(_QWORD*)(qword_140C65898 + 32736) + 96i64),
			"StorePurchaseVirtualCurrencyPackageResult",
			"bibbbbbSSfffS",
			*a2,
			a2[1],
			v60,
			v59,
			v58,
			v32,
			v40,
			*((_QWORD*)a2 + 7),
			*((_QWORD*)a2 + 6),
			*((float*)a2 + 18),
			*((float*)a2 + 19),
			*((float*)a2 + 20),
			*((_QWORD*)a2 + 11));
	v47 = qword_140C66DA8;
	v48 = qword_140C66DA8;
	if (qword_140C66DA8)
	{
		while (*(_DWORD*)(v48 + 368) == 5)
		{
			v48 = *(_QWORD*)(v48 + 176);
			if (!v48)
				return 0i64;
		}
		if (qword_140C66DA8)
		{
			do
			{
				if (*(_DWORD*)(v47 + 368) != 5)
					break;
				v47 = *(_QWORD*)(v47 + 176);
			} while (v47);
		}
		LODWORD(v55) = v40;
		LODWORD(v54) = v32;
		LODWORD(v53) = v58;
		LODWORD(v52) = v59;
		LODWORD(v51) = v60;
		LODWORD(v50) = a2[1];
		sub_1400EA3E0(
			*(_QWORD*)(v47 + 72),
			"StorePurchaseVirtualCurrencyPackageResult",
			"bibbbbbSSfffS",
			*a2,
			v50,
			v51,
			v52,
			v53,
			v54,
			v55,
			*((_QWORD*)a2 + 7),
			*((_QWORD*)a2 + 6),
			*((float*)a2 + 18),
			*((float*)a2 + 19),
			*((float*)a2 + 20),
			*((_QWORD*)a2 + 11));
	}
	return 0i64;
}
// 14044CDD0: variable 'v50' is possibly undefined
// 14044CDD0: variable 'v51' is possibly undefined
// 14044CDD0: variable 'v52' is possibly undefined
// 14044CDD0: variable 'v53' is possibly undefined
// 14044CDD0: variable 'v54' is possibly undefined
// 14044CDD0: variable 'v55' is possibly undefined
// 140B02C18: using guessed type wchar_t aNull_1[5];
// 140B02C28: using guessed type wchar_t aNull_0[5];
// 140B02C48: using guessed type wchar_t aNull_4[5];
// 140B02C58: using guessed type wchar_t aNull_3[5];
// 140B02C68: using guessed type wchar_t aNull_2[5];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65908: using guessed type __int64 qword_140C65908;
// 140C66DA8: using guessed type __int64 qword_140C66DA8;

