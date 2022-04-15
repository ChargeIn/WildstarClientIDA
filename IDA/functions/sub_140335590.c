//----- (0000000140335590) ----------------------------------------------------
__int64 __fastcall sub_140335590(__int64 a1)
{
	bool v1; // zf
	__int64 result; // rax

	v1 = (*(_DWORD*)(a1 + 8))-- == 1;
	result = *(unsigned int*)(a1 + 8);
	if (v1)
	{
		if (*(_DWORD*)(a1 + 56))
			sub_14018B900(*(_QWORD*)(a1 + 32), 0);
		sub_14018B900(a1, 0);
		return 0i64;
	}
	return result;
}

