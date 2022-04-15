//----- (00000001404187E0) ----------------------------------------------------
__int64 __fastcall sub_1404187E0(_QWORD* a1)
{
	int* v2; // rax
	int* v3; // rsi
	__int64 v4; // rbp
	__int64 v5; // rdi
	__int64 v6; // rax
	int v7; // r14d
	_QWORD* v8; // rax
	__int64 v9; // rdx
	int v10; // r10d
	__int64 v11; // rdi
	__int64 v12; // rax
	int v13; // eax
	int v14; // esi
	_QWORD* v15; // rax
	__int64 v16; // rdx
	int v17; // edi
	unsigned __int64* v18; // rdx
	unsigned __int64 v19; // r8
	_DWORD* v20; // rax
	__int64* v21; // rax
	__int64 v22; // rcx
	_QWORD* v23; // rax
	__int64 v24; // rdx
	unsigned __int16* v25; // r10
	_QWORD* v26; // rax
	__int64 v27; // r10
	__int64 v28; // rdx
	__int64 v30; // [rsp+20h] [rbp-28h] BYREF
	__int64 v31; // [rsp+28h] [rbp-20h]

	v2 = sub_140417BF0(a1, 1u);
	v3 = v2;
	if (v2)
	{
		v4 = sub_14020C160(v2[103]);
		if (v4)
		{
			if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
				sub_14005E2C0((__int64)a1);
			v5 = a1[2];
			v6 = sub_14005C1B0((__int64)a1, 0, 0);
			*(_DWORD*)(v5 + 8) = 5;
			*(_QWORD*)v5 = v6;
			a1[2] += 16i64;
			v7 = sub_1400578C0((__int64)a1);
			v8 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v7);
			v9 = a1[2];
			*(_QWORD*)v9 = *v8;
			*(_DWORD*)(v9 + 8) = *((_DWORD*)v8 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v9, L"idItemProfeciency", v10);
			a1[2] -= 16i64;
			v11 = qword_140C65898;
			v12 = sub_14020C160(v3[103]);
			if (v12 && (v13 = *(_DWORD*)(v12 + 4)) != 0)
				v14 = v13 & *(_DWORD*)(v11 + 6976);
			else
				v14 = 1;
			v15 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v7);
			v16 = a1[2];
			*(_QWORD*)v16 = *v15;
			*(_DWORD*)(v16 + 8) = *((_DWORD*)v15 + 2);
			a1[2] += 16i64;
			v17 = 0;
			v18 = (unsigned __int64*)sub_14018F0E0(&v30, L"bHasProficiency")[1];
			if (v18)
			{
				v19 = -1i64;
				do
					++v19;
				while (*((_BYTE*)v18 + v19));
				sub_140058710((__int64)a1, v18, v19);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v31)
				sub_14018B900(v31, 0);
			v20 = (_DWORD*)a1[2];
			LOBYTE(v17) = v14 != 0;
			v20[2] = 1;
			*v20 = v17;
			a1[2] += 16i64;
			v21 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v21, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 48i64;
			sub_14034BDD0(v22, *(_DWORD*)(v4 + 8));
			v23 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v7);
			v24 = a1[2];
			*(_QWORD*)v24 = *v23;
			*(_DWORD*)(v24 + 8) = *((_DWORD*)v23 + 2);
			a1[2] += 16i64;
			sub_1400F0870((__int64)a1, v24, L"strName", v25);
			a1[2] -= 16i64;
			v26 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v7);
			*(_QWORD*)v27 = *v26;
			*(_DWORD*)(v27 + 8) = *((_DWORD*)v26 + 2);
			a1[2] += 16i64;
			sub_1400579E0((__int64)a1, v28, v7);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	return 1i64;
}
// 1404188C3: variable 'v10' is possibly undefined
// 1404189B6: variable 'v22' is possibly undefined
// 1404189F3: variable 'v25' is possibly undefined
// 140418A1A: variable 'v27' is possibly undefined
// 140418A2C: variable 'v28' is possibly undefined
// 140AF9E78: using guessed type wchar_t aStrname_12[8];
// 140AF9E88: using guessed type wchar_t aBhasproficienc[16];
// 140AF9EA8: using guessed type wchar_t aIditemprofecie[18];
// 140C65898: using guessed type __int64 qword_140C65898;

