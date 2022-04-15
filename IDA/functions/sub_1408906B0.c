//----- (00000001408906B0) ----------------------------------------------------
__int64 __fastcall sub_1408906B0(__int64 a1, __int64* a2)
{
	__int64 v4; // rax
	__int64 result; // rax
	__int64 v6; // rax

	v4 = *(_QWORD*)(*(_QWORD*)(a1 + 264) + 24i64);
	if (v4)
	{
		result = *(_QWORD*)(v4 + 128);
		if (a2)
			*a2 = *(_QWORD*)(result + 64);
	}
	else
	{
		if (a2)
		{
			v6 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 272) + 120i64))(*(_QWORD*)(a1 + 272));
			*a2 = v6;
			if (!v6)
				*a2 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 272) + 16i64) + 120i64))(*(_QWORD*)(*(_QWORD*)(a1 + 272) + 16i64));
		}
		return 0i64;
	}
	return result;
}

