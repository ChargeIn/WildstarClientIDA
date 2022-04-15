//----- (00000001408EB690) ----------------------------------------------------
__int64 __fastcall sub_1408EB690(__int64 a1, unsigned int a2)
{
	__int64 result; // rax
	__int64 v5; // rdx

	result = sub_1408810F0(a1, a2);
	if (a2 <= 1)
	{
		v5 = *(_QWORD*)(a1 + 392);
		if (v5)
		{
			sub_140881720(dword_140C10F28, v5);
			result = 0i64;
			*(_QWORD*)(a1 + 392) = 0i64;
			*(_DWORD*)(a1 + 400) = 0;
			*(_WORD*)(a1 + 404) = 0;
		}
	}
	return result;
}
// 140C10F28: using guessed type int dword_140C10F28;

