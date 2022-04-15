//----- (00000001405F8180) ----------------------------------------------------
__int64 __fastcall sub_1405F8180(_DWORD* a1)
{
	__int64 result; // rax

	result = (*(__int64(__fastcall**)(_DWORD*))(*(_QWORD*)a1 + 104i64))(a1);
	if ((_DWORD)result)
	{
		if ((*(unsigned int(__fastcall**)(_DWORD*))(*(_QWORD*)a1 + 112i64))(a1))
			return (unsigned int)(a1[9] - a1[8]);
		else
			return (unsigned int)(dword_140C636A8 - a1[8]);
	}
	return result;
}
// 140C636A8: using guessed type int dword_140C636A8;

