//----- (0000000140498700) ----------------------------------------------------
__int64 __fastcall sub_140498700(__int64 a1, unsigned int a2)
{
	__int64 v2; // r9
	__int64 v3; // r13
	__int64 v4; // rax
	__int64 v5; // r8
	__int64 v6; // rdi
	__int64 v8; // r14
	_QWORD* v9; // rax
	_QWORD* v10; // rbx
	void(__fastcall * **v11)(_QWORD, __int64); // rcx
	__int64 v12; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	__int64 v15; // rax
	__int64 v16; // rbx
	void(__fastcall * **v17)(_QWORD, __int64); // rcx
	__int64 v18; // rax
	__int64 k; // rax
	__int64 m; // rax
	__int64 v21; // rsi
	__int64 v22; // rbx
	__int64 v23; // [rsp+50h] [rbp+8h] BYREF

	v2 = *(_QWORD*)(a1 + 16);
	v3 = a1 + 8;
	v4 = *(_QWORD*)(v2 + 8);
	v5 = v2;
	while (v4)
	{
		if (*(_DWORD*)(v4 + 32) < a2)
		{
			v4 = *(_QWORD*)(v4 + 24);
		}
		else
		{
			v5 = v4;
			v4 = *(_QWORD*)(v4 + 16);
		}
	}
	if (v5 == v2 || (v23 = v5, a2 < *(_DWORD*)(v5 + 32)))
		v23 = v2;
	v6 = v23;
	if (v23 == *(_QWORD*)(a1 + 16))
		return 2147500037i64;
	v8 = *(_QWORD*)(v23 + 40);
	v9 = *(_QWORD**)(v8 + 8);
	v10 = (_QWORD*)v9[2];
	if (v10 != v9)
	{
		do
		{
			v11 = (void(__fastcall***)(_QWORD, __int64))v10[5];
			if (v11)
				(**v11)(v11, 1i64);
			v12 = v10[3];
			if (v12)
			{
				v10 = (_QWORD*)v10[3];
				for (i = *(_QWORD**)(v12 + 16); i; i = (_QWORD*)i[2])
					v10 = i;
			}
			else
			{
				for (j = v10[1]; v10 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v10 = (_QWORD*)j;
				if (v10[3] != j)
					v10 = (_QWORD*)j;
			}
		} while (v10 != *(_QWORD**)(v8 + 8));
	}
	sub_140008410(v8);
	sub_140008410(v8 + 40);
	v15 = *(_QWORD*)(v8 + 112);
	v16 = *(_QWORD*)(v15 + 16);
	if (v16 != v15)
	{
		do
		{
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v16 + 40) + 16i64))(*(_QWORD*)(v16 + 40));
			v17 = *(void(__fastcall****)(_QWORD, __int64))(v16 + 40);
			if (v17)
				(**v17)(v17, 1i64);
			v18 = *(_QWORD*)(v16 + 24);
			if (v18)
			{
				v16 = *(_QWORD*)(v16 + 24);
				for (k = *(_QWORD*)(v18 + 16); k; k = *(_QWORD*)(k + 16))
					v16 = k;
			}
			else
			{
				for (m = *(_QWORD*)(v16 + 8); v16 == *(_QWORD*)(m + 24); m = *(_QWORD*)(m + 8))
					v16 = m;
				if (*(_QWORD*)(v16 + 24) != m)
					v16 = m;
			}
		} while (v16 != *(_QWORD*)(v8 + 112));
	}
	if (*(_QWORD*)(v8 + 120))
	{
		v21 = *(_QWORD*)(*(_QWORD*)(v8 + 112) + 8i64);
		if (v21)
		{
			do
			{
				sub_1400083B0(v8 + 104, *(_QWORD*)(v21 + 24));
				v22 = *(_QWORD*)(v21 + 16);
				sub_14018B900(v21, 0);
				v21 = v22;
			} while (v22);
		}
		*(_QWORD*)(*(_QWORD*)(v8 + 112) + 16i64) = *(_QWORD*)(v8 + 112);
		*(_QWORD*)(*(_QWORD*)(v8 + 112) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(v8 + 112) + 24i64) = *(_QWORD*)(v8 + 112);
		*(_QWORD*)(v8 + 120) = 0i64;
	}
	sub_140008410(v8 + 104);
	sub_14018B900(*(_QWORD*)(v8 + 112), 0);
	sub_140008410(v8 + 72);
	sub_14018B900(*(_QWORD*)(v8 + 80), 0);
	sub_140008410(v8 + 40);
	sub_14018B900(*(_QWORD*)(v8 + 48), 0);
	if (*(_QWORD*)(v8 + 32))
		sub_1401A4A00((const void***)(v8 + 32));
	sub_140008410(v8);
	sub_14018B900(*(_QWORD*)(v8 + 8), 0);
	sub_14018B900(v8, 0);
	v23 = v6;
	sub_140498FF0(v3, &v23);
	return 0i64;
}

