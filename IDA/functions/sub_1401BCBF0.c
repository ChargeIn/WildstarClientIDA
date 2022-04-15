//----- (00000001401BCBF0) ----------------------------------------------------
__int64 __fastcall sub_1401BCBF0(__int64 a1, __int64 a2, __int64 a3, _WORD* a4)
{
	_WORD* v4; // r11
	_WORD* v5; // rcx
	__int64 v6; // rdx
	__int64 v7; // r8
	int v8; // r10d
	__int64 v9; // r9
	__int16 v10; // ax
	_WORD* v11; // rcx
	__int64 result; // rax

	v4 = (_WORD*)(a1 + 8);
	v5 = v4;
	v6 = a2 - (_QWORD)v4;
	v7 = 260i64;
	v8 = 0;
	v9 = 0i64;
	while (v7 != -2147483386)
	{
		v10 = *(_WORD*)((char*)v5 + v6);
		if (!v10)
			break;
		*v5++ = v10;
		++v9;
		if (!--v7)
		{
			--v5;
			v8 = -2147024774;
			--v9;
			break;
		}
	}
	*v5 = 0;
	v11 = &v4[v9];
	if ((int)(v8 + 0x80000000) >= 0 && v8 != -2147024774)
		v11 = a4;
	result = 0i64;
	if (v11 > v4 && *(v11 - 1) == 92)
		*(v11 - 1) = 0;
	return result;
}
// 1401BCC3B: conditional instruction was optimized away because r8.8!=0

