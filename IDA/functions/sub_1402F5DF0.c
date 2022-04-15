//----- (00000001402F5DF0) ----------------------------------------------------
void __fastcall sub_1402F5DF0(__int64 a1)
{
	__int64 v1; // r9
	__int64* i; // rax
	__int64 v3; // r9
	__int64 j; // r9

	v1 = a1;
	if ((*(_BYTE*)(a1 + 48) & 8) != 0)
	{
		for (i = (__int64*)(a1 + 1216); *i; i = (__int64*)(*i + 1216))
		{
			if (*(_DWORD*)(v1 + 1200))
				break;
			v1 = *i;
		}
		sub_1402F5C20(v1, 8);
		for (j = *(_QWORD*)(v3 + 1232); j; j = *(_QWORD*)(j + 1248))
		{
			if (!*(_DWORD*)(j + 1200))
				sub_1402F5E70(j);
		}
	}
}
// 1402F5E37: variable 'v3' is possibly undefined
// 1402F5E55: variable 'j' is possibly undefined

