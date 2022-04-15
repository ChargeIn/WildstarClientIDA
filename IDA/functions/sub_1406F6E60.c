//----- (00000001406F6E60) ----------------------------------------------------
__int64 __fastcall sub_1406F6E60(__int64 a1)
{
	int v2; // edx
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 result; // rax

	v2 = 0;
	v3 = *(_QWORD*)(qword_140C65898 + 28048);
	if (v3)
		v2 = sub_1405E73E0(v3);
	v4 = *(_QWORD*)(a1 + 16);
	result = 1i64;
	*(_DWORD*)(v4 + 8) = 3;
	*(double*)v4 = (double)v2;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

