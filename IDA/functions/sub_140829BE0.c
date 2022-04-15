//----- (0000000140829BE0) ----------------------------------------------------
__int64 __fastcall sub_140829BE0(__int64* a1, char a2)
{
	unsigned int v4; // edi
	unsigned int v5; // ebp
	__int64 result; // rax
	_BYTE* v7; // rsi

	if (*a1)
		v4 = *(unsigned __int8*)*a1;
	else
		v4 = 0;
	v5 = v4 + 5;
	result = sub_1408819F0(dword_140C10F20, ((v4 + 5) & 0xFFFFFFFC) + 16 * (v4 + 1));
	v7 = (_BYTE*)result;
	if (result)
	{
		if (*a1)
		{
			sub_1407DB590((int*)(result + 1), (int*)(*a1 + 1), v4);
			sub_1407DB590((int*)&v7[v5 & 0xFFFFFFFC], (int*)(*a1 + ((v4 + 4) & 0xFFFFFFFC)), 16i64 * v4);
			sub_140881720(dword_140C10F20, *a1);
		}
		v7[v4 + 1] = a2;
		*v7 = v4 + 1;
		*a1 = (__int64)v7;
		return (__int64)&v7[16 * v4 + (v5 & 0xFFFFFFFC)];
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

