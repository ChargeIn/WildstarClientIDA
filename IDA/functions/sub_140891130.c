//----- (0000000140891130) ----------------------------------------------------
__int64 __fastcall sub_140891130(__int64 a1)
{
	__int64 result; // rax
	unsigned int v3; // edi

	result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 680i64))(a1);
	if ((_DWORD)result == 1)
	{
		result = sub_140869A30(a1);
		v3 = result;
		if ((_DWORD)result != 1)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 688i64))(a1);
			return v3;
		}
	}
	return result;
}

