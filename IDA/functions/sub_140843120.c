//----- (0000000140843120) ----------------------------------------------------
void __fastcall sub_140843120(__int64 a1)
{
	void(__fastcall * v1)(_QWORD, __int64, _QWORD, _QWORD, __int64); // rdx

	v1 = *(void(__fastcall**)(_QWORD, __int64, _QWORD, _QWORD, __int64))(a1 + 72);
	if (v1)
	{
		sub_14083CE60(
			qword_140C61B58 + 2304,
			v1,
			*(_DWORD*)(a1 + 24),
			*(_QWORD*)(a1 + 8),
			1u,
			*(_DWORD*)(a1 + 44),
			*(_QWORD*)(a1 + 80));
		*(_QWORD*)(a1 + 72) = 0i64;
	}
}
// 140C61B58: using guessed type __int64 qword_140C61B58;

