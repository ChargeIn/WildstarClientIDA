//----- (00000001405FA640) ----------------------------------------------------
void __fastcall sub_1405FA640(__int64 a1, __int64 a2)
{
	unsigned int* v3; // rax
	__int64 v4; // rcx
	unsigned int v5; // r8d
	unsigned int v6; // r8d
	unsigned int v7; // r8d

	v3 = (unsigned int*)sub_1401F3EA0(*(_DWORD*)(a2 + 40));
	if (v3)
	{
		v5 = v3[1];
		if (!v5)
			goto LABEL_9;
		v6 = v5 - 4;
		if (v6)
		{
			v7 = v6 - 1;
			if (v7)
			{
				if (v7 == 1)
					sub_1405FAB30(v4, (__int64)v3);
				return;
			}
		LABEL_9:
			sub_1405FA960(a1, v3);
			return;
		}
		if (*(_DWORD*)(qword_140C65898 + 31212) == v3[2])
			*(_DWORD*)(qword_140C65898 + 31212) = 0;
	}
}
// 1405FA677: variable 'v4' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

