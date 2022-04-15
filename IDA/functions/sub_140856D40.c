//----- (0000000140856D40) ----------------------------------------------------
__int64 __fastcall sub_140856D40(__int16 a1, int a2, __int64* a3)
{
	__int64 result; // rax
	__int64 v7; // rbx

	result = sub_1408819F0(dword_140C10F20, 256i64);
	if (result)
	{
		result = sub_1408569B0(result, a1, a2, a3);
		v7 = result;
		if (result)
		{
			sub_140855760(result);
			return v7;
		}
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

