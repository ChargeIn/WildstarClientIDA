//----- (000000014013A390) ----------------------------------------------------
__int64 __fastcall sub_14013A390(__int64 a1, int a2)
{
	__int64 result; // rax
	__int64 v3; // rbx
	__int64 v4; // rbx
	_QWORD* v5; // rax
	__int64 v6; // rdx
	__int64 v7; // r10

	if (a2 == -2)
		return 0i64;
	v3 = *(_QWORD*)(a1 + 8);
	if (!v3)
		return 0i64;
	v4 = *(_QWORD*)(v3 + 400);
	v5 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v4 + 32) + 160i64), a2);
	v6 = *(_QWORD*)(v4 + 16);
	*(_QWORD*)v6 = *v5;
	*(_DWORD*)(v6 + 8) = *((_DWORD*)v5 + 2);
	*(_QWORD*)(v4 + 16) += 16i64;
	result = sub_14013A580(v7, v4, -1);
	*(_QWORD*)(v4 + 16) -= 16i64;
	return result;
}
// 14013A3F3: variable 'v7' is possibly undefined

