//----- (000000014085CB20) ----------------------------------------------------
__int64 sub_14085CB20()
{
	__int64 result; // rax
	__int64 v1; // rbx

	result = sub_1408819F0(dword_140C10F28, 40i64);
	v1 = result;
	if (result)
	{
		*(_QWORD*)(result + 8) = 0i64;
		*(_DWORD*)(result + 16) = 0;
		*(_QWORD*)result = off_1409A42C0;
		sub_14085CB70(result);
		return v1;
	}
	return result;
}
// 1409A42C0: using guessed type __int64 (__fastcall *off_1409A42C0[12])();
// 140C10F28: using guessed type int dword_140C10F28;

