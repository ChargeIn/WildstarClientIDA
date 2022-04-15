//----- (00000001404F9970) ----------------------------------------------------
__int64 __fastcall sub_1404F9970(_QWORD* a1)
{
	__int64 v2; // r13
	_DWORD* v3; // rdx
	__int64 v5; // rdi
	_DWORD* v6; // rax
	__int64 v7; // rbx
	_DWORD* v8; // rax
	int v9; // edx
	__int64 v10; // rax
	__int64 v11; // rbx
	__int64 v12; // rax
	__int64 i; // rax
	__int64 j; // rax
	__int64 v15; // rcx
	__int64 v16; // r15
	__int64 v17; // rcx
	int* v18; // rsi
	_QWORD* v19; // rdx
	_QWORD* v20; // rcx
	int* k; // rbx
	int* m; // rdi
	__int64 v23; // rbx
	_DWORD* v24; // rax

	v2 = sub_1404F87C0(a1, 1u);
	if (v2)
	{
		v5 = sub_1404F87C0(a1, 2u);
		if (v5)
		{
			v7 = *(_QWORD*)(qword_140C65898 + 120);
			if ((int)sub_1404F69B0(v2, v7, 1) >= 0)
			{
				v9 = *(_DWORD*)(v5 + 7188);
				if ((*(_DWORD*)(v7 + 216) != v9 || *(_DWORD*)(v7 + 52) != *(_DWORD*)(v5 + 7192))
					&& (unsigned int)sub_14002EAF0((_DWORD*)(v2 + 2336), v9)
					&& (unsigned int)sub_14002EBD0(v2 + 2336, *(_DWORD*)(v5 + 7192)))
				{
					sub_14002F5D0(v2 + 2336, *(__int64**)(v2 + 2168), *(_QWORD*)(v2 + 2160));
					sub_14002FE90(v2 + 2336, *(_QWORD*)(v2 + 2168));
					sub_140030080(v2 + 2336, *(_QWORD*)(v2 + 2168));
				}
				v10 = *(_QWORD*)(v5 + 7064);
				v11 = *(_QWORD*)(v10 + 16);
				if (v11 != v10)
				{
					do
					{
						sub_14002EC40(v2 + 2336, *(_DWORD*)(v11 + 32), *(_DWORD*)(v11 + 36));
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
					} while (v11 != *(_QWORD*)(v5 + 7064));
				}
				sub_14002F5D0(v2 + 2336, *(__int64**)(v2 + 2168), *(_QWORD*)(v2 + 2160));
				v15 = *(_QWORD*)(v2 + 2328);
				if (v15 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v15 + 24i64))(v15) > 0)
					(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v2 + 2328) + 112i64))(*(_QWORD*)(v2 + 2328));
				v16 = *(_QWORD*)(v2 + 2168);
				v17 = (__int64)(*(_QWORD*)(v5 + 7168) - *(_QWORD*)(v5 + 7160)) >> 3;
				if (v17)
					v18 = sub_14018B280(8 * v17, 0);
				else
					v18 = 0i64;
				v19 = *(_QWORD**)(v5 + 7168);
				v20 = *(_QWORD**)(v5 + 7160);
				for (k = v18; v20 != v19; k += 2)
				{
					if (k)
						*(_QWORD*)k = *v20;
					++v20;
				}
				for (m = v18; m != k; m += 2)
					sub_14002FA90(v2 + 2336, v16, *m, *((float*)m + 1));
				sub_14002FE90(v2 + 2336, *(_QWORD*)(v2 + 2168));
				v23 = *(_QWORD*)(v2 + 2168);
				if (v23
					&& *(_DWORD*)((*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)v23 + 16i64))(*(_QWORD*)(v2 + 2168)) + 12) == *(_DWORD*)(v2 + 7188)
					&& *(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v23 + 16i64))(v23) + 16) == *(_DWORD*)(v2 + 7192))
				{
					(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v23 + 304i64))(v23, v2 + 7120);
				}
				v24 = (_DWORD*)a1[2];
				*v24 = 1;
				v24[2] = 1;
				a1[2] += 16i64;
				if (v18)
					sub_14018B900((__int64)v18, 0);
			}
			else
			{
				v8 = (_DWORD*)a1[2];
				*v8 = 0;
				v8[2] = 1;
				a1[2] += 16i64;
			}
		}
		else
		{
			v6 = (_DWORD*)a1[2];
			*v6 = 0;
			v6[2] = 1;
			a1[2] += 16i64;
		}
		return 1i64;
	}
	else
	{
		v3 = (_DWORD*)a1[2];
		*v3 = 0;
		v3[2] = 1;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

