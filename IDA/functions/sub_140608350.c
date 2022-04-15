//----- (0000000140608350) ----------------------------------------------------
void __fastcall sub_140608350(__int64 a1)
{
	__int64 v1; // rdx
	_QWORD* v3; // rbx
	_QWORD* v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // r8
	_QWORD* v7; // rbx
	_QWORD* v8; // rcx
	__int64 v9; // rcx
	int v10; // [rsp+30h] [rbp+8h] BYREF

	v1 = *(_QWORD*)(a1 + 104);
	if (v1)
	{
		v3 = (_QWORD*)(a1 + 112);
		do
		{
			v4 = *(_QWORD**)(v1 + 432);
			if (v4)
				*v4 = *(_QWORD*)(v1 + 440);
			v5 = v1 + 440;
			v6 = *(_QWORD*)(v1 + 440);
			if (v6)
				*(_QWORD*)(v6 + 432) = *(_QWORD*)(v1 + 432);
			*(_QWORD*)v5 = 0i64;
			*(_QWORD*)(v1 + 432) = v3;
			*(_QWORD*)v5 = *v3;
			*v3 = v1;
			if (*(_QWORD*)v5)
				*(_QWORD*)(*(_QWORD*)v5 + 432i64) = v5;
			v10 = *(_DWORD*)(v1 + 232);
			sub_14060AB50(a1 + 120, &v10);
			v1 = *(_QWORD*)(a1 + 104);
		} while (v1);
	}
	while (*(_QWORD*)(a1 + 112))
	{
		v7 = *(_QWORD**)(a1 + 112);
		v8 = (_QWORD*)v7[54];
		if (v8)
			*v8 = v7[55];
		v9 = v7[55];
		if (v9)
			*(_QWORD*)(v9 + 432) = v7[54];
		v7[54] = 0i64;
		v7[55] = 0i64;
		if (v7)
		{
			sub_140608480(v7);
			sub_14018B900((__int64)v7, 0);
		}
	}
}

