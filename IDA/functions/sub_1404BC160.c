//----- (00000001404BC160) ----------------------------------------------------
__int64 __fastcall sub_1404BC160(__int64 a1, unsigned int a2)
{
	__int64 v3; // rbx
	__int64 v4; // rax
	unsigned int v5; // edx
	__int64 v6; // rcx
	_DWORD* v7; // r8

	v3 = sub_1405B1510(&qword_140C7DFB0);
	if (!v3)
		return 0i64;
	v4 = sub_140205FA0(a2);
	if (!v4)
		return 0i64;
	if (*(_DWORD*)(v3 + 64) != *(_DWORD*)(v4 + 12))
		return 0i64;
	v5 = 0;
	v6 = 0i64;
	if (!*(_DWORD*)(v3 + 272))
		return 0i64;
	while (1)
	{
		if (v5 < (unsigned __int64)((__int64)(*(_QWORD*)(v3 + 256) - *(_QWORD*)(v3 + 248)) >> 3))
		{
			v7 = *(_DWORD**)(*(_QWORD*)(v3 + 248) + 8 * v6);
			if (v7)
			{
				if (*v7 == *(_DWORD*)(v4 + 16))
					break;
			}
		}
		++v6;
		++v5;
		if (v6 >= *(unsigned int*)(v3 + 272))
			return 0i64;
	}
	return *(_QWORD*)(*(_QWORD*)(v3 + 248) + 8 * v6);
}
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;

