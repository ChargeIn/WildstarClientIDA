//----- (0000000140843940) ----------------------------------------------------
__int64 __fastcall sub_140843940(__int64 a1)
{
	__int64 result; // rax

	result = qword_140C61FD8;
	if (qword_140C61FD8)
	{
		*(_QWORD*)(a1 + 32) = qword_140C61FD8;
		qword_140C61FD8 = a1;
	}
	else
	{
		qword_140C61FD8 = a1;
		*(_QWORD*)(a1 + 32) = result;
	}
	return result;
}
// 140C61FD8: using guessed type __int64 qword_140C61FD8;

