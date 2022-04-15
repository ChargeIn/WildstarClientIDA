//----- (00000001405372E0) ----------------------------------------------------
__int64 __fastcall sub_1405372E0(_QWORD* a1)
{
	__int64 v2; // rdi
	_DWORD* v3; // rax
	unsigned int v4; // esi
	__int64 v5; // rax
	__int64 v6; // rbx
	__int64 v7; // rax
	__int64 i; // rax
	__int64 j; // rax

	v2 = sub_14052E9B0(a1);
	if (v2)
	{
		v3 = (_DWORD*)(a1[3] + 16i64);
		if ((unsigned __int64)v3 >= a1[2] || v3 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
			v4 = 0;
		else
			v4 = sub_140056D60(a1, 2u);
		v5 = *(_QWORD*)(v2 + 1384);
		v6 = *(_QWORD*)(v5 + 16);
		if (v6 != v5)
		{
			do
			{
				sub_140774850(v6 + 48, v4);
				v7 = *(_QWORD*)(v6 + 24);
				if (v7)
				{
					v6 = *(_QWORD*)(v6 + 24);
					for (i = *(_QWORD*)(v7 + 16); i; i = *(_QWORD*)(i + 16))
						v6 = i;
				}
				else
				{
					for (j = *(_QWORD*)(v6 + 8); v6 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
						v6 = j;
					if (*(_QWORD*)(v6 + 24) != j)
						v6 = j;
				}
			} while (v6 != *(_QWORD*)(v2 + 1384));
		}
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

