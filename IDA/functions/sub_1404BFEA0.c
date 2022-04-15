//----- (00000001404BFEA0) ----------------------------------------------------
__int64 __fastcall sub_1404BFEA0(__int64 a1, __int64 a2)
{
	unsigned __int64 v2; // r9
	__int64 v3; // r8
	__int64 i; // rax

	v2 = *(_QWORD*)(a1 + 312);
	v3 = 0i64;
	if (!v2)
		return 0i64;
	for (i = *(_QWORD*)(a1 + 304); !*(_QWORD*)i || *(_QWORD*)(*(_QWORD*)i + 288i64) != a2; i += 8i64)
	{
		if (++v3 >= v2)
			return 0i64;
	}
	return 1i64;
}

