//----- (00000001403BD2F0) ----------------------------------------------------
_BOOL8 __fastcall sub_1403BD2F0(__int64 a1, __int64 a2)
{
	__int64 v2; // rbx
	unsigned int* v3; // rax
	unsigned int v4; // ecx
	__int64 v5; // rcx
	unsigned int v6; // edi
	__int64 v7; // rax
	int v8; // edx
	__int64 v9; // rax
	unsigned int v10; // eax
	unsigned int v11; // r10d

	v2 = qword_140C65898;
	if (!a2)
		return 0i64;
	if (!*(_QWORD*)(qword_140C65898 + 25744))
		return 0i64;
	v3 = *(unsigned int**)(a2 + 112);
	if ((v3[9] & 0xFFFFFFFD) != 0)
		return 0i64;
	v4 = v3[6];
	if (v4 != 7 && v4 != 2)
		return 1i64;
	v5 = *(_QWORD*)(qword_140C65898 + 28048);
	v6 = *v3;
	if (v5)
	{
		v5 = *(_QWORD*)((*(__int64(__fastcall**)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD*)v5 + 24i64))(
			v5,
			a2,
			*(_QWORD*)(qword_140C65898 + 120),
			0i64)
			+ 112);
		v6 = *(_DWORD*)v5;
	}
	v7 = *(_QWORD*)(v2 + 25744);
	if (v7 && (v8 = *(_DWORD*)(v7 + 264)) != 0)
		v9 = sub_1403D90D0(v2, v8);
	else
		v9 = 0i64;
	sub_1403D3520(v5, v6, *(_QWORD*)(v2 + 120), v9);
	v10 = sub_1403C0190(v2, v6);
	if (v10)
		v11 = v10;
	return !sub_1403BF980(v2, v11);
}
// 1403BD383: variable 'v5' is possibly undefined
// 1403BD3A1: variable 'v11' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

