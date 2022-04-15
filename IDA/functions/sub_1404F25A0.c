//----- (00000001404F25A0) ----------------------------------------------------
__int64 __fastcall sub_1404F25A0(_QWORD* a1)
{
	__int64 v2; // rbx
	__int64 v3; // rax
	__int64 v4; // rax
	__int64 v5; // rsi
	__int64* v6; // rax
	unsigned int v7; // ebx
	unsigned int v8; // eax
	__int64 v9; // rax
	__int64 v10; // rcx
	unsigned __int64 v11; // rdx
	__int64 v12; // rcx
	__int64 v13; // rbx
	__int64 v14; // rax
	__int64 v15; // rcx
	__int64 v16; // rbx
	__int64 v17; // rax
	__int64 v18; // rdx
	wchar_t** v19; // rbx
	__int64* v20; // rax

	sub_140057020(a1, "StorefrontLib", &off_140B69F10);
	sub_140058710((__int64)a1, (unsigned __int64*)"CodeEnumStoreLink", 0x11ui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v2 = a1[2];
	v3 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v2 + 8) = 5;
	*(_QWORD*)v2 = v3;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Signature", 9ui64);
	v4 = a1[2];
	v5 = 3i64;
	*(_DWORD*)(v4 + 8) = 3;
	*(_QWORD*)v4 = 0xBFF0000000000000ui64;
	a1[2] += 16i64;
	v6 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v6, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	v7 = 0;
	while (1)
	{
		if (qword_140C63838)
		{
			v8 = qword_140C63838(off_140A6D850, qword_140C63858);
			goto LABEL_9;
		}
		if (dword_140C63F5C || (int)sub_14023F7E0() < 0)
			break;
		v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C650E0 + 40i64))(qword_140C650E0);
	LABEL_9:
		if (v7 >= v8)
			break;
		if (qword_140C63848)
		{
			v9 = qword_140C63848(off_140A6D850, v7, qword_140C63858);
		LABEL_17:
			v10 = v9;
			goto LABEL_18;
		}
		if (dword_140C63F5C)
		{
			v10 = 0i64;
		}
		else
		{
			if ((int)sub_14023F7E0() >= 0)
			{
				v9 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C650E0 + 32i64))(qword_140C650E0, v7);
				goto LABEL_17;
			}
			v10 = 0i64;
		}
	LABEL_18:
		v11 = *(_QWORD*)(v10 + 8);
		if (v11)
		{
			if (v11 <= qword_140C3FE70)
				sub_1400F06F0((__int64)a1, v11, (unsigned __int16*)(v11 + qword_140C3FE68), *(_DWORD*)v10);
			else
				sub_1400F06F0((__int64)a1, v11, 0i64, *(_DWORD*)v10);
			++v7;
		}
		else
		{
			sub_1400F06F0((__int64)a1, 0i64, 0i64, *(_DWORD*)v10);
			++v7;
		}
	}
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	v12 = a1[4];
	a1[2] -= 32i64;
	if (*(_QWORD*)(v12 + 120) >= *(_QWORD*)(v12 + 112))
		sub_14005E2C0((__int64)a1);
	v13 = a1[2];
	v14 = sub_140062650((__int64)a1, (unsigned __int64*)"CodeEnumBannerLocation", 0x16ui64);
	*(_DWORD*)(v13 + 8) = 4;
	*(_QWORD*)v13 = v14;
	v15 = a1[4];
	a1[2] += 16i64;
	if (*(_QWORD*)(v15 + 120) >= *(_QWORD*)(v15 + 112))
		sub_14005E2C0((__int64)a1);
	v16 = a1[2];
	v17 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v16 + 8) = 5;
	*(_QWORD*)v16 = v17;
	a1[2] += 16i64;
	v19 = &off_140C31960;
	do
	{
		sub_1400F06F0((__int64)a1, v18, *v19, *((_DWORD*)v19 + 2));
		v19 += 2;
		--v5;
	} while (v5);
	v20 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v20, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	return 1i64;
}
// 1404F280A: variable 'v18' is possibly undefined
// 140A6D850: using guessed type wchar_t *off_140A6D850[2];
// 140B69F10: using guessed type char *off_140B69F10;
// 140C31960: using guessed type wchar_t *off_140C31960;
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63F5C: using guessed type int dword_140C63F5C;
// 140C650E0: using guessed type __int64 qword_140C650E0;

