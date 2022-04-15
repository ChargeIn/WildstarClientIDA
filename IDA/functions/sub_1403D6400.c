//----- (00000001403D6400) ----------------------------------------------------
__int64 __fastcall sub_1403D6400(__int64 a1)
{
	int v1; // ebx
	__int64 i; // rdi

	v1 = 0;
	for (i = 52i64;
		!(*(unsigned int(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 96i64))(
			qword_140C65980,
			*(unsigned int*)(*(_QWORD*)(a1 + 8) + i),
			*(unsigned int*)(a1 + 128));
		i += 4i64)
	{
		if ((unsigned __int64)++v1 >= 3)
			return 0i64;
	}
	return 1i64;
}
// 140C65980: using guessed type __int64 qword_140C65980;

