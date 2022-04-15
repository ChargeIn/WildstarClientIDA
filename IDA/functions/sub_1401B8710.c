//----- (00000001401B8710) ----------------------------------------------------
__int64 __fastcall sub_1401B8710(__int64 a1, unsigned int a2, unsigned __int64 a3, char* a4, unsigned __int64 a5)
{
	_QWORD* v7; // rax
	unsigned __int64 v8; // rcx
	signed int v9; // eax
	unsigned int v10; // ecx

	if ((*(_BYTE*)(a1 + 16) & 2) == 0)
		return 2147942405i64;
	if (!a5)
		return 0i64;
	if (!a2)
		return 2147942487i64;
	if (!a4)
		return 2147942487i64;
	if ((unsigned __int64)a2 >= *(_QWORD*)(a1 + 624))
		return 2147942487i64;
	v7 = (_QWORD*)(*(_QWORD*)(a1 + 616) + 16i64 * a2);
	v8 = v7[1];
	if (!v8 || a3 > v8 || a5 > v8 - a3)
		return 2147942487i64;
	v9 = sub_1401BC4C0(a1, (LARGE_INTEGER)(a3 + *v7), a4, a5);
	v10 = 0;
	if (v9 < 0)
		return (unsigned int)v9;
	return v10;
}

