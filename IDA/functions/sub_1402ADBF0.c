//----- (00000001402ADBF0) ----------------------------------------------------
__int64 __fastcall sub_1402ADBF0(__int64 a1, __int64 a2)
{
	__int64 v3; // rdi
	__int64 v4; // rcx
	__int64 v5; // rcx
	_QWORD* v6; // rcx
	__int64 v7; // rax

	*(_DWORD*)(a1 + 8) = 0;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_QWORD*)a1 = a2;
	v3 = *(_QWORD*)(a2 + 8584);
	*(_DWORD*)(a1 + 8) = 0;
	*(_QWORD*)(a1 + 16) = 0i64;
	v4 = *(_QWORD*)(v3 + 136);
	if (*(_QWORD*)(a1 + 32) != v4)
	{
		if (v4)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		v5 = *(_QWORD*)(a1 + 32);
		if (v5)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 16i64))(v5);
		*(_QWORD*)(a1 + 32) = *(_QWORD*)(v3 + 136);
	}
	v6 = (_QWORD*)(*(_QWORD*)a1 + 8600i64);
	if (!*(_QWORD*)(a1 + 40))
	{
		*(_QWORD*)(a1 + 40) = v6;
		*(_QWORD*)(a1 + 48) = *v6;
		*v6 = a1;
		v7 = *(_QWORD*)(a1 + 48);
		if (v7)
			*(_QWORD*)(v7 + 40) = a1 + 48;
	}
	*(_DWORD*)(*(_QWORD*)a1 + 7176i64) |= 8u;
	return a1;
}

