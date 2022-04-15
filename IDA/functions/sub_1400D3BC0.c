//----- (00000001400D3BC0) ----------------------------------------------------
__int64 __fastcall sub_1400D3BC0(__int64 a1, unsigned int a2)
{
	__int64 result; // rax
	_QWORD* v5; // rax
	_QWORD* v6; // rbx

	if (*(_DWORD*)(a1 + 24) == a2)
		return a1;
	v5 = *(_QWORD**)(a1 + 560);
	v6 = (_QWORD*)*v5;
	if ((_QWORD*)*v5 == v5)
		return 0i64;
	while (1)
	{
		result = sub_1400D3BC0(v6[2], a2);
		if (result)
			break;
		v6 = (_QWORD*)*v6;
		if (v6 == *(_QWORD**)(a1 + 560))
			return 0i64;
	}
	return result;
}

