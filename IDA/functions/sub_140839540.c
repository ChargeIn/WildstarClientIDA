//----- (0000000140839540) ----------------------------------------------------
__int64 __fastcall sub_140839540(__int64 a1, __int64 a2)
{
	_QWORD* v2; // rdi
	__int64 v3; // rbx

	v2 = *(_QWORD**)(a1 + 3112);
	LODWORD(v3) = 0;
	if (v2)
	{
		do
		{
		LABEL_4:
			if (*v2 == a2)
				sub_1408395E0(a1, v2);
			v2 = (_QWORD*)v2[2];
		} while (v2);
		while (1)
		{
			v3 = (unsigned int)(v3 + 1);
			if ((unsigned int)v3 >= 0xC1)
				break;
			v2 = *(_QWORD**)(a1 + 8 * v3 + 3112);
			if (v2)
				goto LABEL_4;
		}
	}
	else
	{
		while (1)
		{
			v3 = (unsigned int)(v3 + 1);
			if ((unsigned int)v3 >= 0xC1)
				break;
			v2 = *(_QWORD**)(a1 + 8 * v3 + 3112);
			if (v2)
				goto LABEL_4;
		}
	}
	return 1i64;
}
// 1408395BC: conditional instruction was optimized away because rdi.8==0

