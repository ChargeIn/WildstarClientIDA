//----- (0000000140353530) ----------------------------------------------------
__int64 __fastcall sub_140353530(__int64 a1)
{
	__int64 v1; // rbx
	int v2; // r9d
	_QWORD* v3; // rcx
	_QWORD* v4; // rdx
	__int64 v5; // rdx
	_QWORD* v6; // rdx

	v1 = a1 - 16;
	v2 = *(_DWORD*)(a1 - 16) - 1;
	if (v2 >= 0)
	{
		v3 = (_QWORD*)(304i64 * *(int*)(a1 - 16) + 272 + a1);
		do
		{
			v3 -= 38;
			v4 = (_QWORD*)v3[1];
			if (v4)
				*v4 = v3[2];
			v5 = v3[2];
			if (v5)
				*(_QWORD*)(v5 + 280) = v3[1];
			v3[1] = 0i64;
			v3[2] = 0i64;
			v6 = (_QWORD*)*(v3 - 1);
			if (v6)
				*v6 = *v3;
			if (*v3)
				*(_QWORD*)(*v3 + 264i64) = *(v3 - 1);
			--v2;
			*(v3 - 1) = 0i64;
			*v3 = 0i64;
		} while (v2 >= 0);
	}
	sub_14018B900(v1, 0);
	return v1;
}

