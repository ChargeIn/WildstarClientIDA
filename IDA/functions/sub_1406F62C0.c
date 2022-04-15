//----- (00000001406F62C0) ----------------------------------------------------
__int64 sub_1406F62C0()
{
	__int64 v0; // rcx
	__int64 result; // rax

	v0 = *(_QWORD*)(qword_140C65898 + 29688);
	result = 0i64;
	if (v0)
	{
		LOBYTE(result) = *(_DWORD*)(v0 + 180) == 0;
		*(_DWORD*)(v0 + 180) = result;
		return 0i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

