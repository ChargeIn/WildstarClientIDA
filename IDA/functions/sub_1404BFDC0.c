//----- (00000001404BFDC0) ----------------------------------------------------
__int64 __fastcall sub_1404BFDC0(_QWORD* a1)
{
	unsigned __int64 i; // rbx
	__int64 v3; // rcx

	for (i = 0i64; i < a1[39]; ++i)
	{
		v3 = *(_QWORD*)(a1[38] + 8 * i);
		if (v3)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 112i64))(v3);
	}
	return (*(__int64(__fastcall**)(_QWORD*))(*a1 + 160i64))(a1);
}

