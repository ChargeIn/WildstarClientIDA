//----- (00000001400FE680) ----------------------------------------------------
__int64 __fastcall sub_1400FE680(__int64 a1)
{
	__int64 result; // rax
	__int64* v3; // rsi
	BOOL v4; // ebx
	__int64 v5; // rbx
	__int64 v6; // rcx
	BOOL v7; // [rsp+20h] [rbp-58h]
	__int64 v8; // [rsp+50h] [rbp-28h] BYREF
	__int64 v9; // [rsp+58h] [rbp-20h]

	if (*(_BYTE*)(a1 + 64))
		return *(_QWORD*)(a1 + 16);
	v3 = (__int64*)(a1 + 16);
	if (!*(_QWORD*)(a1 + 16))
	{
		v4 = *(_BYTE*)(a1 + 66) != 0;
		sub_1400FE2E0(&v8, *(int**)(a1 + 40));
		v7 = v4;
		v5 = v9;
		if ((*(int(__fastcall**)(__int64, __int64, _QWORD, __int64, BOOL, int, _DWORD, _DWORD, __int64*))(*(_QWORD*)qword_140C65670 + 80i64))(
			qword_140C65670,
			v9,
			0i64,
			1i64,
			v7,
			256,
			0,
			0,
			v3) < 0)
		{
			*(_BYTE*)(a1 + 64) = 1;
			*v3 = 0i64;
		}
		if (v5)
			sub_14018B900(v5, 0);
	}
	v6 = *v3;
	if (*v3)
	{
		LODWORD(v8) = 0;
		if (!(*(unsigned int(__fastcall**)(__int64, __int64*))(*(_QWORD*)v6 + 32i64))(v6, &v8))
			return 0i64;
	}
	result = *v3;
	*(_BYTE*)(a1 + 64) = 1;
	return result;
}
// 140C65670: using guessed type __int64 qword_140C65670;

