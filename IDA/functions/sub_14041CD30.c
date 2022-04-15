//----- (000000014041CD30) ----------------------------------------------------
__int64 __fastcall sub_14041CD30(__int64 a1)
{
	__int64** v2; // rax
	__int64* v3; // rdi
	unsigned int v4; // edx
	__int64 v5; // rcx
	unsigned int v6; // r8d
	signed int v7; // edx
	__int64 v8; // rax
	__int64 v9; // rax

	v2 = (__int64**)sub_140417660(a1, 1);
	if (!v2)
		return 0i64;
	v3 = *v2;
	if (*v2)
		v3 = (__int64*)*v3;
	if (!v3)
		return 0i64;
	if ((~(*((_DWORD*)v3 + 32) >> 3) & 1) != 0
		&& (int)(*((_DWORD*)v3 + 59) - sub_14018CDF0()) > 0
		&& (v4 = *((_DWORD*)v3 + 59) - sub_14018CDF0()) != 0)
	{
		v5 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v5 + 8) = 3;
		v6 = v4 / 0x3E8;
		v7 = v4 / 0x3E8 / 0x3C;
		*(double*)v5 = (double)v7;
		*(_QWORD*)(a1 + 16) += 16i64;
		v8 = *(_QWORD*)(a1 + 16);
		*(double*)v8 = (double)(int)(v6 - 60 * v7);
	}
	else
	{
		v9 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v9 = 0i64;
		*(_DWORD*)(v9 + 8) = 3;
		*(_QWORD*)(a1 + 16) += 16i64;
		v8 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v8 = 0i64;
	}
	*(_DWORD*)(v8 + 8) = 3;
	*(_QWORD*)(a1 + 16) += 16i64;
	return 2i64;
}

