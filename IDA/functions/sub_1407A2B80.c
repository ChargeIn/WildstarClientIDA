//----- (00000001407A2B80) ----------------------------------------------------
__int64 __fastcall sub_1407A2B80(__int64 a1)
{
	__int64 result; // rax

	result = (unsigned int)_InterlockedDecrement((volatile signed __int32*)(a1 + 88));
	if (!(_DWORD)result)
	{
		if (a1)
			sub_140633300((_QWORD*)a1);
		return 0i64;
	}
	return result;
}

