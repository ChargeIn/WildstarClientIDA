//----- (0000000140004C40) ----------------------------------------------------
__int64 __fastcall sub_140004C40(__int64 a1, _QWORD* a2)
{
	unsigned __int64 v4; // r8
	__int64 v5; // rbx
	_QWORD* i; // rax
	unsigned int v7; // esi
	__int64 v8; // rax
	__int64 v9; // rcx
	__int64 v10; // rax
	__int64 v11; // rax
	__int64 v12; // rcx
	__int64 v13; // rax
	int v14; // r9d
	__int64 v15; // rcx
	__int64 v16; // rax
	__int64 v17; // rax
	int v18; // r9d
	__int64 v19; // rcx
	__int64 v20; // rax
	int v22; // [rsp+20h] [rbp-28h] BYREF
	__int64 v23; // [rsp+28h] [rbp-20h]
	void(__fastcall * v24)(__int64); // [rsp+30h] [rbp-18h]
	__int64 v25; // [rsp+38h] [rbp-10h]

	sub_140007910(a1 + 72, a2);
	v4 = *(_QWORD*)(a1 + 112);
	v5 = 0i64;
	if (!v4)
		return 0i64;
	for (i = *(_QWORD**)(a1 + 104); *i != *a2; i += 8)
	{
		if (++v5 >= v4)
			return 0i64;
	}
	v7 = *(_DWORD*)((v5 << 6) + *(_QWORD*)(a1 + 104) + 8);
	if (qword_140C63840)
	{
		v8 = qword_140C63840(off_140A690C8, v7, qword_140C63858);
	}
	else
	{
		if (dword_140C64170 || (int)sub_1401E89C0() < 0)
			goto LABEL_17;
		v8 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C652D0 + 24i64))(qword_140C652D0, v7);
	}
	v9 = v8;
	if (v8)
	{
		v10 = *(int*)(v8 + 24);
		if ((_DWORD)v10 == 1)
			--* (_DWORD*)(a1 + 4 * v10 + 200);
		v11 = *(int*)(v9 + 28);
		if ((_DWORD)v11 && (unsigned int)v11 <= 0x12)
			--* (_QWORD*)(a1 + 8 * v11 + 208);
	}
LABEL_17:
	sub_1400074C0((__int64*)(a1 + 104), v5);
	v12 = qword_140C65898;
	if (qword_140C65898)
	{
		v13 = *(_QWORD*)(qword_140C65898 + 29504) + 5896i64;
		if (!*(_QWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 5976i64))
		{
			v14 = *(_DWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 5952i64);
			v15 = *(_QWORD*)(qword_140C65898 + 29504) + 5960i64;
			v22 = 0;
			v23 = v13;
			v24 = sub_1400A8020;
			v25 = 0i64;
			sub_140195960(v15, 0, (__int64)&v22, v14);
			v12 = qword_140C65898;
		}
		v16 = *(_QWORD*)(v12 + 32736);
		if (v16)
		{
			v17 = v16 + 240;
			if (!*(_QWORD*)(v17 + 80))
			{
				v18 = *(_DWORD*)(v17 + 56);
				v22 = 0;
				v23 = v17;
				v24 = sub_1400A8020;
				v25 = 0i64;
				sub_140195960(v17 + 64, 0, (__int64)&v22, v18);
			}
		}
	}
	v19 = qword_140C66DA8;
	v20 = qword_140C66DA8;
	if (qword_140C66DA8)
	{
		while (*(_DWORD*)(v20 + 368) == 5)
		{
			v20 = *(_QWORD*)(v20 + 176);
			if (!v20)
				return 0i64;
		}
		if (qword_140C66DA8)
		{
			do
			{
				if (*(_DWORD*)(v19 + 368) != 5)
					break;
				v19 = *(_QWORD*)(v19 + 176);
			} while (v19);
		}
		sub_1400EA3E0(*(_QWORD*)(v19 + 72), "AccountItemUpdate", &unk_1409D014E);
	}
	return 0i64;
}
// 140A690C8: using guessed type wchar_t *off_140A690C8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64170: using guessed type int dword_140C64170;
// 140C652D0: using guessed type __int64 qword_140C652D0;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C66DA8: using guessed type __int64 qword_140C66DA8;

