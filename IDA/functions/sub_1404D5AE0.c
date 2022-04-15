//----- (00000001404D5AE0) ----------------------------------------------------
__int64 __fastcall sub_1404D5AE0(__int64 a1)
{
	_QWORD* v1; // rdx
	__int64 v3; // rcx
	_QWORD* v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rax
	__int64 v8; // rcx
	__int64 v9; // rcx

	v1 = *(_QWORD**)(a1 + 96);
	*(_DWORD*)(a1 + 84) = 1;
	*(_DWORD*)(a1 + 40) = 0;
	if (!v1)
		return 0i64;
	if (!v1[3])
	{
		sub_140048100(a1, (__int64)v1, 1);
		v8 = *(_QWORD*)(a1 + 96);
		if (v8)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
			*(_QWORD*)(a1 + 96) = 0i64;
		}
		v9 = *(_QWORD*)(a1 + 88);
		if (v9)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
			*(_QWORD*)(a1 + 88) = 0i64;
		}
		return 0i64;
	}
	(*(void(__fastcall**)(_QWORD*))(*v1 + 8i64))(v1);
	*(_QWORD*)(a1 + 96) = 0i64;
	v3 = *(_QWORD*)(a1 + 88);
	if (v3)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
		*(_QWORD*)(a1 + 88) = 0i64;
	}
	v4 = *(_QWORD**)(a1 + 24);
	*(_DWORD*)(a1 + 40) = 4;
	if (!v4)
		return 0i64;
	*v4 = *(_QWORD*)(a1 + 32);
	v5 = *(_QWORD*)(a1 + 32);
	if (v5)
		*(_QWORD*)(v5 + 24) = *(_QWORD*)(a1 + 24);
	v6 = *(_QWORD*)a1;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	(*(void(__fastcall**)(__int64))(v6 + 8))(a1);
	return 0i64;
}

