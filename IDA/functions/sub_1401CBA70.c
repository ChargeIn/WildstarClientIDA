//----- (00000001401CBA70) ----------------------------------------------------
__int64 __fastcall sub_1401CBA70(__int64 a1)
{
	_WORD* v1; // rax
	__int64 v2; // rdx
	_WORD* v3; // rax
	__int64 v4; // rdx
	_WORD* v5; // rax
	__int64 v6; // rdx
	__int64 result; // rax

	v1 = (_WORD*)(a1 + 188);
	v2 = 286i64;
	do
	{
		*v1 = 0;
		v1 += 2;
		--v2;
	} while (v2);
	v3 = (_WORD*)(a1 + 2480);
	v4 = 30i64;
	do
	{
		*v3 = 0;
		v3 += 2;
		--v4;
	} while (v4);
	v5 = (_WORD*)(a1 + 2724);
	v6 = 19i64;
	do
	{
		*v5 = 0;
		v5 += 2;
		--v6;
	} while (v6);
	result = 1i64;
	*(_QWORD*)(a1 + 5888) = 0i64;
	*(_DWORD*)(a1 + 5896) = 0;
	*(_WORD*)(a1 + 1212) = 1;
	*(_DWORD*)(a1 + 5876) = 0;
	return result;
}

