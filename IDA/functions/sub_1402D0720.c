//----- (00000001402D0720) ----------------------------------------------------
unsigned __int64 __fastcall sub_1402D0720(__int64 a1, __int64 a2)
{
	__int64 v3; // r8
	unsigned __int64 v4; // rbx
	unsigned __int64 result; // rax
	__int64 v7; // rsi
	__int64 v8; // rcx

	v3 = *(_QWORD*)(a1 + 312) - *(_QWORD*)(a1 + 304);
	v4 = 0i64;
	result = (unsigned __int64)((unsigned __int128)(v3 * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64) >> 63;
	if (v3 / 192)
	{
		v7 = 0i64;
		do
		{
			sub_1402D7E30(v7 + *(_QWORD*)(a1 + 304), a2);
			v8 = *(_QWORD*)(a1 + 312) - *(_QWORD*)(a1 + 304);
			++v4;
			v7 += 192i64;
			result = (unsigned __int64)((unsigned __int128)(v8 * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64) >> 63;
		} while (v4 < v8 / 192);
	}
	return result;
}

