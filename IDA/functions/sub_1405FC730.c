//----- (00000001405FC730) ----------------------------------------------------
__int64 __fastcall sub_1405FC730(__int64 a1, int a2)
{
	_QWORD* v2; // r9
	int v3; // r8d
	_QWORD* v4; // rax
	__int64 v5; // rcx
	_QWORD* i; // rcx
	__int64 j; // rcx

	v2 = *(_QWORD**)(a1 + 8);
	v3 = 0;
	v4 = (_QWORD*)v2[2];
	if (v4 == v2)
		return 0i64;
	while (v3 != a2)
	{
		v5 = v4[3];
		++v3;
		if (v5)
		{
			v4 = (_QWORD*)v4[3];
			for (i = *(_QWORD**)(v5 + 16); i; i = (_QWORD*)i[2])
				v4 = i;
		}
		else
		{
			for (j = v4[1]; v4 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
				v4 = (_QWORD*)j;
			if (v4[3] != j)
				v4 = (_QWORD*)j;
		}
		if (v4 == v2)
			return 0i64;
	}
	return sub_1405A8A40(v4[5], **(_DWORD**)(v4[5] + 8i64));
}

