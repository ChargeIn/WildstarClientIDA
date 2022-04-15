//----- (000000014056F370) ----------------------------------------------------
__int64 __fastcall sub_14056F370(__int64 a1, unsigned int a2)
{
	__int64 v2; // r15
	__int64* v4; // rax
	__int64* v5; // rbx
	const wchar_t* v6; // r12
	unsigned int v7; // eax
	unsigned int v8; // ebp
	__int64 v9; // rdx
	BOOL v11; // r14d
	unsigned int v12; // eax
	int v13; // ecx
	_DWORD* v14; // rcx
	__int64 v15; // rbx
	__int64 v16; // rdi
	int v17[4]; // [rsp+30h] [rbp-48h] BYREF
	__int64 v18; // [rsp+40h] [rbp-38h] BYREF
	void(__fastcall * v19)(__int64, __int64, int); // [rsp+48h] [rbp-30h]

	v2 = qword_140C65970;
	v4 = (__int64*)sub_1403D7BC0(qword_140C65970, a2);
	v5 = v4;
	if (!v4 || !*(_QWORD*)(qword_140C65898 + 25744))
		return 2147500037i64;
	v6 = L"Art\\FX\\Model\\Props\\Explorer_Arrow_01_BLU\\Explorer_Arrow_01_BLU.m3";
	v7 = sub_14056C2B0(v4);
	v8 = v7;
	if (!v7)
		return 2147500037i64;
	v9 = sub_14024B980(v7);
	if (!v9)
		return 2147500037i64;
	v11 = 0;
	v12 = *(_DWORD*)(*(_QWORD*)v5[6] + 12i64);
	if (v12 <= 0x1B && (v13 = 134250504, _bittest(&v13, v12)))
		v6 = sub_14077CF00(134250504i64, v9);
	else
		v11 = sub_140485FA0(v8, 0);
	v14 = (_DWORD*)qword_140C65920;
	v17[0] = 0;
	v17[1] = a2;
	v15 = *(_QWORD*)(qword_140C65920 + 8);
	v17[2] = 0;
	if (v15)
	{
		do
		{
			v16 = *(_QWORD*)(v15 + 32);
			if (*(_DWORD*)(v15 + 60) == a2 && !*(_DWORD*)(v15 + 56) && !*(_DWORD*)(v15 + 64))
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v15 + 8i64))(v15);
				(**(void(__fastcall***)(__int64, __int64))v15)(v15, 1i64);
			}
			v15 = v16;
		} while (v16);
		v14 = (_DWORD*)qword_140C65920;
	}
	if (v11)
	{
		v19 = 0i64;
		v18 = 0i64;
		if (*v14)
			sub_140486F10(
				(__int64)v14,
				(__int64)L"Art\\FX\\Model\\Props\\Destination_Arrow_01_BLU\\Destination_Arrow_01_BLU.m3",
				(__int128*)(*(_QWORD*)(qword_140C65898 + 25744) + 4528i64),
				v17,
				&v18);
	}
	else
	{
		v18 = v2;
		v19 = sub_14056F850;
		if (*v14)
			sub_140486DC0((__int64)v14, (__int64)v6, v17, &v18, v8, 0);
	}
	return 0i64;
}
// 140B1ECE0: using guessed type wchar_t aArtFxModelProp_16[72];
// 140B1ED70: using guessed type wchar_t aArtFxModelProp_15[66];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65920: using guessed type __int64 qword_140C65920;
// 140C65970: using guessed type __int64 qword_140C65970;

