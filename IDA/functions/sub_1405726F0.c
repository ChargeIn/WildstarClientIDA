//----- (00000001405726F0) ----------------------------------------------------
__int64 __fastcall sub_1405726F0(__int64 a1)
{
	unsigned int v1; // edi
	__int64 v3; // rsi
	int* v4; // rbx
	__int16* v5; // rax

	v1 = 0;
	if (!a1)
		return 0i64;
	v3 = 8i64;
	v4 = (int*)(a1 + 16);
	do
	{
		if (*v4)
		{
			v5 = sub_14034BDD0(a1, *v4);
			if (v5)
			{
				if (*v5)
					++v1;
			}
		}
		++v4;
		--v3;
	} while (v3);
	return v1;
}
// 14057271E: variable 'a1' is possibly undefined

