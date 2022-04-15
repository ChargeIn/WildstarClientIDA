//----- (00000001407ABCD0) ----------------------------------------------------
__int64 __fastcall sub_1407ABCD0(__int64 a1, int a2)
{
	_DWORD* v2; // rdi
	__int64 result; // rax
	__int64 i; // rcx

	v2 = (_DWORD*)(a1 + 436360);
	result = a2;
	for (i = 223i64; i; --i)
		*v2++ = a2;
	return result;
}

