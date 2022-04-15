//----- (00000001402CB810) ----------------------------------------------------
__int64 __fastcall sub_1402CB810(__int64 a1)
{
	__int64 result; // rax

	result = *(_QWORD*)(a1 + 16);
	if (result)
		return *(_QWORD*)(result + 16);
	return result;
}

