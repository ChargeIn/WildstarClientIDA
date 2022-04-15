//----- (00000001406F5690) ----------------------------------------------------
__int64 __fastcall sub_1406F5690(__int64 a1)
{
	unsigned int v1; // edx
	__int64 v3; // rcx
	__int64 result; // rax

	v1 = 0;
	if (*(_QWORD*)(qword_140C65898 + 26488) && *(_DWORD*)(qword_140C65898 + 26476) - dword_140C636A8 > 0)
		v1 = *(_DWORD*)(qword_140C65898 + 26476) - dword_140C636A8;
	v3 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v3 + 8) = 3;
	result = 1i64;
	*(double*)v3 = (double)(v1 / 0x3E8);
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;

