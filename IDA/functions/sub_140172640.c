//----- (0000000140172640) ----------------------------------------------------
__int64 __fastcall sub_140172640(_QWORD* a1)
{
	__int64 v2; // rbx
	int v3; // eax
	__int64 v4; // rdx
	_QWORD* v5; // rax
	__int64 v6; // rdx

	v2 = sub_140171EB0(a1);
	v3 = sub_140056D60(a1, 2u);
	if (v3 < 0)
		return 0i64;
	if (v3 >= (int)((__int64)(*(_QWORD*)(v2 + 1424) - *(_QWORD*)(v2 + 1416)) >> 3))
		return 0i64;
	v4 = *(_QWORD*)(*(_QWORD*)(v2 + 1416) + 8i64 * v3);
	if (!v4)
		return 0i64;
	v5 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), *(_DWORD*)(v4 + 112));
	v6 = a1[2];
	*(_QWORD*)v6 = *v5;
	*(_DWORD*)(v6 + 8) = *((_DWORD*)v5 + 2);
	a1[2] += 16i64;
	return 1i64;
}

