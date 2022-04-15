//----- (0000000140882110) ----------------------------------------------------
__int64 __fastcall sub_140882110(__int64 a1, __int64 a2, __int64 a3)
{
	unsigned __int64 v4; // r9
	_QWORD* v5; // rdx
	unsigned __int64 v6; // rax

	if (!a2)
		return 0i64;
	v4 = *(_QWORD*)(a2 + 8) & 0xFFFFFFFFFFFFFFFCui64;
	if (v4 >= a3 + 32)
	{
		v5 = (_QWORD*)(a2 + a3 + 8);
		v5[1] &= 3ui64;
		v5[1] |= v4 - a3 - 8;
		*(_QWORD*)(a2 + 8) &= 3ui64;
		*(_QWORD*)(a2 + 8) |= a3;
		v6 = v5[1] & 0xFFFFFFFFFFFFFFFCui64;
		*(_QWORD*)((char*)v5 + v6 + 16) |= 2ui64;
		*(_QWORD*)((char*)v5 + v6 + 8) = v5;
		v5[1] |= 1ui64;
		*(_QWORD*)((*(_QWORD*)(a2 + 8) & 0xFFFFFFFFFFFFFFFCui64) + a2 + 8) = a2;
		v5[1] |= 2ui64;
		sub_140881EC0(a1, v5);
	}
	*(_QWORD*)((*(_QWORD*)(a2 + 8) & 0xFFFFFFFFFFFFFFFCui64) + a2 + 16) &= ~2ui64;
	*(_QWORD*)(a2 + 8) &= ~1ui64;
	return a2 + 16;
}

