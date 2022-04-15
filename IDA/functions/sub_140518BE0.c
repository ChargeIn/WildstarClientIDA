//----- (0000000140518BE0) ----------------------------------------------------
char __fastcall sub_140518BE0(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rax
	unsigned __int64 v4; // rdx
	__int64* v5; // rdx

	v2 = qword_140C635F0;
	v3 = *(_QWORD*)(qword_140C635F0 + 5584);
	v4 = *(_QWORD*)(a1 + 16);
	if (v4 < *(_QWORD*)(v3 + 112))
	{
		v5 = (__int64*)(*(_QWORD*)(v3 + 104) + (v4 << 6));
		if (v5)
		{
			*(_QWORD*)(a1 + 16) = -1i64;
			LODWORD(v3) = sub_140006D00(*(_QWORD*)(v2 + 5584), *v5);
			if ((int)v3 >= 0)
				LOBYTE(v3) = sub_1400D4040(*(_QWORD*)(a1 + 8), "AccountPendingItemTook", *(char**)(a1 + 8), &byte_140B7B700);
		}
	}
	return v3;
}
// 140B7B700: using guessed type char byte_140B7B700;
// 140C635F0: using guessed type __int64 qword_140C635F0;

