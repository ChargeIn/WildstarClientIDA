//----- (00000001402B1F70) ----------------------------------------------------
__int64 __fastcall sub_1402B1F70(_QWORD* a1)
{
	__int64 v1; // r9
	__int128* v2; // rdx
	unsigned __int64 i; // r8

	v1 = 0i64;
	v2 = &xmmword_140C406A0;
	for (i = 0i64; i < 0x180; i += 24i64)
	{
		if (*(_QWORD*)v2 == *a1 && *((_QWORD*)v2 + 1) == a1[1])
			return *((unsigned int*)&xmmword_140C406A0 + 6 * v1 + 4);
		++v1;
		v2 = (__int128*)((char*)v2 + 24);
	}
	if (byte_140C63663 && *a1 == 0x4ACFE8DBE3FED78Fi64 && a1[1] == 0x27B336617FE9C184i64)
		return 6i64;
	else
		return 0i64;
}
// 140C406A0: using guessed type __int128 xmmword_140C406A0;
// 140C63663: using guessed type char byte_140C63663;

