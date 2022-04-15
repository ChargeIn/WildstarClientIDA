//----- (00000001407BCA70) ----------------------------------------------------
__int64 __fastcall sub_1407BCA70(__int64 a1, __int64 a2)
{
	__int64 v2; // rdi
	__int64 v4; // rbp
	int* v5; // rbx
	int* v6; // rcx
	__int64 v7; // r8
	unsigned __int64 v8; // rcx
	unsigned __int64 v9; // rdx
	int* v10; // rax

	v2 = qword_140C7F868;
	v4 = qword_140C7F868 + 1;
	v5 = sub_14018DB00(qword_140C7F860, qword_140C7F868 + 1, 32i64);
	v6 = &v5[8 * v2];
	if (v6)
	{
		*(_OWORD*)v6 = *(_OWORD*)a2;
		*((_QWORD*)v6 + 2) = *(_QWORD*)(a2 + 16);
	}
	v7 = qword_140C7F860;
	if ((int*)qword_140C7F860 != v5)
	{
		v8 = qword_140C7F868;
		v9 = 0i64;
		if (qword_140C7F868)
		{
			v10 = v5;
			do
			{
				if (v10)
				{
					*(_OWORD*)v10 = *(_OWORD*)((char*)v10 - (char*)v5 + v7);
					*((_QWORD*)v10 + 2) = *(_QWORD*)((char*)v10 - (char*)v5 + v7 + 16);
					v8 = qword_140C7F868;
					v7 = qword_140C7F860;
				}
				++v9;
				v10 += 8;
			} while (v9 < v8);
		}
		if (v7)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v7 - 16) + 8i64))(v7 - 16);
		qword_140C7F860 = (__int64)v5;
	}
	qword_140C7F868 = v4;
	return v2;
}
// 140C7F860: using guessed type __int64 qword_140C7F860;
// 140C7F868: using guessed type __int64 qword_140C7F868;

