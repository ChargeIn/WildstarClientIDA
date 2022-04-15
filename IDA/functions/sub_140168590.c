//----- (0000000140168590) ----------------------------------------------------
__int64 __fastcall sub_140168590(__int64 a1, unsigned int* a2)
{
	unsigned int* v2; // rbx
	unsigned int v4; // eax
	unsigned __int64 v5; // rcx
	__int64 result; // rax
	__int64 v7; // rdx
	int v8; // ecx

	v2 = (unsigned int*)(a1 + 1444);
	if ((unsigned int*)(a1 + 1444) != a2)
	{
		sub_1401429A0(qword_140C63678, *v2);
		v4 = *a2;
		*v2 = *a2;
		v5 = v4;
		result = qword_140C63678;
		if (v5 < *(_QWORD*)(qword_140C63678 + 48))
		{
			v7 = 32 * v5 + *(_QWORD*)(qword_140C63678 + 40);
			v8 = *(_DWORD*)(v7 + 16);
			result = (unsigned int)(v8 - 1);
			if ((unsigned int)result <= 0xFFFFFFFD)
			{
				result = (unsigned int)(v8 + 1);
				*(_DWORD*)(v7 + 16) = result;
			}
		}
	}
	return result;
}
// 140C63678: using guessed type __int64 qword_140C63678;

