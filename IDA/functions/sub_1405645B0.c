//----- (00000001405645B0) ----------------------------------------------------
_WORD* __fastcall sub_1405645B0(__int64 a1, unsigned int a2, int a3)
{
	__int64 v3; // rsi
	__int64 v5; // r10
	__int64 v6; // rdi
	__int64 v7; // rax
	int v8; // edx
	__int64 v9; // rax
	__int64 v10; // r9
	unsigned int v11; // eax
	__int64 v12; // rcx
	__int64 v13; // rdi
	__int64 v14; // r10
	__int64 v15; // rax
	__int64 v16; // rcx
	__int64 v17; // rax
	__int64 v18; // rdx
	__int64 v19; // r11
	__int64 v20; // rax
	__int64 v21; // rcx
	int v22; // eax
	unsigned int v23; // edx
	__int64 v24; // rax
	_WORD* v25; // rax
	__int64 v27; // [rsp+40h] [rbp+8h]

	v3 = qword_140C65B70;
	if (!a3)
	{
	LABEL_10:
		v5 = qword_140C65898;
		goto LABEL_11;
	}
	v5 = qword_140C65898;
	v6 = *(_QWORD*)(qword_140C65898 + 28048);
	if (v6)
	{
		v7 = *(_QWORD*)(qword_140C65898 + 25744);
		if (v7 && (v8 = *(_DWORD*)(v7 + 264)) != 0)
		{
			v9 = sub_1403D90D0(qword_140C65898, v8);
			v5 = qword_140C65898;
			v10 = v9;
		}
		else
		{
			v10 = 0i64;
		}
		v11 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD*)v6 + 16i64))(
			v6,
			a2,
			*(_QWORD*)(v5 + 120),
			v10,
			0i64);
		if (v11 && v11 != a2)
			a2 = v11;
		goto LABEL_10;
	}
LABEL_11:
	if (!a2)
		return 0i64;
	if (!*(_QWORD*)(v5 + 25744) || !v5 || (v13 = sub_1405A5B90(v5, a2)) == 0)
	{
		v15 = sub_1407A0FD0(v3, a2);
		v14 = qword_140C65898;
		v13 = v15;
	}
	if (!v13)
		return 0i64;
	if (*(_DWORD*)(*(_QWORD*)(v13 + 112) + 404i64))
	{
		if ((unsigned int)sub_1403A8000(v12, a2))
		{
			v17 = sub_140565020(v16, v13, *(_QWORD*)(v14 + 120));
			v14 = qword_140C65898;
			if (v17)
			{
				v13 = v17;
				a2 = **(_DWORD**)(v17 + 112);
			}
		}
	}
	v18 = *(_QWORD*)(v14 + 5512);
	v19 = **(_QWORD**)(v13 + 8);
	v20 = *(_QWORD*)(v18 + 8);
	v21 = v18;
	while (v20)
	{
		if (*(_DWORD*)(v20 + 32) < a2)
		{
			v20 = *(_QWORD*)(v20 + 24);
		}
		else
		{
			v21 = v20;
			v20 = *(_QWORD*)(v20 + 16);
		}
	}
	if (v21 == v18 || (v27 = v21, a2 < *(_DWORD*)(v21 + 32)))
		v27 = *(_QWORD*)(v14 + 5512);
	if (v27 != v18)
	{
		v22 = sub_1403BFB00(v14, a2);
		v24 = sub_140564F40(v3, v23, v22);
		if (v24)
		{
			v25 = *(_WORD**)(v24 + 40);
			if (v25)
			{
				if (*v25)
					return v25;
			}
		}
	}
	return (_WORD*)v19;
}
// 14056468F: variable 'v12' is possibly undefined
// 14056469F: variable 'v16' is possibly undefined
// 140564698: variable 'v14' is possibly undefined
// 140564718: variable 'v23' is possibly undefined
// 140564733: variable 'v19' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

