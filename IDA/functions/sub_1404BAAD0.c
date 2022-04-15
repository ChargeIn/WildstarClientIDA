//----- (00000001404BAAD0) ----------------------------------------------------
__int64 __fastcall sub_1404BAAD0(__int64 a1, __int64 a2)
{
	int* v2; // rcx
	_DWORD* v3; // r10
	__int64 v5; // r9
	__int64 v6; // r8
	__int64* v7; // rax
	__int64* v8; // r8
	int v9; // edx
	__int64 v10; // rcx
	__int64 v12; // rdi
	unsigned int v13; // ebx
	int v14; // ebp
	__int64 v15; // rdx
	int v16; // r8d
	__int64 i; // rbx
	__int64 v18; // rdx
	__int64 v19; // rcx

	v2 = *(int**)(a2 + 8);
	v3 = (_DWORD*)qword_140C659F0;
	v5 = *((_QWORD*)v2 + 1);
	v6 = *(_QWORD*)(qword_140C659F0 + 824);
	if (!v5)
		return 0i64;
	v7 = *(__int64**)(v6 + 16);
	v8 = *(__int64**)(v6 + 24);
	if (v7 == v8)
		return 0i64;
	v9 = *v2;
	while (1)
	{
		v10 = *v7;
		if (*(_DWORD*)(*v7 + 8) == v9 && *(_QWORD*)(v10 + 16) == v5)
			break;
		if (++v7 == v8)
			return 0i64;
	}
	v12 = *v7;
	if (!v10)
		return 0i64;
	v13 = 0;
	v14 = 0;
	if (*(_DWORD*)a2)
	{
		do
		{
			v15 = *(_QWORD*)(a2 + 8) + 104i64 * v13;
			if (v15)
			{
				switch (*(_DWORD*)(v15 + 24))
				{
				case 0:
					v16 = 8;
					goto LABEL_19;
				case 2:
					v16 = 7;
					goto LABEL_19;
				case 3:
					v16 = 4;
					goto LABEL_19;
				case 4:
					v16 = 5;
					goto LABEL_19;
				case 6:
					v16 = 9;
					goto LABEL_19;
				case 7:
					v16 = 6;
					goto LABEL_19;
				case 8:
					v16 = 10;
				LABEL_19:
					if (*(_DWORD*)(v15 + 76))
					{
						if (v16 == 8)
						{
							sub_1405ABDC0(v12, v15);
							v14 = 1;
						}
						else
						{
							sub_1405AB8C0(v12, v15, v16);
						}
					}
					else
					{
						sub_1405ABBF0(v12, v15, v16);
					}
					break;
				default:
					break;
				}
			}
			++v13;
		} while (v13 < *(_DWORD*)a2);
		v3 = (_DWORD*)qword_140C659F0;
	}
	*(_DWORD*)(v12 + 500) = *(_DWORD*)(a2 + 4);
	if (v14 && !*v3)
		sub_1405AEC80(v12);
	for (i = 0i64; (unsigned int)i < *(_DWORD*)(v12 + 272); i = (unsigned int)(i + 1))
	{
		v18 = *(_QWORD*)(v12 + 232);
		if (v18 && (unsigned int)i < *(_DWORD*)(v12 + 272))
			v19 = v18 + 192 * i;
		else
			v19 = 0i64;
		sub_1404C9930(v19, *(_DWORD*)(v19 + 4), *(_DWORD*)(v12 + 188));
	}
	return 0i64;
}
// 140C659F0: using guessed type __int64 qword_140C659F0;

