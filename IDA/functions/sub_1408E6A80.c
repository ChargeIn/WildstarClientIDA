//----- (00000001408E6A80) ----------------------------------------------------
__int64 __fastcall sub_1408E6A80(__int64 a1)
{
	int v1; // edx
	unsigned int i; // r8d
	__int64 result; // rax
	__int64 v5; // rdi
	__int64 v6; // rbx

	v1 = *(_DWORD*)(a1 + 464);
	for (i = 0; v1; v1 &= result)
	{
		result = (unsigned int)(v1 - 1);
		++i;
	}
	if (i)
	{
		v5 = i;
		v6 = a1 + 256;
		do
		{
			result = sub_1408ADC30(v6, *(_QWORD*)(a1 + 488));
			v6 += 24i64;
			--v5;
		} while (v5);
	}
	return result;
}

