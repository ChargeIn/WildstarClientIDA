//----- (00000001403D6D10) ----------------------------------------------------
_BOOL8 __fastcall sub_1403D6D10(__int64 a1)
{
	return !*(_DWORD*)(a1 + 20)
		&& (!*(_DWORD*)((**(__int64(__fastcall***)(__int64, _QWORD))a1)(a1, *(unsigned int*)(a1 + 8)) + 20)
			|| dword_140C636A8 < (unsigned int)(*(_DWORD*)(a1 + 12) + *(_DWORD*)(a1 + 16)))
		&& (!*(_DWORD*)((**(__int64(__fastcall***)(__int64, _QWORD))a1)(a1, *(unsigned int*)(a1 + 8)) + 28)
			|| *(_DWORD*)(a1 + 24));
}
// 140C636A8: using guessed type int dword_140C636A8;

