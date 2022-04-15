//----- (00000001404D5BB0) ----------------------------------------------------
__int64 __fastcall sub_1404D5BB0(__int64 a1)
{
	unsigned __int32 v2; // edi
	__int64 v3; // rcx
	__int64 v4; // rcx

	v2 = _InterlockedDecrement((volatile signed __int32*)(a1 + 8));
	if (v2)
	{
		if (!*(_QWORD*)(a1 + 24))
		{
			sub_140729B20(*(_QWORD*)(a1 + 200));
			v3 = *(_QWORD*)(a1 + 96);
			if (v3)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
				*(_QWORD*)(a1 + 96) = 0i64;
			}
			v4 = *(_QWORD*)(a1 + 88);
			if (v4)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
				*(_QWORD*)(a1 + 88) = 0i64;
			}
		}
		return v2;
	}
	else
	{
		if (a1)
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 16i64))(a1, 1i64);
		return 0i64;
	}
}
// 1404D5BCB: conditional instruction was optimized away because edi.4!=0

