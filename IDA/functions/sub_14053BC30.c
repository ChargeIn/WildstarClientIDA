//----- (000000014053BC30) ----------------------------------------------------
bool __fastcall sub_14053BC30(__int64 a1, __int64 a2)
{
	unsigned int v2; // ecx
	__int64 v3; // r8
	__int64 v4; // rdx
	__int64 v5; // rax
	__int64 v7; // [rsp+8h] [rbp+8h]

	if (*(int*)a2 < 300)
		v2 = *(unsigned __int8*)(a2 + 4) | ((unsigned __int8)*(_DWORD*)a2 << 8);
	else
		v2 = -1;
	v3 = *(_QWORD*)(qword_140C65898 + 29656);
	v4 = v3;
	v5 = *(_QWORD*)(v3 + 8);
	while (v5)
	{
		if (*(_DWORD*)(v5 + 32) < v2)
		{
			v5 = *(_QWORD*)(v5 + 24);
		}
		else
		{
			v4 = v5;
			v5 = *(_QWORD*)(v5 + 16);
		}
	}
	if (v4 == v3 || (v7 = v4, v2 < *(_DWORD*)(v4 + 32)))
		v7 = *(_QWORD*)(qword_140C65898 + 29656);
	return v7 != v3 && *(_DWORD*)(v7 + 36) != 0;
}
// 140C65898: using guessed type __int64 qword_140C65898;

