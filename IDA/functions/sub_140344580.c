//----- (0000000140344580) ----------------------------------------------------
__int64 __fastcall sub_140344580(__int64 a1)
{
	__int64 v1; // rbx
	int v2; // r9d
	_QWORD* v3; // rcx
	_QWORD* v4; // rdx
	__int64 v5; // r8

	v1 = a1 - 8;
	v2 = *(_DWORD*)(a1 - 8) - 1;
	if (v2 >= 0)
	{
		v3 = (_QWORD*)(32i64 * *(int*)(a1 - 8) + 16 + a1);
		do
		{
			v4 = (_QWORD*)*(v3 - 4);
			v3 -= 4;
			if (v4)
				*v4 = v3[1];
			v5 = v3[1];
			if (v5)
				*(_QWORD*)(v5 + 16) = *v3;
			--v2;
			*v3 = 0i64;
			v3[1] = 0i64;
		} while (v2 >= 0);
	}
	sub_14018B900(v1, 0);
	return v1;
}

