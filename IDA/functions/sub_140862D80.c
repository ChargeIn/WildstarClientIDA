//----- (0000000140862D80) ----------------------------------------------------
__int64 __fastcall sub_140862D80(__int64 a1, unsigned int a2)
{
	__int64 result; // rax
	__int64 v3; // rdi
	__int64 v4; // rcx
	void(__fastcall * **v5)(_QWORD, _QWORD); // rsi
	int v6; // ebx
	__int64 v7; // rdx

	result = a2;
	v3 = a1 + 8 * (a2 + 4i64 * a2 + 111);
	v4 = *(_QWORD*)(v3 + 16);
	if (v4)
	{
		result = (*(__int64(__fastcall**)(__int64, __int64(__fastcall***)()))(*(_QWORD*)v4 + 8i64))(v4, &off_140C10F70);
		*(_QWORD*)(v3 + 16) = 0i64;
	}
	v5 = *(void(__fastcall****)(_QWORD, _QWORD))(v3 + 24);
	if (v5)
	{
		v6 = dword_140C10F28;
		(**v5)(*(_QWORD*)(v3 + 24), 0i64);
		result = sub_140881720(v6, (__int64)v5);
		*(_QWORD*)(v3 + 24) = 0i64;
	}
	v7 = *(_QWORD*)(v3 + 8);
	*(_DWORD*)v3 = -1;
	if (v7)
	{
		sub_140838CC0((_QWORD*)qword_140C61BB0, v7);
		result = (*(__int64(__fastcall**)(_QWORD, __int64(__fastcall***)()))(**(_QWORD**)(v3 + 8) + 32i64))(
			*(_QWORD*)(v3 + 8),
			&off_140C10F70);
		*(_QWORD*)(v3 + 8) = 0i64;
	}
	return result;
}
// 140C10F28: using guessed type int dword_140C10F28;
// 140C10F70: using guessed type __int64 (__fastcall **off_140C10F70)();
// 140C61BB0: using guessed type __int64 qword_140C61BB0;

