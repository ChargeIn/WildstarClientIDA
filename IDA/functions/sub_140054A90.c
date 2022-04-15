//----- (0000000140054A90) ----------------------------------------------------
__int64 __fastcall sub_140054A90(__int64 a1)
{
	__int64 result; // rax
	__int128 v3; // [rsp+50h] [rbp-28h] BYREF
	__int128 v4; // [rsp+60h] [rbp-18h]

	if (!*(_DWORD*)(a1 + 64))
	{
		*(_QWORD*)&v3 = 0i64;
		*(_QWORD*)&v4 = 0i64;
		*(_OWORD*)(a1 + 32) = v3;
		v3 = xmmword_140B7B240;
		*(_OWORD*)(a1 + 48) = v4;
		result = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, __int64, int, __int128*, int, _QWORD))(*(_QWORD*)qword_140C65680 + 280i64))(
			qword_140C65680,
			*(_QWORD*)(a1 + 24),
			0i64,
			-1i64,
			a1 + 32,
			1280,
			&v3,
			1,
			0i64);
		*(_DWORD*)(a1 + 64) = 1;
	}
	return result;
}
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C65680: using guessed type __int64 qword_140C65680;

