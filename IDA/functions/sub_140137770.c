//----- (0000000140137770) ----------------------------------------------------
__int64 __fastcall sub_140137770(__int64 a1, __int64 a2, __int64 a3)
{
	_QWORD* v6; // rcx
	__int64 result; // rax
	_QWORD* v8; // rbx
	LARGE_INTEGER* v9; // rdx
	LONGLONG QuadPart; // rcx
	int LowPart; // r8d
	LARGE_INTEGER v12; // rdx
	__int64 v13; // [rsp+28h] [rbp-30h]
	int v14; // [rsp+60h] [rbp+8h] BYREF

	if (!*(_QWORD*)(a1 + 8) || ((*(_DWORD*)(a1 + 536) - 3) & 0xFFFFFFFD) == 0)
		return 0i64;
	v6 = *(_QWORD**)(a1 + 456);
	result = 1i64;
	v8 = (_QWORD*)*v6;
	if ((_QWORD*)*v6 != v6)
	{
		do
		{
			v9 = (LARGE_INTEGER*)v8[2];
			if (!(_DWORD)result
				|| (QuadPart = v9->QuadPart,
					LowPart = v9[7].LowPart,
					v12 = v9[1],
					v13 = *(_QWORD*)(a2 + 24),
					v14 = 0,
					sub_1400F3010(QuadPart + 384, v12, LowPart, (__int64)"OnDependencyError", "SS>b", v13, a3, &v14),
					result = 1i64,
					!v14))
			{
				result = 0i64;
			}
			v8 = (_QWORD*)*v8;
		} while (v8 != *(_QWORD**)(a1 + 456));
	}
	return result;
}

