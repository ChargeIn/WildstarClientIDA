//----- (0000000140616EB0) ----------------------------------------------------
__int64 sub_140616EB0()
{
	__int64 v0; // rsi
	_QWORD* v1; // rax
	_QWORD* v2; // rbx
	__int64 v3; // rdi
	__int64 v4; // rax
	_QWORD* i; // rax
	__int64 j; // rax

	v0 = qword_140C65958;
	v1 = *(_QWORD**)(qword_140C65958 + 40);
	v2 = (_QWORD*)v1[2];
	if (v2 != v1)
	{
		do
		{
			v3 = v2[5];
			*(_QWORD*)(v3 + 24) = 0i64;
			*(_DWORD*)(v3 + 32) = 0;
			*(_QWORD*)(v3 + 16) = 0i64;
			*(_DWORD*)v3 = 0;
			*(_DWORD*)(v3 + 104) = 0;
			sub_140008410(v3 + 40);
			sub_140008410(v3 + 72);
			*(_QWORD*)(v3 + 4) = 0i64;
			*(_DWORD*)(v3 + 12) = 0;
			v4 = v2[3];
			if (v4)
			{
				v2 = (_QWORD*)v2[3];
				for (i = *(_QWORD**)(v4 + 16); i; i = (_QWORD*)i[2])
					v2 = i;
			}
			else
			{
				for (j = v2[1]; v2 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v2 = (_QWORD*)j;
				if (v2[3] != j)
					v2 = (_QWORD*)j;
			}
		} while (v2 != *(_QWORD**)(v0 + 40));
	}
	return 0i64;
}
// 140C65958: using guessed type __int64 qword_140C65958;

