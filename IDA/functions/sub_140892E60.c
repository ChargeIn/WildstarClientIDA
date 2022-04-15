//----- (0000000140892E60) ----------------------------------------------------
__int64 __fastcall sub_140892E60(__int64 a1)
{
	_QWORD* i; // rbx
	void(__fastcall * **v3)(_QWORD, _QWORD); // rdi
	int v4; // esi

	for (i = *(_QWORD**)(a1 + 280); i != *(_QWORD**)(a1 + 288); ++i)
	{
		v3 = (void(__fastcall***)(_QWORD, _QWORD)) * i;
		if (*i)
		{
			v4 = dword_140C10F20;
			(**v3)(*i, 0i64);
			sub_140881720(v4, (__int64)v3);
		}
	}
	*(_QWORD*)(a1 + 288) = *(_QWORD*)(a1 + 280);
	return sub_1408968E0(a1 + 248);
}
// 140C10F20: using guessed type int dword_140C10F20;

