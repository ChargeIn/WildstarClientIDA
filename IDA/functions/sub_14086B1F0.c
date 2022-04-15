//----- (000000014086B1F0) ----------------------------------------------------
__int64 __fastcall sub_14086B1F0(__int64 a1)
{
	int v3; // eax
	unsigned int v4; // ebp
	__int64 v5; // r15
	__int64* v6; // rsi
	_DWORD* v7; // rcx
	_DWORD* v8; // rax
	__int64* i; // rdi
	_DWORD* v10; // rcx
	_DWORD* v11; // rax
	unsigned int* j; // rbx
	int v13; // r8d
	int v14; // edx

	if (!(_BYTE)qword_140C61B20)
		return sub_140869A30(a1);
	v3 = *(_DWORD*)(a1 + 240);
	v4 = 1;
	if (v3)
	{
		*(_DWORD*)(a1 + 240) = v3 + 1;
	}
	else
	{
		v5 = sub_14087BB10(a1 + 224, *(_DWORD*)(a1 + 252), *(_DWORD*)(a1 + 248));
		if (v5)
		{
			v6 = *(__int64**)(a1 + 264);
			if (!v6)
				goto LABEL_22;
			do
			{
				v7 = *(_DWORD**)(v5 + 8);
				v8 = *(_DWORD**)v5;
				if (*(_DWORD**)v5 != v7)
				{
					do
					{
						if (*v8 == *((_DWORD*)v6 + 2))
							break;
						++v8;
					} while (v8 != v7);
					if (v8 != v7)
						v4 = sub_14086B390(a1, (__int64)(v6 + 2));
				}
				if (v4 != 1)
				{
					for (i = *(__int64**)(a1 + 264); i != v6; i = (__int64*)*i)
					{
						v10 = *(_DWORD**)(v5 + 8);
						v11 = *(_DWORD**)v5;
						if (*(_DWORD**)v5 != v10)
						{
							do
							{
								if (*v11 == *((_DWORD*)i + 2))
									break;
								++v11;
							} while (v11 != v10);
							if (v11 != v10)
							{
								for (j = (unsigned int*)i[2]; j != (unsigned int*)i[3]; ++j)
									sub_1408552B0(*j);
							}
						}
					}
				}
				v6 = (__int64*)*v6;
			} while (v6);
			if (v4 == 1)
			{
			LABEL_22:
				v13 = *(_DWORD*)(a1 + 248);
				v14 = *(_DWORD*)(a1 + 252);
				++* (_DWORD*)(a1 + 240);
				v4 = sub_14087BB40(a1 + 224, v14, v13);
				if (v4 != 1)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 328i64))(a1);
			}
		}
		else
		{
			return 52;
		}
	}
	return v4;
}
// 140C61B20: using guessed type __int64 qword_140C61B20;

