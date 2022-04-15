//----- (000000014079BAC0) ----------------------------------------------------
__int64 __fastcall sub_14079BAC0(__int64 a1, _QWORD* a2)
{
	unsigned __int64 v2; // rbp
	unsigned __int16* v4; // rbx
	unsigned __int64 v5; // rsi
	__int64 v6; // r14
	__int16 v7; // di

	v2 = *(_QWORD*)(a1 + 8);
	if (v2 != a2[1])
		return 0i64;
	v4 = *(unsigned __int16**)a1;
	if (*(_QWORD*)a1 == *a2)
		return 1i64;
	v5 = 0i64;
	if (!v2)
		return 1i64;
	v6 = *a2 - (_QWORD)v4;
	while (1)
	{
		v7 = sub_140056430(*(unsigned __int16*)((char*)v4 + v6));
		if ((unsigned __int16)sub_140056430(*v4) != v7)
			break;
		++v5;
		++v4;
		if (v5 >= v2)
			return 1i64;
	}
	return 0i64;
}

