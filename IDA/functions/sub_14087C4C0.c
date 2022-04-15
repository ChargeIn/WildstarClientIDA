//----- (000000014087C4C0) ----------------------------------------------------
_DWORD* __fastcall sub_14087C4C0(__int64 a1, int a2)
{
	unsigned __int64 v4; // rdi
	_DWORD* result; // rax

	v4 = (__int64)(*(_QWORD*)(a1 + 8) - *(_QWORD*)a1) >> 2;
	if (v4 >= *(unsigned int*)(a1 + 16) && !sub_14082A0E0(a1, 16) || v4 >= *(unsigned int*)(a1 + 16))
		return 0i64;
	result = *(_DWORD**)(a1 + 8);
	*(_QWORD*)(a1 + 8) = result + 1;
	if (result)
		*result = a2;
	return result;
}

