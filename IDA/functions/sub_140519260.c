//----- (0000000140519260) ----------------------------------------------------
char __fastcall sub_140519260(__int64 a1)
{
	__int64 v1; // rax
	__int64 v3; // rcx
	unsigned __int64 v4; // rdx
	unsigned __int16* v5; // rdx
	char* v6; // rcx

	LOBYTE(v1) = qword_140C635F0;
	v3 = *(_QWORD*)(qword_140C635F0 + 5584);
	v4 = *(_QWORD*)(a1 + 16);
	if (v4 < *(_QWORD*)(v3 + 64))
	{
		v1 = **(_QWORD**)(*(_QWORD*)(v3 + 56) + 8 * v4);
		v5 = *(unsigned __int16**)(*(_QWORD*)v1 + 56i64);
		if (v5)
		{
			if (*(_DWORD*)(a1 + 48))
				sub_140006E50(v3, v5, *(_QWORD*)(a1 + 56));
			else
				sub_140006D60(v3, v5, (__int64*)(a1 + 64));
			v6 = *(char**)(a1 + 8);
			*(_QWORD*)(a1 + 16) = -1i64;
			LOBYTE(v1) = sub_1400D4040((__int64)v6, "AccountPendingItemsGifted", v6, &byte_140B7B700);
		}
	}
	return v1;
}
// 140B7B700: using guessed type char byte_140B7B700;
// 140C635F0: using guessed type __int64 qword_140C635F0;

