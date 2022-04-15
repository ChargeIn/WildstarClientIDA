//----- (0000000140006000) ----------------------------------------------------
_QWORD* __fastcall sub_140006000(__int64 a1, __int64 a2, int a3)
{
	unsigned __int64 v3; // r10
	unsigned __int64 v7; // r9
	_QWORD* result; // rax
	unsigned int v9; // esi
	__int64 v10; // rax
	__int64 v11; // rcx
	__int64 v12; // rax
	__int64 v13; // rax
	int v14; // eax
	char v15[16]; // [rsp+20h] [rbp-58h] BYREF
	unsigned __int64 v16; // [rsp+30h] [rbp-48h] BYREF
	int v17; // [rsp+38h] [rbp-40h]
	__int64 v18; // [rsp+40h] [rbp-38h]
	int v19; // [rsp+48h] [rbp-30h]
	__int64 v20; // [rsp+50h] [rbp-28h]
	int v21; // [rsp+58h] [rbp-20h]
	__int64 v22; // [rsp+60h] [rbp-18h]

	v3 = *(_QWORD*)(a1 + 112);
	v7 = 0i64;
	if (!v3)
	{
	LABEL_5:
		v9 = *(_DWORD*)(a2 + 8);
		if (qword_140C63840)
		{
			v10 = qword_140C63840(off_140A690C8, v9, qword_140C63858);
		}
		else
		{
			if (dword_140C64170 || (int)sub_1401E89C0() < 0)
			{
			LABEL_16:
				if (!a3)
					sub_140007810(a1 + 72, (__int64)v15, (unsigned __int64*)a2);
				v16 = *(_QWORD*)a2;
				v14 = *(_DWORD*)(a2 + 8);
				v18 = 0i64;
				v19 = 0;
				v20 = 0i64;
				v21 = 0;
				v17 = v14;
				v22 = 0i64;
				result = (_QWORD*)sub_1400073F0((__int64*)(a1 + 104), (__int64)&v16);
				if (v18)
					return (_QWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v18 - 16) + 8i64))(v18 - 16);
				return result;
			}
			v10 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C652D0 + 24i64))(qword_140C652D0, v9);
		}
		v11 = v10;
		if (v10)
		{
			v12 = *(int*)(v10 + 24);
			if ((_DWORD)v12 == 1)
				++* (_DWORD*)(a1 + 4 * v12 + 200);
			v13 = *(int*)(v11 + 28);
			if ((_DWORD)v13 && (unsigned int)v13 <= 0x12)
				++* (_QWORD*)(a1 + 8 * v13 + 208);
		}
		goto LABEL_16;
	}
	result = *(_QWORD**)(a1 + 104);
	while (*result != *(_QWORD*)a2)
	{
		++v7;
		result += 8;
		if (v7 >= v3)
			goto LABEL_5;
	}
	return result;
}
// 140A690C8: using guessed type wchar_t *off_140A690C8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64170: using guessed type int dword_140C64170;
// 140C652D0: using guessed type __int64 qword_140C652D0;
// 140006000: using guessed type char var_58[16];

