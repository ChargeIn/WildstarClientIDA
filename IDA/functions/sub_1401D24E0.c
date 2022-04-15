//----- (00000001401D24E0) ----------------------------------------------------
__int64 __fastcall sub_1401D24E0(__int64 a1)
{
	__int64 v2; // rcx
	int v4; // eax
	unsigned int v5; // ecx

	v2 = *(_QWORD*)(a1 + 744);
	if (!v2)
		return 2684551174i64;
	v4 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v2 + 64i64))(v2, a1 + 600);
	v5 = 0;
	if (v4 < 0)
		return (unsigned int)v4;
	return v5;
}

