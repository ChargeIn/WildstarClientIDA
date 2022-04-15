//----- (0000000140330000) ----------------------------------------------------
__int64 __fastcall sub_140330000(__int64 a1, unsigned __int8* a2)
{
	__int64 v2; // r8
	unsigned __int8 v3; // r10
	__int64 v5; // rcx
	_QWORD* v6; // rdx
	__int64 v7; // rcx

	v2 = *(_QWORD*)(a1 + 8);
	v3 = *a2;
	if (v2
		&& (v5 = *(_QWORD*)(a1 + 16), (unsigned __int64)(8i64 * (*(_QWORD*)(v2 + 24) - *(_QWORD*)(v2 + 32)) - v5) >= 0x40))
	{
		v6 = *(_QWORD**)(v2 + 32);
		*v6 &= (1i64 << v5) - 1;
		*v6 |= (unsigned __int64)v3 << *(_QWORD*)(a1 + 16);
		v7 = *(_QWORD*)(a1 + 16);
		if (((v7 + 15) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
			*(_BYTE*)(*(_QWORD*)(v2 + 32) + 8i64) = (unsigned __int64)v3 >> (64 - (unsigned __int8)v7);
		*(_QWORD*)(v2 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 8i64) >> 3;
		*(_QWORD*)(a1 + 16) &= 7ui64;
		return 0i64;
	}
	else
	{
		sub_140336470(a1, v3, 8ui64);
		return 0i64;
	}
}

