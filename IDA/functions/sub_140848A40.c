//----- (0000000140848A40) ----------------------------------------------------
__int64 __fastcall sub_140848A40(__int64 a1, int a2)
{
	__int64* v3; // rcx
	void(__fastcall * **v4)(_QWORD, _QWORD); // rdi
	int v5; // esi
	__int64 result; // rax

	v3 = *(__int64**)(a1 + 16);
	if (v3)
	{
		sub_1408614B0(v3, a2);
		v4 = *(void(__fastcall****)(_QWORD, _QWORD))(a1 + 16);
		v5 = dword_140C10F28;
		if (v4)
		{
			(**v4)(v4, 0i64);
			sub_140881720(v5, (__int64)v4);
		}
		*(_QWORD*)(a1 + 16) = 0i64;
	}
	sub_1408473E0(a1 + 480);
	result = sub_140872290(a1 + 976);
	*(_BYTE*)(a1 + 88) = 1;
	return result;
}
// 140C10F28: using guessed type int dword_140C10F28;

