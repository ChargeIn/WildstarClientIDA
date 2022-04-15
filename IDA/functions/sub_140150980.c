//----- (0000000140150980) ----------------------------------------------------
__int64 __fastcall sub_140150980(__int64 a1, __int64 a2)
{
	_QWORD* v2; // rbx
	int v3; // edi
	_QWORD* v5; // rax
	int v7; // r8d
	int* v8; // rax
	_QWORD** v9; // rcx
	_QWORD* i; // rax

	v2 = *(_QWORD**)(a1 + 8);
	v3 = 0;
	v5 = (_QWORD*)*v2;
	v7 = 0;
	if ((_QWORD*)*v2 != v2)
	{
		while (v5[2] != a2)
		{
			v5 = (_QWORD*)*v5;
			++v7;
			if (v5 == v2)
				goto LABEL_4;
		}
		if (v7 >= 0)
			return 0xFFFFFFFFi64;
	}
LABEL_4:
	v8 = sub_14018B280(24i64, 0);
	if (v8 != (int*)-16i64)
		*((_QWORD*)v8 + 2) = a2;
	*(_QWORD*)v8 = v2;
	*((_QWORD*)v8 + 1) = v2[1];
	*(_QWORD*)v2[1] = v8;
	v2[1] = v8;
	*(_QWORD*)(a2 + 1448) = a1;
	v9 = *(_QWORD***)(a1 + 8);
	for (i = *v9; i != v9; ++v3)
		i = (_QWORD*)*i;
	return (unsigned int)(v3 - 1);
}

