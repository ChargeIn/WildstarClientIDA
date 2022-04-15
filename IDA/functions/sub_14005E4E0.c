//----- (000000014005E4E0) ----------------------------------------------------
__int64 __fastcall sub_14005E4E0(__int64 a1)
{
	__int64 v1; // rbx
	__int64 result; // rax

	v1 = *(_QWORD*)(a1 + 32);
	if (*(_BYTE*)(v1 + 33) <= 1u)
	{
		*(_BYTE*)(v1 + 33) = 2;
		*(_QWORD*)(v1 + 48) = v1 + 40;
		*(_DWORD*)(v1 + 36) = 0;
		*(_QWORD*)(v1 + 56) = 0i64;
		*(_QWORD*)(v1 + 64) = 0i64;
		*(_QWORD*)(v1 + 72) = 0i64;
	}
	while (*(_BYTE*)(v1 + 33) != 4)
		sub_14005E150(a1);
	sub_14005DEB0(a1);
	while (*(_BYTE*)(v1 + 33))
		sub_14005E150(a1);
	result = *(int*)(v1 + 144);
	*(_QWORD*)(v1 + 112) = result * (*(_QWORD*)(v1 + 128) / 0x64ui64);
	return result;
}

