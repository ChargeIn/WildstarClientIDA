//----- (00000001407C23A0) ----------------------------------------------------
__int64 __fastcall sub_1407C23A0(__int64 a1, __int64 a2, unsigned int* a3)
{
	unsigned int v3; // eax
	unsigned int v4; // r9d
	unsigned __int64 v9; // rax
	_DWORD* v10; // rcx
	unsigned int v11; // edx
	unsigned int v12; // r8d

	v3 = *(_DWORD*)(a1 + 12);
	v4 = *(_DWORD*)(a2 + 12);
	if (v3 < v4)
		return 0xFFFFFFFFi64;
	if (v3 > v4)
		return 1i64;
	v9 = *(_QWORD*)(a2 + 24);
	v10 = *(_DWORD**)(a1 + 24);
	v11 = v10[2];
	v12 = *(_DWORD*)(v9 + 8);
	if (v11 < v12)
		return 0xFFFFFFFFi64;
	if (v11 > v12)
		return 1i64;
	if ((unsigned __int64)v10 < v9)
		return 0xFFFFFFFFi64;
	if ((unsigned __int64)v10 > v9)
		return 1i64;
	return (*(__int64(__fastcall**)(_DWORD*, _QWORD, __int64, __int64))(*(_QWORD*)v10 + 8i64))(v10, *a3, a1, a2);
}

