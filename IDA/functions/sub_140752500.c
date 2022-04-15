//----- (0000000140752500) ----------------------------------------------------
__int64 __fastcall sub_140752500(_QWORD* a1)
{
	int v2; // esi
	int v3; // ebp
	int v4; // eax
	_DWORD* v5; // rdx
	int v6; // r14d
	int v7; // edi
	int v8; // ecx
	BOOL v9; // eax
	__int64 v10; // rbx
	__int64 v11; // rcx
	__int64 v13; // [rsp+20h] [rbp-48h]
	__int64 v14; // [rsp+28h] [rbp-40h]
	__int64 v15; // [rsp+30h] [rbp-38h]
	__int64 v16; // [rsp+38h] [rbp-30h]
	__int64 v17; // [rsp+40h] [rbp-28h]

	v2 = sub_140056D60(a1, 1u);
	v3 = sub_140056D60(a1, 2u);
	v4 = sub_140056D60(a1, 3u);
	v5 = dword_140A12138;
	v6 = v4;
	if ((unsigned __int64)(a1[3] + 48i64) < a1[2])
		v5 = (_DWORD*)(a1[3] + 48i64);
	v7 = 0;
	v8 = v5[2];
	v9 = v8 && (v8 != 1 || *v5);
	v10 = *(_QWORD*)(qword_140C65898 + 28464);
	for (LOBYTE(v7) = v9; v10; v10 = *(_QWORD*)(v10 + 96))
	{
		v11 = *(_QWORD*)(v10 + 5864);
		if (v11
			&& (*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v11 + 848i64))(v11, 1i64)
			&& (*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(v10 + 5864) + 848i64))(
				*(_QWORD*)(v10 + 5864),
				14i64))
		{
			LODWORD(v17) = v7;
			LODWORD(v16) = v6;
			LODWORD(v15) = v3;
			LODWORD(v14) = v2;
			LODWORD(v13) = *(_DWORD*)(v10 + 8);
			sub_1400EA3E0(
				*(_QWORD*)(qword_140C65898 + 29504),
				"DamageOrHealingDone",
				"UUiiibS",
				*(unsigned int*)(*(_QWORD*)(qword_140C65898 + 25744) + 8i64),
				v13,
				v14,
				v15,
				v16,
				v17,
				&unk_1409F95F4);
		}
	}
	return 0i64;
}
// 14075261B: variable 'v13' is possibly undefined
// 14075261B: variable 'v14' is possibly undefined
// 14075261B: variable 'v15' is possibly undefined
// 14075261B: variable 'v16' is possibly undefined
// 14075261B: variable 'v17' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;

