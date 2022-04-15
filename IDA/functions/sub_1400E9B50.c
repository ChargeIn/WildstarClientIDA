//----- (00000001400E9B50) ----------------------------------------------------
_BYTE* __fastcall sub_1400E9B50(__int64 a1, void(__fastcall*** a2)(_QWORD), int a3, _DWORD* a4, _BYTE* a5)
{
	__int64 v5; // rbx
	_BYTE* result; // rax
	__int64 v8; // rbx
	__int64 v9; // rcx
	int v10[6]; // [rsp+20h] [rbp-18h] BYREF

	v5 = a3;
	result = (_BYTE*)sub_1400E1830(a1 + 3368, a2, a3, a4);
	v8 = a1 + 8 * v5;
	v9 = *(_QWORD*)(v8 + 3400);
	if (v9)
	{
		v10[0] = 0;
		if ((unsigned int)sub_140152FD0(v9, (__int64)v10))
			sub_1400E6E20(a1, *(__int64(__fastcall****)(_QWORD))(v8 + 3400));
		result = a5;
		*a5 = 1;
	}
	return result;
}
// 1400E9B50: using guessed type int var_18[6];

