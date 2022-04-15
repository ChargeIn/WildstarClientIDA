//----- (000000014028AF50) ----------------------------------------------------
__int64 __fastcall sub_14028AF50(__int64 a1, int a2)
{
	__int64 v4; // rdx
	__int64 result; // rax
	__int64 v6; // rcx

	if (*(int*)(a1 + 36) >= 1)
	{
		if (a2 < 1)
		{
			v6 = *(_QWORD*)(a1 + 40);
			if (v6)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 16i64))(v6);
				*(_QWORD*)(a1 + 40) = 0i64;
			}
			*(_DWORD*)(a1 + 48) = 0;
		}
		goto LABEL_10;
	}
	if (a2 < 1
		|| (v4 = *(_QWORD*)(a1 + 16),
			result = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, __int64, _QWORD))(**(_QWORD**)(v4 + 6608) + 216i64))(
				*(_QWORD*)(v4 + 6608),
				*(unsigned int*)(a1 + 24),
				*(unsigned int*)(*(_QWORD*)(v4 + 7048) + 4i64 * *(int*)(a1 + 32)),
				*((unsigned int*)&unk_140AE79F8 + *(int*)(a1 + 28)),
				*(_DWORD*)(*(_QWORD*)(v4 + 7056) + 4i64 * *(int*)(a1 + 32)),
				a1 + 40,
				0i64),
			(int)result >= 0))
	{
	LABEL_10:
		*(_DWORD*)(a1 + 36) = a2;
		return 0i64;
	}
	return result;
}
// 14028AFEB: conditional instruction was optimized away because eax.4<1

