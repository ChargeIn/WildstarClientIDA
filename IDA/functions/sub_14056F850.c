//----- (000000014056F850) ----------------------------------------------------
void __fastcall sub_14056F850(__int64 a1, __int64 a2, int a3)
{
	__int64* v5; // rax
	__int64 v6; // rdx
	__int64 v7; // r8
	__int64 v8; // r9
	__int64* v9; // rdi
	unsigned int v10; // eax
	int* v11; // rdx
	int v12; // eax
	bool v13; // zf
	__int64* v14; // rax
	__int64 v15; // rcx
	unsigned int v16; // r8d
	int v17; // eax
	const wchar_t* v18; // rax
	int v19; // eax
	__int64 v20; // [rsp+30h] [rbp-18h] BYREF
	__int64(__fastcall * v21)(); // [rsp+38h] [rbp-10h]

	if (a3 || *(_DWORD*)(a2 + 96))
		return;
	v5 = (__int64*)sub_1403D7BC0(a1, *(_DWORD*)(a2 + 60));
	v9 = v5;
	if (!v5 || !*(_QWORD*)(qword_140C65898 + 25744) || (v10 = sub_14056C2B0(v5), (v8 = v10) == 0))
	{
		(*(void(__fastcall**)(__int64, __int64, __int64, __int64))(*(_QWORD*)a2 + 8i64))(a2, v6, v7, v8);
		return;
	}
	v11 = *(int**)(a2 + 104);
	v12 = 0;
	if (v11)
		v12 = *v11;
	v13 = v12 == (_DWORD)v8;
	v14 = (__int64*)v9[6];
	v15 = *v14;
	v16 = *(_DWORD*)(*v14 + 12);
	if (!v13)
	{
		if (v16 <= 0x1B && (v17 = 134250504, _bittest(&v17, v16)))
			v18 = sub_14077CF00(v15, (__int64)v11);
		else
			v18 = L"Art\\FX\\Model\\Props\\Explorer_Arrow_01_BLU\\Explorer_Arrow_01_BLU.m3";
		v20 = a1;
		v21 = sub_14056F850;
		if (*(_DWORD*)qword_140C65920)
			sub_140486DC0(qword_140C65920, (__int64)v18, (_DWORD*)(a2 + 56), &v20, v8, 0);
		goto LABEL_15;
	}
	if (v16 > 0x1B || (v19 = 134250504, !_bittest(&v19, v16)))
	{
		if (!sub_140485E90(a2))
			goto LABEL_21;
	LABEL_24:
		v20 = 0i64;
		v21 = 0i64;
		if (*(_DWORD*)qword_140C65920)
			sub_140486F10(
				qword_140C65920,
				(__int64)L"Art\\FX\\Model\\Props\\Destination_Arrow_01_BLU\\Destination_Arrow_01_BLU.m3",
				(__int128*)(*(_QWORD*)(qword_140C65898 + 25744) + 4528i64),
				(_DWORD*)(a2 + 56),
				&v20);
		goto LABEL_15;
	}
	if (v11 && sub_14077CE90(v15, (__int64)v11) > 0.75)
		goto LABEL_24;
LABEL_21:
	if ((int)sub_1404862B0(a2) < 0)
		LABEL_15 :
		(*(void(__fastcall**)(__int64))(*(_QWORD*)a2 + 8i64))(a2);
}
// 14056F928: variable 'v8' is possibly undefined
// 14056F9E8: variable 'v6' is possibly undefined
// 14056F9E8: variable 'v7' is possibly undefined
// 140B1ECE0: using guessed type wchar_t aArtFxModelProp_16[72];
// 140B1ED70: using guessed type wchar_t aArtFxModelProp_15[66];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65920: using guessed type __int64 qword_140C65920;

