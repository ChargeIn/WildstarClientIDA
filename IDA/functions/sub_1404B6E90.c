//----- (00000001404B6E90) ----------------------------------------------------
__int64 __fastcall sub_1404B6E90(__int64 a1, unsigned int a2)
{
	__int64 v3; // rbx
	__int64 v4; // rax
	unsigned int v5; // r9d
	unsigned int v6; // edx
	__int64 v7; // rcx
	_DWORD* v8; // r8
	__int64 v10; // r8
	__int64 v11; // rcx
	int v12; // eax

	v3 = sub_1405B1510(&qword_140C7DFB0);
	if (!v3)
		return 0i64;
	v4 = sub_140205FA0(a2);
	if (!v4)
		return 0i64;
	if (*(_DWORD*)(v3 + 64) != *(_DWORD*)(v4 + 12))
		return 0i64;
	v5 = 0;
	v6 = 0;
	v7 = 0i64;
	if (!*(_DWORD*)(v3 + 272))
		return 0i64;
	while (1)
	{
		if (v6 < (unsigned __int64)((__int64)(*(_QWORD*)(v3 + 256) - *(_QWORD*)(v3 + 248)) >> 3))
		{
			v8 = *(_DWORD**)(*(_QWORD*)(v3 + 248) + 8 * v7);
			if (v8)
			{
				if (*v8 == *(_DWORD*)(v4 + 16))
					break;
			}
		}
		++v7;
		++v6;
		if (v7 >= *(unsigned int*)(v3 + 272))
			return 0i64;
	}
	v10 = *(_QWORD*)(v3 + 232);
	if (v10 && v6 < *(_DWORD*)(v3 + 272))
		v11 = v10 + 192i64 * v6;
	else
		v11 = 0i64;
	v12 = *(_DWORD*)(v11 + 184);
	if ((v12 & 0xFFFFFFFA) != 0 || v12 == 4)
		return 1;
	return v5;
}
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;

