//----- (00000001405FC680) ----------------------------------------------------
__int64 __fastcall sub_1405FC680(__int64 j)
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
			if (v5 && (*(_DWORD*)(*(_QWORD*)(v5 + 8) + 12i64) & 0x80000) == 0)
				++v2;
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
// 1405FC6AB: variable 'j' is possibly undefined

