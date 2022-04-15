//----- (0000000140167540) ----------------------------------------------------
__int64 __fastcall sub_140167540(_QWORD* a1)
{
	__int64 v2; // rdi
	int v3; // ebx
	int v4; // edx
	__int64 v5; // rax
	__int64 v6; // rdx
	_QWORD* v7; // rax
	__int64 v8; // rdx

	v2 = sub_1401657E0(a1);
	v3 = sub_140056D60(a1, 2u) - 1;
	v4 = sub_140056D60(a1, 3u) - 1;
	if (v4 < 0 || v4 >= *(_DWORD*)(v2 + 1144) || v3 < 0 || v3 >= *(_DWORD*)(v2 + 1160))
		return 0i64;
	v5 = *(_QWORD*)(*(_QWORD*)(v2 + 1152) + 8i64 * v3);
	v6 = v4 >= *(_DWORD*)(v5 + 24) ? 0i64 : *(_QWORD*)(*(_QWORD*)(v5 + 16) + 8i64 * v4);
	if (!v6)
		return 0i64;
	v7 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), *(_DWORD*)(v6 + 176));
	v8 = a1[2];
	*(_QWORD*)v8 = *v7;
	*(_DWORD*)(v8 + 8) = *((_DWORD*)v7 + 2);
	a1[2] += 16i64;
	return 1i64;
}

