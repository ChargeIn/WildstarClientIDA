//----- (0000000140003810) ----------------------------------------------------
__int64 __fastcall sub_140003810(__int64 a1, __int64 a2, int a3, __int64(__fastcall* a4)(__int64))
{
	__int64 v6; // rbx
	int i; // edi
	__int64 result; // rax

	v6 = a1 + a2 * a3;
	for (i = a3 - 1; i >= 0; --i)
	{
		v6 -= a2;
		result = a4(v6);
	}
	return result;
}

