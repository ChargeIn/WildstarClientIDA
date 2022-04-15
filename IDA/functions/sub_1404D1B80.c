//----- (00000001404D1B80) ----------------------------------------------------
__int64* __fastcall sub_1404D1B80(__int64 a1, __int64* a2)
{
	__int64 v2; // rbp
	_QWORD* v4; // rax
	_QWORD* v5; // rbx
	__int64 v6; // r8
	__int64 v7; // rax
	_QWORD* i; // rax
	__int64 j; // rax

	v2 = qword_140C65A38;
	a2[1] = 0i64;
	*a2 = 0i64;
	v4 = *(_QWORD**)(v2 + 16);
	v5 = (_QWORD*)v4[2];
	if (v5 != v4)
	{
		do
		{
			v6 = *(unsigned int*)(*(_QWORD*)(v5[5] + 8i64) + 8i64);
			if (!(_DWORD)v6
				|| (*(unsigned int(__fastcall**)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
					+ 24i64))(
						qword_140C659A0,
						*(_QWORD*)(qword_140C65898 + 120),
						v6,
						0i64,
						0i64,
						0))
			{
				sub_140033260(a2, v5 + 5);
			}
			v7 = v5[3];
			if (v7)
			{
				v5 = (_QWORD*)v5[3];
				for (i = *(_QWORD**)(v7 + 16); i; i = (_QWORD*)i[2])
					v5 = i;
			}
			else
			{
				for (j = v5[1]; v5 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v5 = (_QWORD*)j;
				if (v5[3] != j)
					v5 = (_QWORD*)j;
			}
		} while (v5 != *(_QWORD**)(v2 + 16));
	}
	return a2;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A0: using guessed type __int64 qword_140C659A0;
// 140C65A38: using guessed type __int64 qword_140C65A38;

