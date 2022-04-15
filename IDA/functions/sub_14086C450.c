//----- (000000014086C450) ----------------------------------------------------
_WORD* __fastcall sub_14086C450(__int64 a1, __int16 a2)
{
	unsigned __int64 v4; // rdi
	_WORD* result; // rax

	v4 = (__int64)(*(_QWORD*)(a1 + 8) - *(_QWORD*)a1) >> 1;
	if (v4 >= *(unsigned int*)(a1 + 16) && !sub_14086D230(a1, 1) || v4 >= *(unsigned int*)(a1 + 16))
		return 0i64;
	result = *(_WORD**)(a1 + 8);
	*(_QWORD*)(a1 + 8) = result + 1;
	if (result)
		*result = a2;
	return result;
}

