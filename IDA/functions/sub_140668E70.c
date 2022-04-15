//----- (0000000140668E70) ----------------------------------------------------
__int64 __fastcall sub_140668E70(_QWORD* a1)
{
	__int64* v2; // rax
	__int64 v4; // rax
	__int64 v5; // rax

	v2 = (__int64*)sub_140056AB0(a1, 1u);
	if (!v2)
		return 0i64;
	v4 = *v2;
	if (!*(_QWORD*)(v4 + 104))
		return 0i64;
	v5 = sub_1407242B0(
		*(_QWORD*)(*(_QWORD*)(v4 + 96) + 16i64),
		*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v4 + 96) + 16i64) + 32i64));
	return sub_14072D5B0(a1, v5);
}

