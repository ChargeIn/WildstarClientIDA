//----- (0000000140843970) ----------------------------------------------------
__int64 __fastcall sub_140843970(__int64 a1)
{
	__int64 result; // rax

	result = qword_140C61FD0;
	if (qword_140C61FD0)
	{
		*(_QWORD*)(a1 + 32) = qword_140C61FD0;
		qword_140C61FD0 = a1;
	}
	else
	{
		qword_140C61FD0 = a1;
		*(_QWORD*)(a1 + 32) = result;
	}
	return result;
}
// 140C61FD0: using guessed type __int64 qword_140C61FD0;

