//----- (0000000140862E30) ----------------------------------------------------
__int64 __fastcall sub_140862E30(__int64 a1)
{
	_QWORD* v1; // rbx
	__int64 v2; // rbp
	__int64 result; // rax
	void(__fastcall * **v4)(_QWORD, _QWORD); // rsi
	int v5; // edi
	__int64 v6; // rdx

	v1 = (_QWORD*)(a1 + 904);
	v2 = 4i64;
	do
	{
		if (*v1)
		{
			result = (*(__int64(__fastcall**)(_QWORD, __int64(__fastcall***)()))(*(_QWORD*)*v1 + 8i64))(
				*v1,
				&off_140C10F70);
			*v1 = 0i64;
		}
		v4 = (void(__fastcall***)(_QWORD, _QWORD))v1[1];
		if (v4)
		{
			v5 = dword_140C10F28;
			(**v4)(v1[1], 0i64);
			result = sub_140881720(v5, (__int64)v4);
			v1[1] = 0i64;
		}
		v6 = *(v1 - 1);
		*((_DWORD*)v1 - 4) = -1;
		if (v6)
		{
			sub_140838CC0((_QWORD*)qword_140C61BB0, v6);
			result = (*(__int64(__fastcall**)(_QWORD, __int64(__fastcall***)()))(*(_QWORD*)*(v1 - 1) + 32i64))(
				*(v1 - 1),
				&off_140C10F70);
			*(v1 - 1) = 0i64;
		}
		v1 += 5;
		--v2;
	} while (v2);
	return result;
}
// 140C10F28: using guessed type int dword_140C10F28;
// 140C10F70: using guessed type __int64 (__fastcall **off_140C10F70)();
// 140C61BB0: using guessed type __int64 qword_140C61BB0;

