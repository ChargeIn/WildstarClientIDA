//----- (000000014008B880) ----------------------------------------------------
__int64 __fastcall sub_14008B880(__int64 a1, __int64 a2)
{
	__int64 v2; // r8
	bool v4; // dl
	__int64 v6; // rcx
	_BOOL8 v7; // r9
	_QWORD* v8; // rdx
	__int64 v9; // rcx
	__int64 result; // rax

	v2 = *(_QWORD*)(a1 + 8);
	v4 = *(_DWORD*)a2 != 0;
	if (v2
		&& (v6 = *(_QWORD*)(a1 + 16), (unsigned __int64)(8i64 * (*(_QWORD*)(v2 + 24) - *(_QWORD*)(v2 + 32)) - v6) >= 0x40))
	{
		v7 = v4;
		v8 = *(_QWORD**)(v2 + 32);
		*v8 &= (1i64 << v6) - 1;
		*v8 |= v7 << *(_QWORD*)(a1 + 16);
		v9 = *(_QWORD*)(a1 + 16);
		if (((v9 + 8) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
			*(_BYTE*)(*(_QWORD*)(v2 + 32) + 8i64) = (unsigned __int64)v7 >> (64 - (unsigned __int8)v9);
		*(_QWORD*)(v2 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 1i64) >> 3;
		*(_QWORD*)(a1 + 16) = ((unsigned __int8)*(_QWORD*)(a1 + 16) + 1) & 7;
	}
	else
	{
		result = sub_140336470(a1, v4, 1ui64);
		if ((int)result < 0)
			return result;
	}
	result = sub_14006BD80(a1, *(float*)(a2 + 4));
	if ((int)result >= 0)
	{
		result = sub_14006BD80(a1, *(float*)(a2 + 8));
		if ((int)result >= 0)
			return sub_14006BD80(a1, *(float*)(a2 + 12));
	}
	return result;
}

