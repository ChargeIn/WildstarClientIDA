//----- (00000001405AD1B0) ----------------------------------------------------
__int64 __fastcall sub_1405AD1B0(__int64 a1, int a2)
{
	unsigned int v2; // r12d
	__int64 i; // r15
	__int64 v6; // rsi
	int v7; // ebp
	unsigned __int64 v8; // rdi
	_QWORD* v9; // rbx
	int v10; // edx
	_QWORD* v12; // rbx
	_QWORD* v13; // r8
	_QWORD* v14; // rax
	__int64 v15; // rcx
	_QWORD* j; // rcx
	__int64 k; // rcx
	int v18; // [rsp+50h] [rbp+8h] BYREF

	v2 = 0;
	for (i = 0i64; (unsigned int)i < *(_DWORD*)(a1 + 272); v2 += v10)
	{
		v6 = qword_140C659F8;
		v7 = *(_DWORD*)(a1 + 188);
		v18 = *(_DWORD*)(192 * i + *(_QWORD*)(a1 + 232) + 4);
		v8 = (*(__int64(__fastcall**)(int*))(qword_140C659F8 + 56))(&v18);
		v9 = *(_QWORD**)(*(_QWORD*)(v6 + 48) + 8 * (v8 % *(_QWORD*)(v6 + 40)));
		if (!v9)
			goto LABEL_6;
		while (v8 != *v9 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v6 + 64))(&v18, v9 + 2))
		{
			v9 = (_QWORD*)v9[1];
			if (!v9)
				goto LABEL_6;
		}
		v12 = v9 + 3;
		if (v12 && *(_DWORD*)(*v12 + 20i64) == v7)
		{
			v13 = *(_QWORD**)(*v12 + 88i64);
			v10 = 0;
			v14 = (_QWORD*)v13[2];
			while (v14 != v13)
			{
				if (*(_DWORD*)(v14[5] + 128i64) == a2)
					++v10;
				v15 = v14[3];
				if (v15)
				{
					v14 = (_QWORD*)v14[3];
					for (j = *(_QWORD**)(v15 + 16); j; j = (_QWORD*)j[2])
						v14 = j;
				}
				else
				{
					for (k = v14[1]; v14 == *(_QWORD**)(k + 24); k = *(_QWORD*)(k + 8))
						v14 = (_QWORD*)k;
					if (v14[3] != k)
						v14 = (_QWORD*)k;
				}
			}
		}
		else
		{
		LABEL_6:
			v10 = 0;
		}
		i = (unsigned int)(i + 1);
	}
	return v2;
}
// 140C659F8: using guessed type __int64 qword_140C659F8;

