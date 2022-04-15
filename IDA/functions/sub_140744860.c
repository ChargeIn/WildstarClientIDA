//----- (0000000140744860) ----------------------------------------------------
__int64 __fastcall sub_140744860(_QWORD* a1)
{
	unsigned __int64 v2; // rcx
	_QWORD* v3; // rax
	__int64 v4; // rbp
	__int64 v5; // rdi
	__int64 v6; // rax
	int v7; // r14d
	int v8; // esi
	BOOL v9; // r15d
	_QWORD* v10; // rax
	__int64 v11; // rcx
	unsigned __int64 v12; // rdi
	unsigned __int64* v13; // rdx
	unsigned __int64 v14; // r8
	BOOL* v15; // rcx
	__int64* v16; // rax
	BOOL v17; // ebp
	_QWORD* v18; // rax
	__int64 v19; // r11
	unsigned __int64* v20; // rdx
	_DWORD* v21; // rax
	__int64* v22; // rax
	_QWORD* v23; // rax
	__int64 v24; // r10
	__int64 v25; // rdx
	__int64 v27; // [rsp+20h] [rbp-38h] BYREF
	__int64 v28; // [rsp+28h] [rbp-30h]

	v2 = (unsigned int)sub_140056D60(a1, 1u) - 1;
	v3 = *(_QWORD**)(qword_140C65898 + 27728);
	if (!v3 || v2 >= v3[12])
		goto LABEL_24;
	if (v2)
	{
		if (v2 <= v3[13])
			--v2;
	}
	else
	{
		v2 = v3[13];
	}
	v4 = *(_QWORD*)(v3[11] + 8 * v2);
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
		v8 = 0;
		v9 = (*(_DWORD*)(qword_140C65898 + 26448) & *(_DWORD*)(v4 + 236)) != 0;
		v10 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v7);
		v11 = a1[2];
		*(_QWORD*)v11 = *v10;
		*(_DWORD*)(v11 + 8) = *((_DWORD*)v10 + 2);
		a1[2] += 16i64;
		v12 = -1i64;
		v13 = (unsigned __int64*)sub_14018F0E0(&v27, L"bCanISee")[1];
		if (v13)
		{
			v14 = -1i64;
			do
				++v14;
			while (*((_BYTE*)v13 + v14));
			sub_140058710((__int64)a1, v13, v14);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v28)
			sub_14018B900(v28, 0);
		v15 = (BOOL*)a1[2];
		v15[2] = 1;
		*v15 = v9;
		a1[2] += 16i64;
		v16 = (__int64*)sub_1400580E0((__int64)a1, -3);
		sub_14005EA50((__int64)a1, v16, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 48i64;
		v17 = (*(_DWORD*)(qword_140C65898 + 26444) & *(_DWORD*)(v4 + 240)) != 0;
		v18 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v7);
		*(_QWORD*)v19 = *v18;
		*(_DWORD*)(v19 + 8) = *((_DWORD*)v18 + 2);
		a1[2] += 16i64;
		v20 = (unsigned __int64*)sub_14018F0E0(&v27, L"bCanSeeMe")[1];
		if (v20)
		{
			do
				++v12;
			while (*((_BYTE*)v20 + v12));
			sub_140058710((__int64)a1, v20, v12);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v28)
			sub_14018B900(v28, 0);
		v21 = (_DWORD*)a1[2];
		LOBYTE(v8) = v17;
		v21[2] = 1;
		*v21 = v8;
		a1[2] += 16i64;
		v22 = (__int64*)sub_1400580E0((__int64)a1, -3);
		sub_14005EA50((__int64)a1, v22, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 48i64;
		v23 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v7);
		*(_QWORD*)v24 = *v23;
		*(_DWORD*)(v24 + 8) = *((_DWORD*)v23 + 2);
		a1[2] += 16i64;
		sub_1400579E0((__int64)a1, v25, v7);
		return 1i64;
	}
	else
	{
	LABEL_24:
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 140744A37: variable 'v19' is possibly undefined
// 140744AF8: variable 'v24' is possibly undefined
// 140744B0A: variable 'v25' is possibly undefined
// 140B492E8: using guessed type wchar_t aBcanseeme[10];
// 140B49300: using guessed type wchar_t aBcanisee[9];
// 140C65898: using guessed type __int64 qword_140C65898;

