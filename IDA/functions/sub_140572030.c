//----- (0000000140572030) ----------------------------------------------------
void __fastcall sub_140572030(__int64 a1, unsigned int* a2)
{
	__int64 v3; // rcx
	__int64 v4; // r10
	__int64 v5; // rax
	__int64 v6; // r8
	unsigned int v7; // edx
	__int64 v8; // rax
	__int64 i; // rax
	__int64 j; // rax
	__int64 v11; // [rsp+30h] [rbp+8h] BYREF

	v11 = a1;
	v3 = *(_QWORD*)(qword_140C65970 + 136);
	v4 = v3;
	v5 = *(_QWORD*)(v3 + 8);
	v6 = v5;
	if (v5)
	{
		do
		{
			if (*a2 >= *(_DWORD*)(v6 + 32))
			{
				v6 = *(_QWORD*)(v6 + 24);
			}
			else
			{
				v4 = v6;
				v6 = *(_QWORD*)(v6 + 16);
			}
		} while (v6);
		v7 = *a2;
		do
		{
			if (*(_DWORD*)(v5 + 32) < v7)
			{
				v5 = *(_QWORD*)(v5 + 24);
			}
			else
			{
				v3 = v5;
				v5 = *(_QWORD*)(v5 + 16);
			}
		} while (v5);
	}
	if (v3 != v4)
	{
		while (*(_DWORD*)(v3 + 36) != a2[1])
		{
			v8 = *(_QWORD*)(v3 + 24);
			if (v8)
			{
				v3 = *(_QWORD*)(v3 + 24);
				for (i = *(_QWORD*)(v8 + 16); i; i = *(_QWORD*)(i + 16))
					v3 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v3 + 8); v3 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v3 = j;
				if (*(_QWORD*)(v3 + 24) != j)
					v3 = j;
			}
			if (v3 == v4)
				return;
		}
		v11 = v3;
		sub_140481F20(qword_140C65970 + 128, &v11);
	}
}
// 14057207B: conditional instruction was optimized away because rax.8!=0
// 140C65970: using guessed type __int64 qword_140C65970;

