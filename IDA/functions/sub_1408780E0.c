//----- (00000001408780E0) ----------------------------------------------------
__int64 __fastcall sub_1408780E0(__int64 a1)
{
	__int64 v2; // rcx

	v2 = *(_QWORD*)(a1 + 32);
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 144i64))(v2);
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 32) + 16i64))(*(_QWORD*)(a1 + 32));
		*(_QWORD*)(a1 + 32) = 0i64;
	}
	if (qword_140C628B8)
	{
		(*(void(__fastcall**)(LPVOID))(*(_QWORD*)qword_140C628B8 + 16i64))(qword_140C628B8);
		qword_140C628B8 = 0i64;
	}
	return sub_14085CE40(a1);
}

