//----- (00000001402E72D0) ----------------------------------------------------
__int64 __fastcall sub_1402E72D0(__int64 a1, __int64 a2)
{
	__int64 v4; // rbx
	__int64 result; // rax
	__int64 v6; // rcx
	__int64 v7; // rax
	_DWORD* v8; // [rsp+20h] [rbp-28h]
	int v9; // [rsp+34h] [rbp-14h]
	int v10; // [rsp+50h] [rbp+8h] BYREF
	int v11; // [rsp+54h] [rbp+Ch]
	__int64 v12; // [rsp+58h] [rbp+10h] BYREF

	v12 = 0i64;
	if (*(_QWORD*)(a1 + 32) == a2)
		return 0i64;
	if (!a2
		|| (v4 = *(_QWORD*)(a2 + 24),
			v8 = (_DWORD*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 24) + 40i64))(*(_QWORD*)(a1 + 24)),
			v9 = v8[1] - *(_DWORD*)(a2 + 40),
			v10 = *(_DWORD*)(v4 + 24) + *v8 - *(_DWORD*)(a2 + 36),
			v11 = v9 + *(_DWORD*)(v4 + 28),
			result = (*(__int64(__fastcall**)(_QWORD, int*, __int64*))(**(_QWORD**)(v4 + 8) + 144i64))(
				*(_QWORD*)(v4 + 8),
				&v10,
				&v12),
			(int)result >= 0))
	{
		v6 = *(_QWORD*)(a1 + 40);
		if (v6)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
			*(_QWORD*)(a1 + 40) = 0i64;
		}
		v7 = v12;
		*(_QWORD*)(a1 + 32) = a2;
		*(_QWORD*)(a1 + 48) = 0i64;
		*(_QWORD*)(a1 + 40) = v7;
		return 0i64;
	}
	return result;
}

