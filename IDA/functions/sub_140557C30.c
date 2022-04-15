//----- (0000000140557C30) ----------------------------------------------------
__int16* __fastcall sub_140557C30(__int64 a1)
{
	int v2; // esi
	__int64 v3; // rax
	int v4; // ecx
	int v5; // ebx
	unsigned int v6; // eax
	int v7; // edx
	__int64 v8; // r8
	int v9; // ecx
	unsigned int v10; // ebx
	int v11; // eax
	__int64 v12; // rcx
	__int64 v13; // r9
	__int64 v14; // rax
	__int64 v15; // r8
	__int64 v16; // rbx
	int* v17; // rbp
	void(__fastcall * **v18)(_QWORD); // rcx
	int v19; // edx
	void(__fastcall * **v20)(_QWORD); // rcx
	__int64 v21; // rcx
	__int64 v22; // rax
	int v23; // eax
	__int16* result; // rax
	int v25; // [rsp+30h] [rbp-28h] BYREF
	int* v26; // [rsp+38h] [rbp-20h]

	v2 = 1;
	if (*(_DWORD*)(a1 + 40))
	{
	LABEL_23:
		v20 = *(void(__fastcall****)(_QWORD))(a1 + 32);
		if (v20)
			sub_140712C00(v20, 0, (__int64)sub_140472EB0, 0i64);
		goto LABEL_25;
	}
	if (!*(_DWORD*)(a1 + 56))
	{
		v3 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 4));
		if (v3)
		{
			v4 = dword_140C4D0A0;
			if (*(_DWORD*)qword_140C63750 < dword_140C4D0A0)
				v4 = *(_DWORD*)qword_140C63750;
			v5 = *((unsigned __int8*)&off_140C4D090 + v4 + 32);
			v6 = sub_140473920(v3);
		}
		else
		{
			v7 = *(_DWORD*)(a1 + 8);
			if (!v7)
				goto LABEL_13;
			v8 = sub_1404835C0(qword_140C65918, v7);
			if (!v8)
				goto LABEL_13;
			v9 = dword_140C4D0A0;
			if (*(_DWORD*)qword_140C63750 < dword_140C4D0A0)
				v9 = *(_DWORD*)qword_140C63750;
			v5 = *((unsigned __int8*)&off_140C4D090 + v9 + 32);
			v6 = sub_140612F00(
				*(_QWORD*)(qword_140C65898 + 120),
				*(unsigned int**)(*(_QWORD*)(v8 + 296) + 16i64),
				*(_QWORD*)(*(_QWORD*)(v8 + 296) + 24i64),
				0,
				*(int**)(qword_140C65898 + 120));
		}
		sub_1405581C0((_DWORD*)a1, 0, v6, v5);
	}
LABEL_13:
	v10 = *(_DWORD*)(a1 + 56);
	if (!v10)
		goto LABEL_23;
	*(_DWORD*)(a1 + 40) = 1;
	if (*(_DWORD*)(a1 + 8))
	{
		v11 = sub_1405564B0(a1);
		sub_14043BA60(v12, v11, v10, v13, *(_DWORD*)(a1 + 64));
		goto LABEL_25;
	}
	v14 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 4));
	v16 = v14;
	if (!v14)
		goto LABEL_23;
	sub_14054F9E0(&v25, *(_DWORD*)(a1 + 56), v15, v14, *(int**)(v14 + 24), 0i64);
	v17 = v26;
	if (*(_WORD*)v26)
	{
		sub_1403E0020(v16, v26, 1, 0.0);
		v18 = *(void(__fastcall****)(_QWORD))(a1 + 32);
		v19 = *(_DWORD*)(a1 + 64);
		if (v18 && v19)
			sub_140712C00(v18, v19, (__int64)sub_140472EB0, 0i64);
		v2 = 0;
	}
	sub_14018B900((__int64)v17, 0);
	if (v2)
		goto LABEL_23;
LABEL_25:
	v21 = qword_140C65898;
	v22 = *(_QWORD*)(qword_140C65898 + 25744);
	if (v22)
		v23 = *(_DWORD*)(v22 + 264);
	else
		v23 = 0;
	if (v23 == *(_DWORD*)(a1 + 4))
		sub_14055B0E0(qword_140C65898, 0i64);
	result = sub_14034BDD0(v21, 0);
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_DWORD*)(a1 + 64) = 0;
	return result;
}
// 140557D42: variable 'v12' is possibly undefined
// 140557D42: variable 'v13' is possibly undefined
// 140557D81: variable 'v15' is possibly undefined
// 140557E28: variable 'v21' is possibly undefined
// 14055B0E0: using guessed type __int64 __fastcall sub_14055B0E0(_QWORD, _QWORD);
// 140C4D090: using guessed type __int64 (__fastcall **off_140C4D090)();
// 140C4D0A0: using guessed type int dword_140C4D0A0;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65918: using guessed type __int64 qword_140C65918;

