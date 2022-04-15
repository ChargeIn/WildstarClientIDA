//----- (000000014045B6B0) ----------------------------------------------------
__int64 __fastcall sub_14045B6B0(__int64 a1)
{
	unsigned __int64 v1; // r8
	__int64 v2; // rdx
	__int64 i; // rax

	v1 = *(_QWORD*)(a1 + 408);
	v2 = 0i64;
	if (!v1)
		return 0i64;
	for (i = *(_QWORD*)(a1 + 400); *(_DWORD*)i || *(_BYTE*)(i + 4); i += 12i64)
	{
		if (++v2 >= v1)
			return 0i64;
	}
	return *(unsigned int*)(*(_QWORD*)(a1 + 400) + 12 * v2 + 8);
}

