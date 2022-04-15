//----- (00000001405F4DF0) ----------------------------------------------------
__int64 sub_1405F4DF0()
{
	_QWORD* v0; // rbp
	_QWORD* v1; // rax
	_QWORD* v2; // rbx
	__int64 v3; // rsi
	_QWORD** v4; // rax
	_QWORD* v5; // rbx
	__int64 v6; // rcx
	_QWORD* v7; // rax
	_QWORD* v8; // rdi
	__int64 v9; // rsi
	__int64 v10; // rax
	__int64 v11; // rbx
	__int64 v12; // rax
	__int64 i; // rax
	__int64 j; // rax
	__int64 v15; // rax
	_QWORD* k; // rax
	__int64 m; // rax
	__int64 result; // rax

	v0 = (_QWORD*)qword_140C65980;
	v1 = *(_QWORD**)(qword_140C65980 + 48);
	v2 = (_QWORD*)*v1;
	if ((_QWORD*)*v1 != v1)
	{
		do
		{
			v3 = v2[2];
			if (v3)
			{
				sub_140008410(v3 + 24);
				sub_14018B900(*(_QWORD*)(v3 + 32), 0);
				sub_14018B900(v3, 0);
			}
			v2 = (_QWORD*)*v2;
		} while (v2 != (_QWORD*)v0[6]);
	}
	v4 = (_QWORD**)v0[6];
	v5 = *v4;
	if (*v4 != v4)
	{
		do
		{
			v6 = (__int64)v5;
			v5 = (_QWORD*)*v5;
			sub_14018B900(v6, 0);
		} while (v5 != (_QWORD*)v0[6]);
	}
	*(_QWORD*)v0[6] = v0[6];
	*(_QWORD*)(v0[6] + 8i64) = v0[6];
	v7 = (_QWORD*)v0[2];
	v8 = (_QWORD*)v7[2];
	if (v8 != v7)
	{
		do
		{
			v9 = v8[5];
			v10 = *(_QWORD*)(v9 + 8);
			v11 = *(_QWORD*)(v10 + 16);
			if (v11 != v10)
			{
				do
				{
					(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v11 + 40) + 184i64))(*(_QWORD*)(v11 + 40));
					v12 = *(_QWORD*)(v11 + 24);
					if (v12)
					{
						v11 = *(_QWORD*)(v11 + 24);
						for (i = *(_QWORD*)(v12 + 16); i; i = *(_QWORD*)(i + 16))
							v11 = i;
					}
					else
					{
						for (j = *(_QWORD*)(v11 + 8); v11 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
							v11 = j;
						if (*(_QWORD*)(v11 + 24) != j)
							v11 = j;
					}
				} while (v11 != *(_QWORD*)(v9 + 8));
			}
			v15 = v8[3];
			if (v15)
			{
				v8 = (_QWORD*)v8[3];
				for (k = *(_QWORD**)(v15 + 16); k; k = (_QWORD*)k[2])
					v8 = k;
			}
			else
			{
				for (m = v8[1]; v8 == *(_QWORD**)(m + 24); m = *(_QWORD*)(m + 8))
					v8 = (_QWORD*)m;
				if (v8[3] != m)
					v8 = (_QWORD*)m;
			}
		} while (v8 != (_QWORD*)v0[2]);
	}
	result = 0i64;
	v0[7] = 0i64;
	v0[8] = 0i64;
	return result;
}
// 140C65980: using guessed type __int64 qword_140C65980;

