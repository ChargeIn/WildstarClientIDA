//----- (00000001404F6750) ----------------------------------------------------
__int64 __fastcall sub_1404F6750(__int64 a1, int* a2)
{
	__int64 v4; // rcx

	if (*(_DWORD*)(a1 + 2300))
	{
		v4 = *(_QWORD*)(a1 + 2328);
		if (v4 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v4 + 24i64))(v4) > 0)
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2328) + 112i64))(*(_QWORD*)(a1 + 2328));
		*(float*)(a1 + 2288) = sub_1408FDE98(
			(float)(*a2 - *(_DWORD*)(a1 + 2292)) / (float)((float)*(int*)(a1 + 1064) * 0.25),
			*(float*)&dword_140C460A8 * 2.0)
			+ *(float*)(a1 + 2288);
		*(_DWORD*)(a1 + 2292) = *a2;
		*(_DWORD*)(a1 + 2296) = a2[1];
	}
	return sub_1400D23B0(a1, a2);
}
// 140C460A8: using guessed type int dword_140C460A8;

