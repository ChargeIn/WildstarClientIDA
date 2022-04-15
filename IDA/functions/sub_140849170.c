//----- (0000000140849170) ----------------------------------------------------
void __fastcall sub_140849170(_QWORD* a1, __int64 a2)
{
	__int64 v3; // rcx
	__int64* v4; // rcx
	void(__fastcall * **v5)(_QWORD, _QWORD); // rdi
	int v6; // esi

	v3 = a1[2];
	if (v3 && a2 == *(_QWORD*)(v3 + 24))
	{
		if ((*(_BYTE*)(v3 + 32) & 1) == 0 || (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v3 + 96i64))(v3) != 1)
			(*(void(__fastcall**)(_QWORD*))(*a1 + 16i64))(a1);
	}
	else
	{
		v4 = (__int64*)a1[3];
		if (v4 && a2 == v4[3])
		{
			sub_1408614B0(v4, 0);
			v5 = (void(__fastcall***)(_QWORD, _QWORD))a1[3];
			v6 = dword_140C10F28;
			if (v5)
			{
				(**v5)(v5, 0i64);
				sub_140881720(v6, (__int64)v5);
			}
			a1[3] = 0i64;
		}
	}
}
// 140C10F28: using guessed type int dword_140C10F28;

