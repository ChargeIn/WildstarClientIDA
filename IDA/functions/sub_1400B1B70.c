//----- (00000001400B1B70) ----------------------------------------------------
__int64 __fastcall sub_1400B1B70(__int64 a1, __int64 a2)
{
	unsigned __int64 v2; // rcx
	unsigned __int64 v3; // rdx

	v2 = *(_QWORD*)(*(_QWORD*)a1 + 8i64);
	v3 = *(_QWORD*)(*(_QWORD*)a2 + 8i64);
	if (v2 >= v3)
		return v2 > v3;
	else
		return 0xFFFFFFFFi64;
}

