//----- (000000014063E3D0) ----------------------------------------------------
__int64 sub_14063E3D0()
{
	__int64 v0; // rcx
	__int64 result; // rax

	v0 = qword_140C65898;
	if (*(_QWORD*)(qword_140C65898 + 25744))
	{
		if (*(_DWORD*)(qword_140C65898 + 25600))
		{
			*(_DWORD*)(qword_140C65898 + 25600) = 0;
			return sub_1400EA3E0(*(_QWORD*)(v0 + 29504), "AlternateTargetUnitChanged", L"U", 0i64);
		}
	}
	return result;
}
// 1409EDFDC: using guessed type wchar_t aU_18[2];
// 140C65898: using guessed type __int64 qword_140C65898;

