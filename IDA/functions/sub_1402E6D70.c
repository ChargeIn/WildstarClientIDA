//----- (00000001402E6D70) ----------------------------------------------------
__m128* __fastcall sub_1402E6D70(__int64 a1, __m128* a2)
{
	bool v4; // zf
	__int64 v6; // [rsp+30h] [rbp+8h] BYREF

	(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 32) + 160i64))(*(_QWORD*)(a1 + 32));
	v4 = *(_QWORD*)(a1 + 24) == 0i64;
	v6 = 0i64;
	if (!v4)
	{
		if ((*(unsigned int(__fastcall**)(_QWORD, __int64*))(**(_QWORD**)(a1 + 32) + 80i64))(*(_QWORD*)(a1 + 32), &v6) == 1)
			*a2 = _mm_add_ps(
				*(__m128*)((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 24) + 32i64))(*(_QWORD*)(a1 + 24)) + 48),
				*a2);
		if (v6)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
	}
	return a2;
}

