//----- (0000000140933B70) ----------------------------------------------------
__int64 __fastcall sub_140933B70(_QWORD* a1, unsigned __int64 a2)
{
	_BYTE* v4; // r10
	_BYTE* v5; // rcx

	if (a2 > a1[3] || a2 < a1[1])
		return -1i64;
	v4 = (_BYTE*)(~qword_140C63550 & (qword_140C63550 + a2));
	v5 = (_BYTE*)(~qword_140C63550 & (qword_140C63550 + a1[2]));
	if (v4 != v5)
	{
		if (v4 <= v5)
		{
			if (!VirtualFree(v4, v5 - v4, 0x4000u))
				return -1i64;
		}
		else if (!VirtualAlloc(v5, v4 - v5, 0x1000u, 4u))
		{
			return -1i64;
		}
	}
	a1[2] = a2;
	return 0i64;
}
// 140C63550: using guessed type __int64 qword_140C63550;

