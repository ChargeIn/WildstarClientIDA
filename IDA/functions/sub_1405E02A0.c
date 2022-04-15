//----- (00000001405E02A0) ----------------------------------------------------
__int64 __fastcall sub_1405E02A0(__int64 a1, __int64 a2)
{
	unsigned __int64 v4; // rdi
	_QWORD* v5; // rbx
	__int64 v6; // rcx

	v4 = (*(__int64(__fastcall**)(__int64))(a1 + 184))(a2);
	v5 = *(_QWORD**)(*(_QWORD*)(a1 + 176) + 8 * (v4 % *(_QWORD*)(a1 + 168)));
	if (v5)
	{
		while (v4 != *v5 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(a1 + 192))(a2, v5 + 2))
		{
			v5 = (_QWORD*)v5[1];
			if (!v5)
				return 0i64;
		}
		if (v5 != (_QWORD*)-32i64)
		{
			v6 = v5[4];
			*(_DWORD*)(v6 + 232) = *(_DWORD*)(a2 + 16);
			sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "FriendshipUpdate", byte_1409EAC3C, *(unsigned int*)(v6 + 8));
		}
	}
	return 0i64;
}
// 1409EAC3C: using guessed type _BYTE byte_1409EAC3C[32];
// 140C65898: using guessed type __int64 qword_140C65898;

