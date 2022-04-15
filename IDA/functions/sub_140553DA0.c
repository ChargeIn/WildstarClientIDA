//----- (0000000140553DA0) ----------------------------------------------------
void __fastcall sub_140553DA0(__int64 a1, _QWORD* a2, int a3)
{
	_QWORD* v5; // rax
	__int64 v6; // r8
	_QWORD* v7; // r9
	__int64 v8; // rdx
	__int64 v9; // rbp
	__int64 v10; // rax
	unsigned int v11; // ecx
	__int64 v12; // rbx
	__int64 v13; // rcx
	unsigned int v14; // r11d
	__int64 v15; // rsi
	__int64 v16; // r15
	int v17; // eax
	int* v18; // rax
	int v19; // eax
	__int64 v20; // r8
	__int64 v21; // [rsp+40h] [rbp-28h] BYREF
	__int64(__fastcall * v22)(); // [rsp+48h] [rbp-20h]

	if (a3 || *((_DWORD*)a2 + 24))
	{
		*(_QWORD*)a1 = 0i64;
		return;
	}
	v5 = (_QWORD*)sub_1405FC7B0(*(_QWORD*)qword_140C65B80, **(_DWORD**)(a1 + 8));
	v7 = v5;
	if (!v5)
	{
		*(_QWORD*)a1 = 0i64;
		(*(void(__fastcall**)(_QWORD*))(*a2 + 8i64))(a2);
		return;
	}
	v8 = *((unsigned int*)a2 + 15);
	if ((unsigned int)v8 > *(_DWORD*)(a1 + 16) || (v9 = *(_QWORD*)(a1 + 8 * v8 + 24)) == 0)
	{
		*(_QWORD*)a1 = 0i64;
		(*(void(__fastcall**)(_QWORD*, __int64, __int64, _QWORD*))(*a2 + 8i64))(a2, v8, v6, v5);
		return;
	}
	v10 = *v5;
	if (!v10
		|| (v11 = *(_DWORD*)(v10 + 16), (_DWORD)v8 == v11)
		|| (unsigned int)v8 > v11
		|| (v12 = v7[v8 + 2]) == 0
		|| !sub_140550C00(a1, v8))
	{
	LABEL_27:
		*(_QWORD*)a1 = 0i64;
		(*(void(__fastcall**)(_QWORD*))(*a2 + 8i64))(a2);
		return;
	}
	v14 = *(_DWORD*)(v12 + 56);
	v15 = 0i64;
	if (!v14)
	{
		v16 = sub_140487750(v13, *(_DWORD*)(v9 + 52), 1);
		if (v16)
		{
			v17 = sub_1405516A0(a1, *((_DWORD*)a2 + 15));
			v14 = sub_140487E40(v16, v17, (unsigned int*)(v9 + 24), 4u, 0, 0, 0i64);
		}
	}
	v18 = (int*)a2[13];
	if (v18)
		v19 = *v18;
	else
		v19 = 0;
	if (v19 != v14)
	{
		v21 = a1;
		v22 = sub_140553DA0;
		if (*(_DWORD*)qword_140C65920)
			v15 = sub_140486DC0(
				qword_140C65920,
				(__int64)L"Art\\FX\\Model\\Props\\Explorer_Arrow_01_BLU\\Explorer_Arrow_01_BLU.m3",
				(_DWORD*)a2 + 14,
				&v21,
				v14,
				0);
		(*(void(__fastcall**)(_QWORD*))(*a2 + 8i64))(a2);
		*(_QWORD*)a1 = v15;
		return;
	}
	if (!sub_140485E90((__int64)a2))
	{
		if ((int)sub_1404862B0((__int64)a2) >= 0)
			return;
		goto LABEL_27;
	}
	v22 = 0i64;
	v20 = *(_QWORD*)(qword_140C65898 + 25744);
	v21 = 0i64;
	if (*(_DWORD*)qword_140C65920)
		v15 = sub_140486F10(
			qword_140C65920,
			(__int64)L"Art\\FX\\Model\\Props\\Destination_Arrow_01_BLU\\Destination_Arrow_01_BLU.m3",
			(__int128*)(v20 + 4528),
			(_DWORD*)a2 + 14,
			&v21);
	(*(void(__fastcall**)(_QWORD*, _QWORD, __int64))(*a2 + 8i64))(a2, *a2, v20);
	*(_QWORD*)a1 = v15;
}
// 140553E70: variable 'v13' is possibly undefined
// 140553EC4: variable 'v14' is possibly undefined
// 140553F6A: variable 'v20' is possibly undefined
// 140553FB9: variable 'v6' is possibly undefined
// 140B1E2F0: using guessed type wchar_t aArtFxModelProp_12[72];
// 140B1E4A0: using guessed type wchar_t aArtFxModelProp_11[66];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65920: using guessed type __int64 qword_140C65920;
// 140C65B80: using guessed type __int64 qword_140C65B80;

