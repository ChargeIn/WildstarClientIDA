//----- (00000001404AF890) ----------------------------------------------------
__int64 __fastcall sub_1404AF890(__int64 a1, __int64 a2)
{
	unsigned int v2; // ecx
	unsigned int v3; // edx
	__int64 result; // rax

	v2 = *(_DWORD*)(*(_QWORD*)a1 + 8i64);
	v3 = *(_DWORD*)(*(_QWORD*)a2 + 8i64);
	if (v2 == v3)
		return 0i64;
	result = 1i64;
	if (v2 < v3)
		return 0xFFFFFFFFi64;
	return result;
}

