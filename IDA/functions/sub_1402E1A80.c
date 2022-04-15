//----- (00000001402E1A80) ----------------------------------------------------
__int64 __fastcall sub_1402E1A80(__int64 a1, __int64 a2)
{
	__int64(__fastcall * v2)(__int64, _QWORD); // r8
	__int64 result; // rax

	v2 = *(__int64(__fastcall**)(__int64, _QWORD))(a2 + 128);
	result = a2;
	if (v2)
		return v2(a2, *(_QWORD*)(a2 + 224));
	return result;
}

