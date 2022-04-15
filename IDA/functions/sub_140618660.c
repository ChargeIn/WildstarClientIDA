//----- (0000000140618660) ----------------------------------------------------
__int64 __fastcall sub_140618660(__int64 a1, __int64 a2)
{
	_DWORD* v2; // r11
	__int64 v3; // rcx
	unsigned int v4; // r9d
	__int64 v5; // rax
	__int64 v6; // r10
	__int64 v7; // rdx
	int v8; // r8d
	bool v9; // r8
	int v10; // edx
	bool v11; // dl
	__int64 v12; // rax
	int v13; // edx
	__int64 v14; // rax
	__int64 i; // rax
	__int64 j; // rax

	if (!a2)
		return 3i64;
	v2 = *(_DWORD**)(a2 + 8);
	v3 = *(_QWORD*)(qword_140C65968 + 272);
	v4 = v2[1];
	v5 = *(_QWORD*)(v3 + 8);
	v6 = v3;
	v7 = v5;
	if (v5)
	{
		do
		{
			v8 = *(_DWORD*)(v7 + 32);
			if (v8 == 21)
				v9 = v4 < *(_DWORD*)(v7 + 36);
			else
				v9 = v8 > 21;
			if (v9)
			{
				v6 = v7;
				v7 = *(_QWORD*)(v7 + 16);
			}
			else
			{
				v7 = *(_QWORD*)(v7 + 24);
			}
		} while (v7);
		do
		{
			v10 = *(_DWORD*)(v5 + 32);
			if (v10 == 21)
				v11 = *(_DWORD*)(v5 + 36) < v4;
			else
				v11 = v10 < 21;
			if (v11)
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
	if (v3 == v6)
		return 3i64;
	while (1)
	{
		v12 = **(_QWORD**)(v3 + 40);
		v13 = v12 ? *(_DWORD*)(v12 + 20) : 0;
		if (v13 == *v2)
			break;
		v14 = *(_QWORD*)(v3 + 24);
		if (v14)
		{
			v3 = *(_QWORD*)(v3 + 24);
			for (i = *(_QWORD*)(v14 + 16); i; i = *(_QWORD*)(i + 16))
				v3 = i;
		}
		else
		{
			for (j = *(_QWORD*)(v3 + 8); v3 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
				v3 = j;
			if (*(_QWORD*)(v3 + 24) != j)
				v3 = j;
		}
		if (v3 == v6)
			return 3i64;
	}
	return *(unsigned int*)(v12 + 56);
}
// 1406186C2: conditional instruction was optimized away because rax.8!=0
// 140C65968: using guessed type __int64 qword_140C65968;

