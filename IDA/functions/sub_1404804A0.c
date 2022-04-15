//----- (00000001404804A0) ----------------------------------------------------
__int64 __fastcall sub_1404804A0(__int64 a1, unsigned int a2, int a3)
{
	_QWORD* v3; // rdi
	int v6; // eax
	_QWORD* v7; // rbx
	int v8; // esi
	__int64 v9; // rcx
	__int64 result; // rax
	__int64 v11; // rax
	_QWORD* i; // rax
	__int64 j; // rax

	v3 = *(_QWORD**)(a1 + 64);
	v6 = sub_140491EF0(a3);
	v7 = (_QWORD*)v3[2];
	v8 = v6;
	if (v7 == v3)
		return 0i64;
	while (1)
	{
		v9 = v7[5];
		if (*(_DWORD*)(**(_QWORD**)(v9 + 72) + 20i64) == v8)
		{
			result = sub_140572E80(v9, a2, a3);
			if (result)
				break;
		}
		v11 = v7[3];
		if (v11)
		{
			v7 = (_QWORD*)v7[3];
			for (i = *(_QWORD**)(v11 + 16); i; i = (_QWORD*)i[2])
				v7 = i;
		}
		else
		{
			for (j = v7[1]; v7 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
				v7 = (_QWORD*)j;
			if (v7[3] != j)
				v7 = (_QWORD*)j;
		}
		if (v7 == v3)
			return 0i64;
	}
	return result;
}

