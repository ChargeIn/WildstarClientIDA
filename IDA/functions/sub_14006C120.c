//----- (000000014006C120) ----------------------------------------------------
__int64 __fastcall sub_14006C120(__int64 a1, __int64* a2, __int64 a3)
{
	__int64 v3; // r8
	__int64 v6; // rbp
	__int64 v7; // rax
	__int64 result; // rax
	__int64 v9; // [rsp+40h] [rbp+18h] BYREF

	v9 = a3;
	v3 = *(_QWORD*)(a1 + 16);
	if (v3
		&& (v6 = *(_QWORD*)(a1 + 24),
			(unsigned __int64)(8i64 * *(_QWORD*)(v3 + 32) - 8 * v6 - *(_QWORD*)(a1 + 32)) >= 0x40))
	{
		v7 = sub_1400A71C0((_QWORD*)(a1 + 24), (__int64*)(a1 + 32), 0x40ui64);
		*(_DWORD*)(a1 + 8) += *(_DWORD*)(a1 + 24) - v6;
		*a2 = v7;
		return 0i64;
	}
	else
	{
		result = sub_140336D60(a1, &v9, 0x40ui64);
		*a2 = v9;
	}
	return result;
}

