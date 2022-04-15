//----- (000000014005D0D0) ----------------------------------------------------
void __fastcall sub_14005D0D0(__int64 a1, __int64 a2)
{
	_QWORD* v2; // r10
	__int64 v3; // r11
	__int64 v4; // rdx
	unsigned __int64 v5; // rcx
	unsigned __int64 v6; // rdx
	unsigned __int64 i; // r9
	unsigned __int64 j; // r8

	v2 = (_QWORD*)a2;
	v3 = a1;
	if (*(int*)(a2 + 128) >= 4)
	{
		v4 = *(_QWORD*)(a2 + 120);
		if ((*(_BYTE*)(v4 + 9) & 3) != 0)
			sub_14005C960(a1, v4);
	}
	v5 = v2[10];
	v6 = v2[5];
	for (i = v2[2]; v5 <= v6; v5 += 40i64)
	{
		if (i < *(_QWORD*)(v5 + 16))
			i = *(_QWORD*)(v5 + 16);
	}
	for (j = v2[8]; j < v2[2]; j += 16i64)
	{
		if (*(int*)(j + 8) >= 4 && (*(_BYTE*)(*(_QWORD*)j + 9i64) & 3) != 0)
			sub_14005C960(v3, *(_QWORD*)j);
	}
	for (; j <= i; j += 16i64)
		*(_DWORD*)(j + 8) = 0;
	sub_14005D030((__int64)v2, i);
}
// 14005D0F2: variable 'v2' is possibly undefined
// 14005D143: variable 'v3' is possibly undefined
// 14005D148: variable 'j' is possibly undefined
// 14005D155: variable 'i' is possibly undefined

