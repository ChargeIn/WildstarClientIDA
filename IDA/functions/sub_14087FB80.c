//----- (000000014087FB80) ----------------------------------------------------
__int64 __fastcall sub_14087FB80(__int64 a1, __int64 a2)
{
	__int64 v3; // rcx
	unsigned int v6; // edi
	char v7; // [rsp+50h] [rbp+8h] BYREF

	v3 = *(_QWORD*)(a1 + 528);
	if (!v3)
		return 2i64;
	v6 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)v3 + 72i64))(v3, 0i64, 0i64, 0i64);
	if (v6 == 1)
		v6 = (*(__int64(__fastcall**)(_QWORD, __int64, __int64, __int64, _BYTE, _DWORD, char*))(**(_QWORD**)(a1 + 528)
			+ 56i64))(
				*(_QWORD*)(a1 + 528),
				a2,
				46i64,
				1i64,
				0,
				0,
				&v7);
	(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 528) + 8i64))(*(_QWORD*)(a1 + 528));
	*(_QWORD*)(a1 + 528) = 0i64;
	return v6;
}

