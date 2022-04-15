//----- (000000014076C300) ----------------------------------------------------
__int64 sub_14076C300()
{
	int v0; // eax
	_DWORD* v1; // r8
	bool v2; // zf
	__int64 result; // rax
	__int64 v4; // r9

	v0 = sub_1405BFA40(qword_140C65B98);
	v1[2] = 1;
	v2 = v0 == 0;
	result = 1i64;
	*v1 = !v2;
	*(_QWORD*)(v4 + 16) += 16i64;
	return result;
}
// 14076C319: variable 'v1' is possibly undefined
// 14076C32E: variable 'v4' is possibly undefined
// 140C65B98: using guessed type __int64 qword_140C65B98;

