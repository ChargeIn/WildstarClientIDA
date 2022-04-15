//----- (00000001404B7130) ----------------------------------------------------
__int64 __fastcall sub_1404B7130(__int64 a1, unsigned int a2)
{
	__int64 v3; // rbx
	__int64 v5; // rax
	unsigned __int64 v6; // rsi
	__int64 v7; // rsi
	__int64 v8; // rax
	unsigned int v9; // edi
	_DWORD* v10; // rbx
	__int64 v11; // rsi
	unsigned int v12; // ecx
	__int64 v13; // rax

	v3 = sub_1405B1510(&qword_140C7DFB0);
	if (!v3)
		return 0i64;
	v5 = sub_140205FA0(a2);
	if (!v5 || *(_DWORD*)(v3 + 64) != *(_DWORD*)(v5 + 12))
		return 0i64;
	v6 = *(unsigned int*)(v5 + 16);
	if (v6 >= (__int64)(*(_QWORD*)(v3 + 256) - *(_QWORD*)(v3 + 248)) >> 3)
		return 0i64;
	v7 = *(_QWORD*)(*(_QWORD*)(v3 + 248) + 8 * v6);
	if (!v7)
		return 0i64;
	v8 = sub_140206C60(*(_DWORD*)(v7 + 4));
	if (!v8 || (unsigned int)(*(_DWORD*)(v8 + 128) - 4) > 1)
		return 0i64;
	v9 = 0;
	v10 = (_DWORD*)(v7 + 36);
	v11 = v8 - v7 + 36;
	while (1)
	{
		v12 = *(_DWORD*)((char*)v10 + v11);
		if (v12)
		{
			v13 = sub_140204EA0(v12);
			if (v13)
			{
				if (*v10 != *(_DWORD*)(v13 + 8))
					break;
			}
		}
		++v9;
		++v10;
		if (v9 >= 5)
			return 0i64;
	}
	return 1i64;
}
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;

