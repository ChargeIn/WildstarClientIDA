//----- (000000014068E970) ----------------------------------------------------
__int64 __fastcall sub_14068E970(_QWORD* a1)
{
	__int64 v2; // rdi
	__int64 v3; // rax
	int v4; // r14d
	__int64 v5; // rax
	__int64 v6; // rax
	__int64 v7; // rax
	__int64 v8; // rsi
	__int64 v9; // rax
	int v10; // r15d
	_QWORD* v11; // rax
	__int64 v12; // rdx
	unsigned __int64 v13; // rdi
	int v14; // ebp
	unsigned __int64* v15; // rdx
	unsigned __int64 v16; // r8
	_DWORD* v17; // rcx
	__int64* v18; // rax
	int v19; // r15d
	_QWORD* v20; // rax
	__int64 v21; // rdx
	unsigned __int64* v22; // rdx
	unsigned __int64 v23; // r8
	_DWORD* v24; // rcx
	__int64* v25; // rax
	int v26; // esi
	_QWORD* v27; // rax
	__int64 v28; // rdx
	unsigned __int64* v29; // rdx
	_DWORD* v30; // rax
	__int64* v31; // rax
	_QWORD* v32; // rax
	__int64 v33; // rdx
	_QWORD* v34; // rax
	__int64 v36; // [rsp+20h] [rbp-38h] BYREF
	__int64 v37; // [rsp+28h] [rbp-30h]

	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v2 = a1[2];
	v3 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v2 + 8) = 5;
	*(_QWORD*)v2 = v3;
	a1[2] += 16i64;
	v4 = sub_1400578C0((__int64)a1);
	if (*(_QWORD*)(qword_140C65898 + 120)
		&& (v5 = sub_140056AB0(a1, 1u)) != 0
		&& (v6 = *(_QWORD*)(v5 + 8)) != 0
		&& (v7 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 48i64))(
			qword_140C65980,
			**(unsigned int**)(*(_QWORD*)(v6 + 8) + 8i64),
			0i64),
			(v8 = v7) != 0)
		&& (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 40i64))(v7)
		&& (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v8 + 104i64))(v8)
		&& (v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v8 + 40i64))(v8),
			(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v9 + 104i64))(v9)))
	{
		v10 = (*(_DWORD*)(*(_QWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v8 + 320i64))(v8) + 8) + 12i64) >> 7) & 1;
		v11 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v4);
		v12 = a1[2];
		*(_QWORD*)v12 = *v11;
		*(_DWORD*)(v12 + 8) = *((_DWORD*)v11 + 2);
		a1[2] += 16i64;
		v13 = -1i64;
		v14 = 0;
		v15 = (unsigned __int64*)sub_14018F0E0(&v36, L"bNorthSide")[1];
		if (v15)
		{
			v16 = -1i64;
			do
				++v16;
			while (*((_BYTE*)v15 + v16));
			sub_140058710((__int64)a1, v15, v16);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v37)
			sub_14018B900(v37, 0);
		v17 = (_DWORD*)a1[2];
		v17[2] = 1;
		*v17 = v10 != 0;
		a1[2] += 16i64;
		v18 = (__int64*)sub_1400580E0((__int64)a1, -3);
		sub_14005EA50((__int64)a1, v18, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 48i64;
		if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v8 + 336i64))(v8) == 30
			|| (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v8 + 336i64))(v8) == 21)
		{
			v19 = (*(_DWORD*)(*(_QWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v8 + 320i64))(v8) + 8) + 12i64) >> 8) & 1;
			v20 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v4);
			v21 = a1[2];
			*(_QWORD*)v21 = *v20;
			*(_DWORD*)(v21 + 8) = *((_DWORD*)v20 + 2);
			a1[2] += 16i64;
			v22 = (unsigned __int64*)sub_14018F0E0(&v36, L"bRedSide")[1];
			if (v22)
			{
				v23 = -1i64;
				do
					++v23;
				while (*((_BYTE*)v22 + v23));
				sub_140058710((__int64)a1, v22, v23);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v37)
				sub_14018B900(v37, 0);
			v24 = (_DWORD*)a1[2];
			v24[2] = 1;
			*v24 = v19 != 0;
			a1[2] += 16i64;
			v25 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v25, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 48i64;
			v26 = (*(_DWORD*)(*(_QWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v8 + 320i64))(v8) + 8) + 12i64) >> 9) & 1;
			v27 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v4);
			v28 = a1[2];
			*(_QWORD*)v28 = *v27;
			*(_DWORD*)(v28 + 8) = *((_DWORD*)v27 + 2);
			a1[2] += 16i64;
			v29 = (unsigned __int64*)sub_14018F0E0(&v36, L"bCenter")[1];
			if (v29)
			{
				do
					++v13;
				while (*((_BYTE*)v29 + v13));
				sub_140058710((__int64)a1, v29, v13);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v37)
				sub_14018B900(v37, 0);
			v30 = (_DWORD*)a1[2];
			LOBYTE(v14) = v26 != 0;
			v30[2] = 1;
			*v30 = v14;
			a1[2] += 16i64;
			v31 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v31, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 48i64;
		}
		v32 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v4);
		v33 = a1[2];
		*(_QWORD*)v33 = *v32;
		*(_DWORD*)(v33 + 8) = *((_DWORD*)v32 + 2);
	}
	else
	{
		v34 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v4);
		v33 = a1[2];
		*(_QWORD*)v33 = *v34;
		*(_DWORD*)(v33 + 8) = *((_DWORD*)v34 + 2);
	}
	a1[2] += 16i64;
	sub_1400579E0((__int64)a1, v33, v4);
	return 1i64;
}
// 140B33928: using guessed type wchar_t aBredside[9];
// 140B33940: using guessed type wchar_t aBcenter[8];
// 140B33950: using guessed type wchar_t aBnorthside[11];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65980: using guessed type __int64 qword_140C65980;

