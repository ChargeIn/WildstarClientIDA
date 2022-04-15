//----- (00000001400B8010) ----------------------------------------------------
__int64 __fastcall sub_1400B8010(__int64* a1, __int64 a2, __int64* a3)
{
	__int64 v3; // rax
	int* v5; // rdi
	__int64 v8; // r13
	int* v9; // r15
	__int64 v10; // rax
	__int64 v11; // rbx
	int* v12; // rax
	int* v13; // rdi
	unsigned __int64 v14; // rbx
	__int64 result; // rax
	int* v16; // r15
	__int64 v17; // rax
	__int64 v18; // rbx
	int* v19; // rax
	int* v20; // rdi
	unsigned __int64 v21; // rbx
	int* v22; // r15
	__int64 v23; // rax
	__int64 v24; // rbx
	int* v25; // rax
	int* v26; // rdi
	unsigned __int64 v27; // rbx
	int* v28; // r15
	__int64 v29; // rax
	__int64 v30; // rbx
	int* v31; // rax
	int* v32; // rdi
	unsigned __int64 v33; // rbx
	int* v34; // r15
	__int64 v35; // rax
	__int64 v36; // rbx
	int* v37; // rax
	int* v38; // rdi
	unsigned __int64 v39; // rbx
	int* v40; // rax
	__int64 v41; // r15
	int* v42; // r14
	__int64 v43; // rbx
	int* v44; // rax
	unsigned __int64 v45; // rbx
	int* v46; // r15
	__int64 v47; // rax
	__int64 v48; // rbx
	int* v49; // rax
	unsigned __int64 v50; // rbx
	unsigned int v51; // [rsp+60h] [rbp+40h] BYREF
	__int64 v52; // [rsp+70h] [rbp+50h]

	v3 = *a1;
	v5 = 0i64;
	v51 = 0;
	v8 = (*(__int64(__fastcall**)(__int64*, __int64, const wchar_t*, unsigned int*))(v3 + 8))(a1, a2, L"item=", &v51);
	v9 = (int*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1[1] + 24i64))(a1[1], v51);
	v10 = *a3;
	v52 = *a3;
	if (v9)
	{
		v11 = 0i64;
		if (*(_WORD*)v9)
		{
			do
				++v11;
			while (*((_WORD*)v9 + v11));
		}
		v12 = sub_14018B280(2 * v11 + 18, 0);
		if (v12)
		{
			*((_QWORD*)v12 + 1) = v11;
			*(_QWORD*)v12 = off_140B55060;
		}
		else
		{
			v12 = 0i64;
		}
		v13 = v12 + 4;
		v14 = 2 * v11;
		sub_1407DB590(v12 + 4, v9, v14);
		*(_WORD*)((char*)v13 + v14) = 0;
		v10 = v52;
		*a3 = (__int64)v13;
		v5 = 0i64;
	}
	else
	{
		*a3 = 0i64;
	}
	if (v10)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v10 - 16) + 8i64))(v10 - 16);
	if (v8 && *a3)
		return v8;
	v8 = (*(__int64(__fastcall**)(__int64*, __int64, const wchar_t*, unsigned int*))(*a1 + 8))(
		a1,
		a2,
		L"schematic=",
		&v51);
	v16 = (int*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1[1] + 32i64))(a1[1], v51);
	v17 = *a3;
	v52 = *a3;
	if (v16)
	{
		v18 = 0i64;
		if (*(_WORD*)v16)
		{
			do
				++v18;
			while (*((_WORD*)v16 + v18));
		}
		v19 = sub_14018B280(2 * v18 + 18, 0);
		if (v19)
		{
			*((_QWORD*)v19 + 1) = v18;
			*(_QWORD*)v19 = off_140B55060;
		}
		else
		{
			v19 = 0i64;
		}
		v20 = v19 + 4;
		v21 = 2 * v18;
		sub_1407DB590(v19 + 4, v16, v21);
		*(_WORD*)((char*)v20 + v21) = 0;
		v17 = v52;
		*a3 = (__int64)v20;
		v5 = 0i64;
	}
	else
	{
		*a3 = 0i64;
	}
	if (v17)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v17 - 16) + 8i64))(v17 - 16);
	if (v8 && *a3)
		return v8;
	v8 = (*(__int64(__fastcall**)(__int64*, __int64, const wchar_t*, unsigned int*))(*a1 + 8))(
		a1,
		a2,
		L"vitem=",
		&v51);
	v22 = (int*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1[1] + 40i64))(a1[1], v51);
	v23 = *a3;
	v52 = *a3;
	if (v22)
	{
		v24 = 0i64;
		if (*(_WORD*)v22)
		{
			do
				++v24;
			while (*((_WORD*)v22 + v24));
		}
		v25 = sub_14018B280(2 * v24 + 18, 0);
		if (v25)
		{
			*((_QWORD*)v25 + 1) = v24;
			*(_QWORD*)v25 = off_140B55060;
		}
		else
		{
			v25 = 0i64;
		}
		v26 = v25 + 4;
		v27 = 2 * v24;
		sub_1407DB590(v25 + 4, v22, v27);
		*(_WORD*)((char*)v26 + v27) = 0;
		v23 = v52;
		*a3 = (__int64)v26;
		v5 = 0i64;
	}
	else
	{
		*a3 = 0i64;
	}
	if (v23)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v23 - 16) + 8i64))(v23 - 16);
	if (v8 && *a3)
		return v8;
	v8 = (*(__int64(__fastcall**)(__int64*, __int64, const wchar_t*, unsigned int*))(*a1 + 8))(
		a1,
		a2,
		L"creature=",
		&v51);
	v28 = (int*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1[1] + 16i64))(a1[1], v51);
	v29 = *a3;
	v52 = *a3;
	if (v28)
	{
		v30 = 0i64;
		if (*(_WORD*)v28)
		{
			do
				++v30;
			while (*((_WORD*)v28 + v30));
		}
		v31 = sub_14018B280(2 * v30 + 18, 0);
		if (v31)
		{
			*((_QWORD*)v31 + 1) = v30;
			*(_QWORD*)v31 = off_140B55060;
		}
		else
		{
			v31 = 0i64;
		}
		v32 = v31 + 4;
		v33 = 2 * v30;
		sub_1407DB590(v31 + 4, v28, v33);
		*(_WORD*)((char*)v32 + v33) = 0;
		v29 = v52;
		*a3 = (__int64)v32;
		v5 = 0i64;
	}
	else
	{
		*a3 = 0i64;
	}
	if (v29)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v29 - 16) + 8i64))(v29 - 16);
	if (v8 && *a3)
		return v8;
	v8 = (*(__int64(__fastcall**)(__int64*, __int64, const wchar_t*, unsigned int*))(*a1 + 8))(
		a1,
		a2,
		L"achievement=",
		&v51);
	v34 = (int*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1[1] + 48i64))(a1[1], v51);
	v35 = *a3;
	v52 = *a3;
	if (v34)
	{
		v36 = 0i64;
		if (*(_WORD*)v34)
		{
			do
				++v36;
			while (*((_WORD*)v34 + v36));
		}
		v37 = sub_14018B280(2 * v36 + 18, 0);
		if (v37)
		{
			*((_QWORD*)v37 + 1) = v36;
			*(_QWORD*)v37 = off_140B55060;
		}
		else
		{
			v37 = 0i64;
		}
		v38 = v37 + 4;
		v39 = 2 * v36;
		sub_1407DB590(v37 + 4, v34, v39);
		*(_WORD*)((char*)v38 + v39) = 0;
		v35 = v52;
		*a3 = (__int64)v38;
		v5 = 0i64;
	}
	else
	{
		*a3 = 0i64;
	}
	if (v35)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v35 - 16) + 8i64))(v35 - 16);
	if (v8 && *a3)
		return v8;
	if (!(unsigned int)sub_14018E3E0(a2, L"bindpoint", 9ui64))
	{
		v40 = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1[1] + 56i64))(a1[1]);
		v41 = *a3;
		v42 = v40;
		if (v40)
		{
			v43 = 0i64;
			if (*(_WORD*)v40)
			{
				do
					++v43;
				while (*((_WORD*)v40 + v43));
			}
			v44 = sub_14018B280(2 * v43 + 18, 0);
			if (v44)
			{
				*((_QWORD*)v44 + 1) = v43;
				*(_QWORD*)v44 = off_140B55060;
			}
			else
			{
				v44 = 0i64;
			}
			v5 = v44 + 4;
			v45 = 2 * v43;
			sub_1407DB590(v44 + 4, v42, v45);
			*(_WORD*)((char*)v5 + v45) = 0;
		}
		*a3 = (__int64)v5;
		if (v41)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v41 - 16) + 8i64))(v41 - 16);
		return 9i64;
	}
	v8 = (*(__int64(__fastcall**)(__int64*, __int64, const wchar_t*, unsigned int*))(*a1 + 8))(
		a1,
		a2,
		L"keybinding=",
		&v51);
	v46 = (int*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1[1] + 64i64))(a1[1], v51);
	v47 = *a3;
	v52 = *a3;
	if (v46)
	{
		v48 = 0i64;
		if (*(_WORD*)v46)
		{
			do
				++v48;
			while (*((_WORD*)v46 + v48));
		}
		v49 = sub_14018B280(2 * v48 + 18, 0);
		if (v49)
		{
			*((_QWORD*)v49 + 1) = v48;
			*(_QWORD*)v49 = off_140B55060;
		}
		else
		{
			v49 = 0i64;
		}
		v5 = v49 + 4;
		v50 = 2 * v48;
		sub_1407DB590(v49 + 4, v46, v50);
		*(_WORD*)((char*)v5 + v50) = 0;
		v47 = v52;
	}
	*a3 = (__int64)v5;
	if (v47)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v47 - 16) + 8i64))(v47 - 16);
	if (v8 && *a3)
		return v8;
	(*(void(__fastcall**)(__int64*, __int64, const wchar_t*, unsigned int*))(*a1 + 8))(a1, a2, L"eff=", &v51);
	result = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, __int64*))(*(_QWORD*)a1[1] + 72i64))(
		a1[1],
		a2,
		v51,
		a3);
	if (!result || !*a3)
	{
		(*(void(__fastcall**)(__int64*, __int64, const wchar_t*, unsigned int*))(*a1 + 8))(a1, a2, L"spell=", &v51);
		result = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, __int64*))(*(_QWORD*)a1[1] + 80i64))(
			a1[1],
			a2,
			v51,
			a3);
		if (!result || !*a3)
		{
			(*(void(__fastcall**)(__int64*, __int64, const wchar_t*, unsigned int*))(*a1 + 8))(a1, a2, L"cc=", &v51);
			result = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, __int64*))(*(_QWORD*)a1[1] + 88i64))(
				a1[1],
				a2,
				v51,
				a3);
			if (!result || !*a3)
			{
				(*(void(__fastcall**)(__int64*, __int64, const wchar_t*, unsigned int*))(*a1 + 8))(a1, a2, L"smod=", &v51);
				result = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, __int64*))(*(_QWORD*)a1[1] + 96i64))(
					a1[1],
					a2,
					v51,
					a3);
				if (!result || !*a3)
				{
					(*(void(__fastcall**)(__int64*, __int64, const wchar_t*, unsigned int*))(*a1 + 8))(
						a1,
						a2,
						L"emod=",
						&v51);
					result = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, __int64*))(*(_QWORD*)a1[1] + 104i64))(
						a1[1],
						a2,
						v51,
						a3);
					if (!result || !*a3)
					{
						(*(void(__fastcall**)(__int64*, __int64, const wchar_t*, unsigned int*))(*a1 + 8))(
							a1,
							a2,
							L"thrsh=",
							&v51);
						result = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, __int64*))(*(_QWORD*)a1[1] + 112i64))(
							a1[1],
							a2,
							v51,
							a3);
						if (!result || !*a3)
						{
							(*(void(__fastcall**)(__int64*, __int64, const wchar_t*, unsigned int*))(*a1 + 8))(
								a1,
								a2,
								L"gf=",
								&v51);
							result = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, __int64*))(*(_QWORD*)a1[1] + 120i64))(
								a1[1],
								a2,
								v51,
								a3);
							if (!result || !*a3)
								return 0i64;
						}
					}
				}
			}
		}
	}
	return result;
}
// 140A13D28: using guessed type wchar_t aVitem[7];
// 140A13D38: using guessed type wchar_t aSchematic[11];
// 140A13D50: using guessed type wchar_t aItem_0[6];
// 140A13D60: using guessed type wchar_t aKeybinding[12];
// 140A13D78: using guessed type wchar_t aBindpoint[10];
// 140A13D90: using guessed type wchar_t aAchievement[13];
// 140A13DB0: using guessed type wchar_t aCreature[10];
// 140A13DC8: using guessed type wchar_t aSmod[6];
// 140A13DD8: using guessed type wchar_t aCc[4];
// 140A13DE0: using guessed type wchar_t aSpell[7];
// 140A13DF0: using guessed type wchar_t aEff[5];
// 140A13E00: using guessed type wchar_t aGf[4];
// 140A13E08: using guessed type wchar_t aThrsh[7];
// 140A13E18: using guessed type wchar_t aEmod[6];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

