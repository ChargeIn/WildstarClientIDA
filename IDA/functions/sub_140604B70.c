//----- (0000000140604B70) ----------------------------------------------------
__int64 __fastcall sub_140604B70(__int64 a1, __int64 a2)
{
	__int64 v2; // rdi
	__int64 v4; // rcx
	__int64 v6; // rdi
	__int64 v7; // rcx
	unsigned __int64 v8; // [rsp+30h] [rbp+8h] BYREF

	v2 = *(_QWORD*)(a1 + 64);
	if (v2 && *(_QWORD*)(v2 + 72) == *(_QWORD*)a2)
	{
		if (sub_14079EE60(*(_QWORD*)(a1 + 64), a2 + 8, &v8))
		{
			v4 = *(_QWORD*)(*(_QWORD*)(v2 + 88) + 8 * v8);
			if (v4)
			{
				*(_QWORD*)(v4 + 264) = 0i64;
				sub_1403705B0((__int64*)(v4 + 256), *(int**)(a2 + 32), *(unsigned int*)(a2 + 24));
				sub_1400A8020(*(_QWORD*)(qword_140C65898 + 29504) + 4536i64);
				return 0i64;
			}
		}
	}
	else
	{
		v6 = *(_QWORD*)(a1 + 72);
		if (v6)
		{
			if (*(_QWORD*)(v6 + 72) == *(_QWORD*)a2 && sub_14079EE60(*(_QWORD*)(a1 + 72), a2 + 8, &v8))
			{
				v7 = *(_QWORD*)(*(_QWORD*)(v6 + 88) + 8 * v8);
				if (v7)
				{
					*(_QWORD*)(v7 + 264) = 0i64;
					sub_1403705B0((__int64*)(v7 + 256), *(int**)(a2 + 32), *(unsigned int*)(a2 + 24));
				}
			}
		}
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

