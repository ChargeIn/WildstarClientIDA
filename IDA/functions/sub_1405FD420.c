//----- (00000001405FD420) ----------------------------------------------------
__int64 __fastcall sub_1405FD420(__int64 j)
{
	_QWORD* v1; // rax
	unsigned int v2; // edi
	__int64 v3; // rsi
	_QWORD* v4; // rbx
	__int64 v5; // rax
	__int64 v6; // rax
	_QWORD* i; // rax

	v1 = *(_QWORD**)(j + 8);
	v2 = 0;
	v3 = j;
	v4 = (_QWORD*)v1[2];
	if (v4 != v1)
	{
		do
		{
			v5 = sub_1405A8A40(j, **(_DWORD**)(v4[5] + 8i64));
			if (v5)
			{
				j = *(_QWORD*)(v5 + 8);
				if (*(_DWORD*)(j + 20) == 3 && (unsigned int)sub_1405FBC40(*(_QWORD**)qword_140C65B80, *(_DWORD*)j) != 2)
					++v2;
			}
			v6 = v4[3];
			if (v6)
			{
				v4 = (_QWORD*)v4[3];
				for (i = *(_QWORD**)(v6 + 16); i; i = (_QWORD*)i[2])
					v4 = i;
			}
			else
			{
				for (j = v4[1]; v4 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v4 = (_QWORD*)j;
				if (v4[3] != j)
					v4 = (_QWORD*)j;
			}
		} while (v4 != *(_QWORD**)(v3 + 8));
	}
	return v2;
}
// 1405FD45A: variable 'j' is possibly undefined
// 140C65B80: using guessed type __int64 qword_140C65B80;

