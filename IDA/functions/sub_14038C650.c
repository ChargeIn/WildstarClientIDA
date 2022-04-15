//----- (000000014038C650) ----------------------------------------------------
__int64 __fastcall sub_14038C650(__m128* a1, __int64 a2)
{
	unsigned __int64 v3; // rcx
	__int64 result; // rax
	_QWORD* v5; // rcx
	unsigned __int64 v6; // rcx

	if (!a1[73].m128_u64[0])
		return 1i64;
	v3 = a1[2].m128_u64[0];
	if (!v3
		|| (result = (*(__int64(__fastcall**)(unsigned __int64, __int64, _QWORD))(*(_QWORD*)v3 + 16i64))(v3, a2, 0i64),
			(_DWORD)result))
	{
		sub_14038B4E0((__int64)a1);
		sub_14038B6D0(a1);
		sub_14038C1C0(a1);
		v5 = (_QWORD*)a1[73].m128_u64[0];
		if (v5)
			*v5 = a1[73].m128_u64[1];
		v6 = a1[73].m128_u64[1];
		if (v6)
			*(_QWORD*)(v6 + 1168) = a1[73].m128_u64[0];
		a1[73].m128_u64[0] = 0i64;
		a1[73].m128_u64[1] = 0i64;
		return 1i64;
	}
	return result;
}

