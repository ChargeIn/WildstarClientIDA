//----- (00000001404DE400) ----------------------------------------------------
__int64 __fastcall sub_1404DE400(__int64 a1)
{
	__int16* v2; // rax
	unsigned int v3; // ecx
	int* v4; // rbx
	__int64 v5; // rax
	__int64 v6; // rcx
	int v7; // edx
	__int64 v8; // rax

	v2 = sub_14034BDD0(a1, 170555);
	v3 = *(_DWORD*)(qword_140C65898 + 5780);
	v4 = (int*)v2;
	if (v3)
	{
		v5 = sub_1401ED460(v3);
		if (v5)
		{
			v7 = *(_DWORD*)(v5 + 8);
			if (v7)
				v4 = (int*)sub_14034BDD0(v6, v7);
		}
	}
	v8 = 0i64;
	if (*(_WORD*)v4)
	{
		do
			++v8;
		while (*((_WORD*)v4 + v8));
	}
	sub_14001C480(a1 + 120, v4, (int*)((char*)v4 + 2 * v8));
	return *(_QWORD*)(a1 + 128);
}
// 1404DE43C: variable 'v6' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

