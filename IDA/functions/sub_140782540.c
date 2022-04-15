//----- (0000000140782540) ----------------------------------------------------
__int64 __fastcall sub_140782540(__int64 a1, __int64 a2, int a3, _DWORD* a4)
{
	_DWORD* v5; // rax
	__int64 result; // rax
	int v7; // [rsp+20h] [rbp-38h]
	int v8; // [rsp+28h] [rbp-30h]
	char v9[24]; // [rsp+40h] [rbp-18h] BYREF

	v5 = (_DWORD*)sub_140785AD0(a1 + 56, (__int64)v9, a3, (__int64)a4, v7, v8, a1);
	*a4 = *v5;
	a4[1] = v5[1];
	result = (unsigned int)v5[2];
	a4[2] = result;
	return result;
}
// 14078255A: variable 'v7' is possibly undefined
// 14078255A: variable 'v8' is possibly undefined
// 140782540: using guessed type char var_18[24];

