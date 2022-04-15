//----- (000000014087C0E0) ----------------------------------------------------
__int64 __fastcall sub_14087C0E0(void(__fastcall*** a1)(_QWORD, _QWORD))
{
	int v1; // edi
	__int64 result; // rax

	if (a1)
	{
		v1 = dword_140C10F20;
		(**a1)(a1, 0i64);
		return sub_140881720(v1, (__int64)a1);
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

