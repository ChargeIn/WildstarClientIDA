//----- (00000001406D9BA0) ----------------------------------------------------
__int64 __fastcall sub_1406D9BA0(__int64 a1)
{
	__int64 v1; // rax
	__int64 v2; // rcx
	__int64 result; // rax

	if (*(_DWORD*)(a1 + 1024))
		return 3i64;
	v1 = *(_QWORD*)(a1 + 32);
	v2 = *(_QWORD*)(v1 + 3440);
	if (*(_QWORD*)(v1 + 3448) - v2 != 9)
		return 3i64;
	if (*(_QWORD*)v2 != 0x6574496761424444i64)
		return 3i64;
	result = 2i64;
	if (*(_BYTE*)(v2 + 8) != 109)
		return 3i64;
	return result;
}

