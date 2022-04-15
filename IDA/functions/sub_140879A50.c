//----- (0000000140879A50) ----------------------------------------------------
__int64 __fastcall sub_140879A50(_QWORD* a1)
{
	__int64 result; // rax
	__int64 v3; // rcx
	void(__fastcall * **v4)(_QWORD, _QWORD); // rsi
	int v5; // ebx
	__int64 v6; // rdx

	result = (*(__int64 (**)(void))(*a1 + 16i64))();
	v3 = a1[7];
	if (v3)
	{
		result = (*(__int64(__fastcall**)(__int64, __int64(__fastcall***)()))(*(_QWORD*)v3 + 8i64))(v3, &off_140C10F70);
		a1[7] = 0i64;
	}
	v4 = (void(__fastcall***)(_QWORD, _QWORD))a1[15];
	if (v4)
	{
		v5 = dword_140C10F28;
		(**v4)(a1[15], 0i64);
		result = sub_140881720(v5, (__int64)v4);
		a1[15] = 0i64;
	}
	v6 = a1[6];
	if (v6)
	{
		sub_140838CC0((_QWORD*)qword_140C61BB0, v6);
		result = (*(__int64(__fastcall**)(_QWORD, __int64(__fastcall***)()))(*(_QWORD*)a1[6] + 32i64))(
			a1[6],
			&off_140C10F70);
		a1[6] = 0i64;
	}
	return result;
}
// 140C10F28: using guessed type int dword_140C10F28;
// 140C10F70: using guessed type __int64 (__fastcall **off_140C10F70)();
// 140C61BB0: using guessed type __int64 qword_140C61BB0;

