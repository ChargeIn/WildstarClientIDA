//----- (00000001401BA550) ----------------------------------------------------
__int64 __fastcall sub_1401BA550(__int64 a1)
{
	unsigned __int64 v1; // rdx
	unsigned __int64* v2; // r8
	unsigned __int64 v3; // rax
	unsigned int v4; // edx
	unsigned __int64 v5; // rax

	if (*(_DWORD*)(a1 + 56) != 1346454347 || *(_DWORD*)(a1 + 60) != 1)
		return 2684551169i64;
	v1 = 0i64;
	v2 = (unsigned __int64*)(a1 + 64);
	do
	{
		v3 = *v2;
		if (*v2 && ((v3 & 0xF) != 0 || v3 < 0x240 || v3 + 24 > *(_QWORD*)(a1 + 576)))
			return 2684551169i64;
		++v1;
		++v2;
	} while (v1 < 0x40);
	v4 = *(_DWORD*)(a1 + 600);
	if (!v4)
	{
		if (*(_QWORD*)(a1 + 592) || *(_DWORD*)(a1 + 604) || *(_DWORD*)(a1 + 608))
			return 2684551169i64;
		return 0i64;
	}
	v5 = *(_QWORD*)(a1 + 592);
	if ((v5 & 0xF) == 0
		&& v5 >= 0x240
		&& v5 + 24 <= *(_QWORD*)(a1 + 576)
		&& *(_DWORD*)(a1 + 604) < v4
		&& *(_DWORD*)(a1 + 608) < v4)
	{
		return 0i64;
	}
	return 2684551169i64;
}

