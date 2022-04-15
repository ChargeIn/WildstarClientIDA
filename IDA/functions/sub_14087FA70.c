//----- (000000014087FA70) ----------------------------------------------------
__int64 __fastcall sub_14087FA70(__int64 a1, __int64 a2, __int64 a3)
{
	char* v3; // r9
	char v5; // [rsp+20h] [rbp-28h]
	char v6; // [rsp+50h] [rbp+8h] BYREF

	v3 = &v6;
	LOBYTE(v3) = 1;
	v5 = 0;
	return (*(__int64(__fastcall**)(_QWORD, __int64, __int64, char*, char, _DWORD, char*))(**(_QWORD**)(a1 + 528)
		+ 56i64))(
			*(_QWORD*)(a1 + 528),
			a2,
			a3,
			v3,
			v5,
			0,
			&v6);
}

