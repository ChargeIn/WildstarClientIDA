//----- (00000001402AC310) ----------------------------------------------------
__int64 __fastcall sub_1402AC310(__int64 a1, int a2)
{
	__int64 v4; // rcx
	__int64 result; // rax
	__int64 v6; // rcx
	int v7; // [rsp+30h] [rbp+8h] BYREF
	int v8; // [rsp+34h] [rbp+Ch]

	if (*(int*)(a1 + 24) >= 2)
	{
		if (a2 < 2)
		{
			v6 = *(_QWORD*)(a1 + 32);
			if (v6)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 16i64))(v6);
				*(_QWORD*)(a1 + 32) = 0i64;
			}
		}
		goto LABEL_10;
	}
	if (a2 < 2
		|| (v4 = *(_QWORD*)(a1 + 16), !*(_DWORD*)(v4 + 224))
		|| (v7 = 5,
			v8 = 1,
			result = (*(__int64(__fastcall**)(_QWORD, int*, __int64))(**(_QWORD**)(v4 + 6336) + 200i64))(
				*(_QWORD*)(v4 + 6336),
				&v7,
				a1 + 32),
			(int)result >= 0))
	{
	LABEL_10:
		*(_DWORD*)(a1 + 24) = a2;
		return 0i64;
	}
	return result;
}
// 1402AC374: conditional instruction was optimized away because eax.4<2

