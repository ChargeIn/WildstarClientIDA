//----- (00000001405F7790) ----------------------------------------------------
__int64 __fastcall sub_1405F7790(_DWORD* a1)
{
	__int64 result; // rax

	if ((*(unsigned int(__fastcall**)(_DWORD*))(*(_QWORD*)a1 + 112i64))(a1))
		return 0i64;
	if ((*(unsigned int(__fastcall**)(_DWORD*))(*(_QWORD*)a1 + 96i64))(a1))
	{
		result = (unsigned int)(a1[16] - a1[14]);
		if ((int)result < 0)
			return 0i64;
	}
	else if ((*(unsigned int(__fastcall**)(_DWORD*))(*(_QWORD*)a1 + 160i64))(a1))
	{
		return (unsigned int)(a1[15] - a1[14]);
	}
	else
	{
		return (unsigned int)(dword_140C636A8 - a1[14]);
	}
	return result;
}
// 140C636A8: using guessed type int dword_140C636A8;

