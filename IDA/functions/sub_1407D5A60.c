//----- (00000001407D5A60) ----------------------------------------------------
__int64 __fastcall sub_1407D5A60(__int64 a1, unsigned int a2, unsigned int a3)
{
	__int64 v4; // rdi
	__int64 v5; // rax
	__int64 v6; // rax

	v4 = a3;
	v5 = (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 24) + 280i64))(
		*(_QWORD*)(a1 + 24),
		*(unsigned int*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 800i64) + 4i64 * a2));
	if (v5
		&& (v6 = (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 24) + 264i64))(
			*(_QWORD*)(a1 + 24),
			*(unsigned int*)(v5 + 4 * v4 + 8))) != 0)
	{
		return *(unsigned int*)(v6 + 4);
	}
	else
	{
		return 0i64;
	}
}

