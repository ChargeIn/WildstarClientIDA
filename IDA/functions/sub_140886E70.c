//----- (0000000140886E70) ----------------------------------------------------
_BYTE* __fastcall sub_140886E70(__int64 a1)
{
	_BYTE* result; // rax
	float v3; // [rsp+38h] [rbp+10h] BYREF

	result = (_BYTE*)sub_1408853C0(a1, &v3);
	if (result)
		return (_BYTE*)sub_140886AC0(a1, result, v3);
	return result;
}

