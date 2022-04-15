//----- (00000001400FE1F0) ----------------------------------------------------
char __fastcall sub_1400FE1F0(__int64 a1, __int64 a2)
{
	_QWORD* v2; // rsi
	BOOL v5; // ebx
	__int64 v6; // rbx
	int v7; // eax
	BOOL v9; // [rsp+20h] [rbp-58h]
	__int64 v10; // [rsp+50h] [rbp-28h] BYREF
	__int64 v11; // [rsp+58h] [rbp-20h]

	v2 = (_QWORD*)(a1 + 16);
	if (!*(_QWORD*)(a1 + 16))
	{
		v5 = *(_BYTE*)(a1 + 66) != 0;
		sub_1400FE2E0(&v10, *(int**)(a1 + 40));
		v9 = v5;
		v6 = v11;
		if ((*(int(__fastcall**)(__int64, __int64, _QWORD, __int64, BOOL, int, _DWORD, _DWORD, _QWORD*))(*(_QWORD*)qword_140C65670 + 80i64))(
			qword_140C65670,
			v11,
			0i64,
			1i64,
			v9,
			256,
			0,
			0,
			v2) < 0)
		{
			*(_BYTE*)(a1 + 64) = 1;
			*v2 = 0i64;
		}
		if (v6)
			sub_14018B900(v6, 0);
	}
	if (!*v2 || (v7 = (*(__int64(__fastcall**)(_QWORD, __int64))(*(_QWORD*)*v2 + 32i64))(*v2, a2)) != 0)
	{
		*(_BYTE*)(a1 + 64) = 1;
		LOBYTE(v7) = 1;
	}
	return v7;
}
// 140C65670: using guessed type __int64 qword_140C65670;

