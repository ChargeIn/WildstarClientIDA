//----- (00000001408AAA10) ----------------------------------------------------
__int64 __fastcall sub_1408AAA10(_DWORD* a1, __int64 a2)
{
	int v4; // r8d
	__int64 v5; // rdi
	unsigned int i; // r9d
	unsigned int v7; // r14d
	__int64 v8; // rbp
	__int64 result; // rax

	if (a1[4])
	{
		v4 = *(_DWORD*)(a2 + 8);
		v5 = 0i64;
		for (i = 0; v4; v4 &= v4 - 1)
			++i;
		v7 = *(unsigned __int16*)(a2 + 18);
		if (i)
		{
			v8 = i;
			do
			{
				sub_1408AAAB0((__int64)a1, (float*)(*(_QWORD*)a2 + 4 * v5 * *(unsigned __int16*)(a2 + 16)), v7);
				++v5;
				--v8;
			} while (v8);
		}
	}
	a1[1] = *a1;
	result = (unsigned int)a1[2];
	a1[3] = result;
	return result;
}

