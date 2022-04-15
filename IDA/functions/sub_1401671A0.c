//----- (00000001401671A0) ----------------------------------------------------
__int64 __fastcall sub_1401671A0(_QWORD* a1)
{
	__int64 v2; // rdi
	int v3; // esi
	int v4; // edx
	__int64 v5; // rax
	__int64 v6; // rdx
	int v7; // edx
	_QWORD* v8; // rax
	__int64 v9; // rdx

	v2 = sub_1401657E0(a1);
	v3 = sub_140056D60(a1, 2u) - 1;
	v4 = sub_140056D60(a1, 3u) - 1;
	if (v3 < 0
		|| v3 >= *(_DWORD*)(v2 + 1160)
		|| v4 < 0
		|| v4 >= *(_DWORD*)(v2 + 1144)
		|| (v5 = *(_QWORD*)(*(_QWORD*)(v2 + 1152) + 8i64 * v3), v4 >= *(_DWORD*)(v5 + 24))
		|| (v6 = *(_QWORD*)(*(_QWORD*)(v5 + 16) + 8i64 * v4)) == 0
		|| (v7 = *(_DWORD*)(v6 + 176), v7 == -2))
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
	}
	else
	{
		v8 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v7);
		v9 = a1[2];
		*(_QWORD*)v9 = *v8;
		*(_DWORD*)(v9 + 8) = *((_DWORD*)v8 + 2);
	}
	a1[2] += 16i64;
	return 1i64;
}

