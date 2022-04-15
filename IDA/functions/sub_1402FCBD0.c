//----- (00000001402FCBD0) ----------------------------------------------------
__int64 __fastcall sub_1402FCBD0(__int64 a1, unsigned int a2, _OWORD* a3)
{
	__int64 result; // rax
	__int64 v4; // rdx

	result = *(_QWORD*)(a1 + 64);
	if (a2 < *(_DWORD*)(result + 760))
	{
		result = *(_QWORD*)(a1 + 1424);
		v4 = *(_QWORD*)(result + 8i64 * a2);
		*a3 = *(_OWORD*)(v4 + 240);
		a3[1] = *(_OWORD*)(v4 + 256);
	}
	else
	{
		*a3 = xmmword_140C798C0;
		a3[1] = xmmword_140C798D0;
	}
	return result;
}
// 140C798C0: using guessed type __int128 xmmword_140C798C0;
// 140C798D0: using guessed type __int128 xmmword_140C798D0;

