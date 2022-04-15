//----- (000000014019C240) ----------------------------------------------------
__int64 __fastcall sub_14019C240(__int64 a1, __int64 a2)
{
	__int64 v2; // rdi
	__int64 result; // rax

	v2 = a1 + 192;
	result = sub_1400454D0(
		*(_QWORD*)(a2 + 8),
		*(_QWORD*)(a2 + 16),
		*(unsigned __int16**)(a1 + 200),
		*(_QWORD*)(a1 + 208));
	if ((int)result < 0
		|| (v2 = a1 + 224,
			result = sub_1400454D0(
				*(_QWORD*)(a1 + 232),
				*(_QWORD*)(a1 + 240),
				*(unsigned __int16**)(a2 + 8),
				*(_QWORD*)(a2 + 16)),
			(int)result < 0))
	{
		if (v2 != a2)
			return sub_14001C480(a2, *(int**)(v2 + 8), *(int**)(v2 + 16));
	}
	return result;
}

