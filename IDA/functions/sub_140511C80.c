//----- (0000000140511C80) ----------------------------------------------------
__int64 __fastcall sub_140511C80(_QWORD* a1)
{
	unsigned int v2; // eax
	__int64 result; // rax
	__int64 v4; // rsi
	__int64 v5; // rbx
	__int64 v6; // rax
	unsigned __int64 v7; // rbx
	unsigned __int64* v8; // rdx
	unsigned __int64 v9; // r8
	__int64 v10; // rcx
	__int16* v11; // rax
	unsigned __int64* v12; // rdx
	unsigned __int64 v13; // r8
	unsigned __int64* v14; // rdx
	unsigned __int64 v15; // r8
	unsigned __int64 v16; // rcx
	unsigned __int16* v17; // rdx
	unsigned __int64* v18; // rdx
	__int64 v19; // [rsp+20h] [rbp-28h] BYREF
	__int64 v20; // [rsp+28h] [rbp-20h]

	v2 = sub_140056D60(a1, 1u);
	result = sub_140242900(v2);
	v4 = result;
	if (result)
	{
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v5 = a1[2];
		v6 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v5 + 8) = 5;
		*(_QWORD*)v5 = v6;
		a1[2] += 16i64;
		v7 = -1i64;
		v8 = (unsigned __int64*)sub_14018F0E0(&v19, L"label")[1];
		if (v8)
		{
			v9 = -1i64;
			do
				++v9;
			while (*((_BYTE*)v8 + v9));
			sub_140058710((__int64)a1, v8, v9);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		v10 = v20;
		if (v20)
			sub_14018B900(v20, 0);
		v11 = sub_14034BDD0(v10, *(_DWORD*)(v4 + 4));
		v12 = (unsigned __int64*)sub_14018F0E0(&v19, (unsigned __int16*)v11)[1];
		if (v12)
		{
			v13 = -1i64;
			do
				++v13;
			while (*((_BYTE*)v12 + v13));
			sub_140058710((__int64)a1, v12, v13);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v20)
			sub_14018B900(v20, 0);
		sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 32i64;
		v14 = (unsigned __int64*)sub_14018F0E0(&v19, L"iconPath")[1];
		if (v14)
		{
			v15 = -1i64;
			do
				++v15;
			while (*((_BYTE*)v14 + v15));
			sub_140058710((__int64)a1, v14, v15);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v20)
			sub_14018B900(v20, 0);
		v16 = *(_QWORD*)(v4 + 8);
		if (v16)
		{
			if (v16 <= qword_140C3FE70)
				v17 = (unsigned __int16*)(v16 + qword_140C3FE68);
			else
				v17 = 0i64;
		}
		else
		{
			v17 = 0i64;
		}
		v18 = (unsigned __int64*)sub_14018F0E0(&v19, v17)[1];
		if (v18)
		{
			do
				++v7;
			while (*((_BYTE*)v18 + v7));
			sub_140058710((__int64)a1, v18, v7);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v20)
			sub_14018B900(v20, 0);
		sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 32i64;
		return 1i64;
	}
	return result;
}
// 140511D47: variable 'v10' is possibly undefined
// 140B11AF0: using guessed type wchar_t aIconpath[9];
// 140B11B08: using guessed type wchar_t aLabel[6];
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;

