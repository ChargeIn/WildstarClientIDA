//----- (000000014067E870) ----------------------------------------------------
__int64 __fastcall sub_14067E870(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rbx
	__int64 v4; // rdx
	__int64 v5; // rcx
	int v6; // eax
	__int64 v7; // r14
	__int64 v8; // rdx
	int v9; // ebp
	int v10; // r12d
	int v11; // r15d
	float v12; // xmm6_4
	__int64 v13; // rbx
	__int64 v14; // rax
	int v15; // r14d
	_QWORD* v16; // rax
	__int64 v17; // rdx
	unsigned __int64 v18; // rbx
	unsigned __int64* v19; // rdx
	unsigned __int64 v20; // r8
	_DWORD* v21; // rcx
	__int64* v22; // rax
	_QWORD* v23; // rax
	__int64 v24; // r10
	__int64 v25; // rdx
	_QWORD* v26; // rax
	__int64 v27; // r10
	unsigned __int64* v28; // rdx
	unsigned __int64 v29; // r8
	_DWORD* v30; // rcx
	__int64* v31; // rax
	float v32; // xmm6_4
	_QWORD* v33; // rax
	__int64 v34; // r10
	unsigned __int64* v35; // rdx
	__int64 v36; // rax
	__int64* v37; // rax
	_QWORD* v38; // rax
	__int64 v39; // r10
	__int64 v40; // rdx
	__int64 v42; // [rsp+20h] [rbp-48h] BYREF
	__int64 v43; // [rsp+28h] [rbp-40h]
	float v44; // [rsp+78h] [rbp+10h] BYREF

	v2 = sub_14067B760(a1);
	v3 = v2;
	if (v2
		&& (*(int(__fastcall**)(__int64))(*(_QWORD*)v2 + 208i64))(v2) >= 2
		&& qword_140C65970
		&& *(_DWORD*)(qword_140C65970 + 8) == 3
		&& *(_QWORD*)(qword_140C65898 + 120)
		&& (v4 = *(_QWORD*)(v3 + 48), v5 = *(unsigned int*)(*(_QWORD*)v4 + 12i64), (unsigned int)v5 <= 0x1B)
		&& (v6 = 134250504, _bittest(&v6, v5))
		&& sub_140721EF0(v5, *(_DWORD*)(*(_QWORD*)v4 + 20i64)))
	{
		if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v3 + 56i64))(v3)
			|| (v7 = sub_14077CCE0((_QWORD**)v3, 0i64)) == 0)
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
			return 1i64;
		}
		else
		{
			v8 = *(_QWORD*)v3;
			v9 = 0;
			v10 = 0;
			v11 = 0;
			v12 = 0.0;
			v44 = 0.0;
			if ((*(unsigned int(__fastcall**)(__int64))(v8 + 56))(v3)
				|| (*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v3 + 80i64))(v3, *(unsigned int*)(v7 + 8)))
			{
				v9 = 4;
				v10 = 1;
			}
			else
			{
				v11 = sub_140720B10(v7, (__m128*)(*(_QWORD*)(qword_140C65898 + 120) + 4576i64), &v44);
				v12 = v44;
				if (v44 > *(float*)&dword_140C4ABE8)
					v9 = (int)(float)(v44 * 4.0) + 1;
			}
			if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
				sub_14005E2C0((__int64)a1);
			v13 = a1[2];
			v14 = sub_14005C1B0((__int64)a1, 0, 0);
			*(_DWORD*)(v13 + 8) = 5;
			*(_QWORD*)v13 = v14;
			a1[2] += 16i64;
			v15 = sub_1400578C0((__int64)a1);
			v16 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v15);
			v17 = a1[2];
			*(_QWORD*)v17 = *v16;
			*(_DWORD*)(v17 + 8) = *((_DWORD*)v16 + 2);
			a1[2] += 16i64;
			v18 = -1i64;
			v19 = (unsigned __int64*)sub_14018F0E0(&v42, L"bCanPlace")[1];
			if (v19)
			{
				v20 = -1i64;
				do
					++v20;
				while (*((_BYTE*)v19 + v20));
				sub_140058710((__int64)a1, v19, v20);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v43)
				sub_14018B900(v43, 0);
			v21 = (_DWORD*)a1[2];
			v21[2] = 1;
			*v21 = v11 != 0;
			a1[2] += 16i64;
			v22 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v22, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 48i64;
			v23 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v15);
			*(_QWORD*)v24 = *v23;
			*(_DWORD*)(v24 + 8) = *((_DWORD*)v23 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v25, L"nMaxStates", v9);
			a1[2] -= 16i64;
			v26 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v15);
			*(_QWORD*)v27 = *v26;
			*(_DWORD*)(v27 + 8) = *((_DWORD*)v26 + 2);
			a1[2] += 16i64;
			v28 = (unsigned __int64*)sub_14018F0E0(&v42, L"bIsCompleted")[1];
			if (v28)
			{
				v29 = -1i64;
				do
					++v29;
				while (*((_BYTE*)v28 + v29));
				sub_140058710((__int64)a1, v28, v29);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v43)
				sub_14018B900(v43, 0);
			v30 = (_DWORD*)a1[2];
			v30[2] = 1;
			*v30 = v10 != 0;
			a1[2] += 16i64;
			v31 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v31, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 48i64;
			v32 = v12 / *(float*)&dword_140C4AC48;
			v33 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v15);
			*(_QWORD*)v34 = *v33;
			*(_DWORD*)(v34 + 8) = *((_DWORD*)v33 + 2);
			a1[2] += 16i64;
			v35 = (unsigned __int64*)sub_14018F0E0(&v42, L"fRatio")[1];
			if (v35)
			{
				do
					++v18;
				while (*((_BYTE*)v35 + v18));
				sub_140058710((__int64)a1, v35, v18);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v43)
				sub_14018B900(v43, 0);
			v36 = a1[2];
			*(_DWORD*)(v36 + 8) = 3;
			*(double*)v36 = v32;
			a1[2] += 16i64;
			v37 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v37, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 48i64;
			v38 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v15);
			*(_QWORD*)v39 = *v38;
			*(_DWORD*)(v39 + 8) = *((_DWORD*)v38 + 2);
			a1[2] += 16i64;
			sub_1400579E0((__int64)a1, v40, v15);
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
// 14067EAEA: variable 'v24' is possibly undefined
// 14067EAFC: variable 'v25' is possibly undefined
// 14067EB27: variable 'v27' is possibly undefined
// 14067EBF3: variable 'v34' is possibly undefined
// 14067ECB6: variable 'v39' is possibly undefined
// 14067ECC8: variable 'v40' is possibly undefined
// 140B31770: using guessed type wchar_t aBcanplace[10];
// 140B318E8: using guessed type wchar_t aFratio[7];
// 140B318F8: using guessed type wchar_t aNmaxstates[11];
// 140B31910: using guessed type wchar_t aBiscompleted_1[13];
// 140C4ABE8: using guessed type int dword_140C4ABE8;
// 140C4AC48: using guessed type int dword_140C4AC48;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;

