//----- (0000000140155BA0) ----------------------------------------------------
__int64 __fastcall sub_140155BA0(__int64 a1)
{
	bool v1; // zf
	unsigned int v2; // ebx

	v1 = (*(_DWORD*)(a1 + 24))-- == 1;
	v2 = *(_DWORD*)(a1 + 24);
	if (v1)
	{
		*(_QWORD*)a1 = &off_140B5C818;
		*(_QWORD*)(a1 + 8) = off_140B5C7F8;
		*(_QWORD*)(a1 + 16) = off_140B5C7C8;
		sub_14018B900(a1, 0);
	}
	return v2;
}
// 140B5C7C8: using guessed type __int64 (__fastcall *off_140B5C7C8[4])();
// 140B5C7F8: using guessed type __int64 (__fastcall *off_140B5C7F8[3])();
// 140B5C818: using guessed type __int64 (__fastcall *off_140B5C818)();

