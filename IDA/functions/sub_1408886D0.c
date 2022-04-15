//----- (00000001408886D0) ----------------------------------------------------
_BYTE* __fastcall sub_1408886D0(__int64 a1)
{
	_BYTE* result; // rax
	float v3; // [rsp+38h] [rbp+10h] BYREF

	result = (_BYTE*)sub_1408853C0(a1, &v3);
	if (result)
		return (_BYTE*)sub_140888110(a1, result, v3);
	return result;
}

