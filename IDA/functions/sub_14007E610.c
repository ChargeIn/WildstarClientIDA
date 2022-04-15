//----- (000000014007E610) ----------------------------------------------------
__int64 __fastcall sub_14007E610(__int64 a1, _DWORD* a2)
{
	__int64 v2; // r8
	bool v4; // dl
	__int64 v5; // rcx
	_BOOL8 v6; // r10
	_QWORD* v7; // rdx
	__int64 v8; // rcx

	v2 = *(_QWORD*)(a1 + 8);
	v4 = *a2 != 0;
	if (!v2)
		return sub_140336470(a1, v4, 1ui64);
	v5 = *(_QWORD*)(a1 + 16);
	if ((unsigned __int64)(8i64 * (*(_QWORD*)(v2 + 24) - *(_QWORD*)(v2 + 32)) - v5) < 0x40)
		return sub_140336470(a1, v4, 1ui64);
	v6 = v4;
	v7 = *(_QWORD**)(v2 + 32);
	*v7 &= (1i64 << v5) - 1;
	*v7 |= v6 << *(_QWORD*)(a1 + 16);
	v8 = *(_QWORD*)(a1 + 16);
	if (((v8 + 8) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
		*(_BYTE*)(*(_QWORD*)(v2 + 32) + 8i64) = (unsigned __int64)v6 >> (64 - (unsigned __int8)v8);
	*(_QWORD*)(v2 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 1i64) >> 3;
	*(_QWORD*)(a1 + 16) = ((unsigned __int8)*(_QWORD*)(a1 + 16) + 1) & 7;
	return 0i64;
}

