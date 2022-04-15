//----- (00000001406DA200) ----------------------------------------------------
void __fastcall sub_1406DA200(__int64 a1, unsigned int a2)
{
	__int64 v2; // rdi
	__int64 v4; // rsi
	__int64 v5; // r9
	unsigned int v6; // r14d
	__int64 v7; // rax
	__int64 v8; // rbp
	int v9; // edx
	unsigned __int64 v10; // rcx
	__int64* i; // rax
	__int64 v12; // rsi
	__int64 v13; // rdi
	__m128i* v14; // rax
	_QWORD* v15; // rax
	__int64 v16; // [rsp+30h] [rbp-28h] BYREF
	__int64 v17; // [rsp+38h] [rbp-20h]

	v2 = 0i64;
	*(_DWORD*)(a1 + 1036) = 0;
	if (a2)
	{
		v6 = sub_1403BAD30(qword_140C65898, a2, *(_BYTE*)(qword_140C65898 + 28140));
		v7 = sub_1403ACD90(qword_140C65B70, v6, *(_QWORD*)(v5 + 120));
		v8 = v7;
		if (v7)
		{
			v9 = *(_DWORD*)(*(_QWORD*)(v7 + 112) + 4i64);
			*(_DWORD*)(a1 + 1036) = v9;
			if (v9)
			{
				v10 = *(_QWORD*)(qword_140C65898 + 2712);
				if (v10)
				{
					for (i = *(__int64**)(qword_140C65898 + 2704); ; ++i)
					{
						v12 = *i;
						if (*i)
						{
							if (*(_DWORD*)(v12 + 64) == v9)
								break;
						}
						if (++v2 >= v10)
							return;
					}
					v13 = *(_QWORD*)(a1 + 32);
					v14 = (__m128i*)sub_1405645B0(v10, v6, 0);
					if (v13)
						sub_140109710((__int64*)(a1 + 1040), v13 + 240, v14, 0);
					if ((*(_BYTE*)(a1 + 664) & 1) == 0)
					{
						v15 = sub_14018EFA0(&v16, (__int64)L"%d", *(unsigned __int8*)(*(_QWORD*)(v8 + 112) + 8i64));
						(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 80i64))(a1, v15[1]);
						if (v17)
							sub_14018B900(v17, 0);
					}
					*(_DWORD*)(a1 + 1028) = 4;
					*(_DWORD*)(a1 + 1032) = *(_DWORD*)(v12 + 36);
				}
			}
		}
	}
	else
	{
		if (*(_QWORD*)(a1 + 32))
		{
			v4 = *(_QWORD*)(a1 + 1040);
			if (v4)
			{
				if (!sub_14002C740(a1 + 1056, word_1409F7A9C))
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
					*(_QWORD*)(a1 + 1040) = 0i64;
				}
			}
		}
		*(_DWORD*)(a1 + 1028) = 300;
		*(_DWORD*)(a1 + 1032) = -1;
	}
}
// 1406DA29C: variable 'v5' is possibly undefined
// 1409F7A9C: using guessed type _WORD word_1409F7A9C[2];
// 140B3CD54: using guessed type wchar_t aD_71[3];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

