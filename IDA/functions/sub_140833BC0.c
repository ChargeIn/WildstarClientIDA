//----- (0000000140833BC0) ----------------------------------------------------
void __fastcall sub_140833BC0(__int64 a1)
{
	_QWORD* v1; // rbx
	int i; // ebp
	__int64 v4; // r14
	unsigned int v5; // esi
	__int64* v6; // rdi
	__int64* j; // rbx

	v1 = (_QWORD*)qword_140C61CC8;
	for (i = 0; v1 != (_QWORD*)qword_140C61CD0; ++v1)
	{
		v4 = *v1;
		v5 = 0;
		v6 = (__int64*)(*v1 + 944i64);
		while (!*v6 || !sub_1408628E0(*v6, a1, *(v6 - 1)))
		{
			++v5;
			v6 += 5;
			if (v5 >= 4)
				goto LABEL_8;
		}
		sub_140862E30(v4 + 32);
	LABEL_8:
		;
	}
	if (qword_140C61CC0)
	{
		for (j = (__int64*)(qword_140C61CC0 + 912); !*j || !sub_1408628E0(*j, a1, *(j - 1)); j += 5)
		{
			if ((unsigned int)++i >= 4)
				return;
		}
		sub_140862E30(qword_140C61CC0);
		*(_DWORD*)(qword_140C61CC0 + 1056) = 2;
	}
}
// 140C61CC0: using guessed type __int64 qword_140C61CC0;
// 140C61CC8: using guessed type __int64 qword_140C61CC8;
// 140C61CD0: using guessed type __int64 qword_140C61CD0;

