//----- (00000001400D7980) ----------------------------------------------------
__int64 __fastcall sub_1400D7980(_QWORD* a1)
{
	__int64 result; // rax
	_DWORD* v3; // r8
	bool v4; // zf

	result = sub_1400D66A0(a1, 1u);
	if (result)
	{
		v3 = (_DWORD*)a1[2];
		v4 = *(_QWORD*)(*(_QWORD*)(result + 32) + 2896i64) == result;
		v3[2] = 1;
		result = 1i64;
		*v3 = v4;
		a1[2] += 16i64;
	}
	return result;
}

