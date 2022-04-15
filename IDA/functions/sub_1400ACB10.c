//----- (00000001400ACB10) ----------------------------------------------------
__int64 __fastcall sub_1400ACB10(unsigned int* a1, _QWORD* a2, _QWORD* a3)
{
	__int64 result; // rax
	__int64 v4; // rbx

	*a2 += 32i64;
	result = *a1;
	v4 = 0i64;
	*a3 += 96 * result;
	if (*a1)
	{
		do
		{
			result = sub_1400ABC90(*((_QWORD*)a1 + 1) + 96 * v4, a2, a3);
			++* a2;
			v4 = (unsigned int)(v4 + 1);
		} while ((unsigned int)v4 < *a1);
	}
	return result;
}

