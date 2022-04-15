//----- (000000014087FC20) ----------------------------------------------------
__int64 __fastcall sub_14087FC20(
	_DWORD* a1,
	unsigned int a2,
	__int64 a3,
	__int64 a4,
	_DWORD* a5,
	_DWORD* a6,
	_DWORD* a7,
	_DWORD* a8,
	__int64 a9,
	__int64 a10)
{
	char v10; // di
	int v13; // r13d
	_DWORD* v14; // r8
	_DWORD* v15; // r9
	unsigned __int64 v16; // rbp
	int v17; // eax
	_QWORD* v18; // rbx
	unsigned int v19; // ecx
	__int64 v20; // rax
	_DWORD* v21; // rbx
	__int64 result; // rax
	int* v23; // r8
	unsigned int i; // r9d
	int v25; // eax
	__int64 v26; // rdx
	__int64 v27; // rcx
	unsigned int v28; // edx
	_DWORD* v29; // rax
	unsigned int v30; // [rsp+54h] [rbp+Ch]

	v10 = 0;
	v13 = (int)a1;
	if (!a1 || !a2)
		return 31i64;
	v14 = a5;
	v15 = a6;
	v16 = (unsigned __int64)a1 + a2;
	*a5 = 0;
	*a6 = 0;
	if ((unsigned __int64)(a1 + 3) > v16)
		return 7i64;
	if (*a1 != 1179011410)
		return 7i64;
	v17 = a1[2];
	if (v17 != 1163280727 && v17 != 1095587672)
		return 7i64;
	v18 = a1 + 3;
	v19 = a2 - 12;
	if (a2 - 12 >= 8)
	{
		while (1)
		{
			v20 = *v18;
			v21 = v18 + 1;
			v30 = HIDWORD(v20);
			if (v19 - 8 < HIDWORD(v20) && (_DWORD)v20 != 1635017060)
				break;
			if ((unsigned int)v20 > 0x61746164)
			{
				switch ((_DWORD)v20)
				{
				case 0x6B656573:
					if (a10)
					{
						*(_QWORD*)(a10 + 8) = v21;
						v10 |= 0x10u;
						*(_DWORD*)a10 = HIDWORD(v20);
					}
					break;
				case 0x6C62616C:
					if ((v10 & 4) != 0)
					{
						if (a4)
						{
							v28 = 0;
							if (*(_DWORD*)a4)
							{
								v29 = *(_DWORD**)(a4 + 8);
								while (*v29 != *v21)
								{
									++v28;
									v29 += 4;
									if (v28 >= *(_DWORD*)a4)
										goto LABEL_45;
								}
								sub_140881660(a4, v28, v21 + 1, v30 - 4);
							}
						}
					}
					break;
				case 0x6C706D73:
					if (v21[7])
					{
						v27 = (unsigned int)v21[8];
						*v14 = *(_DWORD*)((char*)v21 + v27 + 44);
						*v15 = *(_DWORD*)((char*)v21 + v27 + 48);
					}
					v10 |= 8u;
					break;
				}
			}
			else
			{
				switch ((_DWORD)v20)
				{
				case 0x61746164:
					if ((v10 & 1) != 0)
					{
						*a7 = HIDWORD(v20);
						*a8 = (_DWORD)v21 - v13;
						return 1i64;
					}
					return 7i64;
				case 0x20646B61:
					if (a9)
					{
						*(_QWORD*)(a9 + 8) = v21;
						*(_DWORD*)a9 = HIDWORD(v20);
					}
					break;
				case 0x20657563:
					if ((v10 & 1) == 0)
						return 7i64;
					if ((v10 & 4) == 0 && a4)
					{
						if (*v21)
						{
							result = sub_140881370(a4, *v21);
							if ((_DWORD)result != 1)
								return result;
							v23 = v21 + 1;
							for (i = 0; i < *(_DWORD*)a4; *(_QWORD*)(*(_QWORD*)(a4 + 8) + 8 * v26 + 8) = 0i64)
							{
								v25 = *v23;
								v26 = 2i64 * i++;
								v23 += 6;
								*(_DWORD*)(*(_QWORD*)(a4 + 8) + 8 * v26) = v25;
								*(_DWORD*)(*(_QWORD*)(a4 + 8) + 8 * v26 + 4) = *(v23 - 5);
							}
						}
						v10 |= 4u;
					}
					break;
				case 0x20746D66:
					if ((v10 & 1) == 0)
					{
						*(_QWORD*)(a3 + 8) = v21;
						v10 |= 1u;
						*(_DWORD*)a3 = HIDWORD(v20);
					}
					break;
				case 0x5453494C:
					v30 = 4;
					break;
				}
			}
		LABEL_45:
			v18 = (_QWORD*)((char*)v21 + v30);
			if ((v30 & 1) != 0 && !*(_BYTE*)v18)
			{
				v18 = (_QWORD*)((char*)v18 + 1);
				if ((unsigned __int64)v18 > v16)
					return 7i64;
			}
			v19 = v16 - (_DWORD)v18;
			if ((unsigned int)(v16 - (_DWORD)v18) < 8)
				return 8i64;
			v14 = a5;
			v15 = a6;
		}
	}
	return 8i64;
}

