//----- (000000014056B530) ----------------------------------------------------
__int64 __fastcall sub_14056B530(__int64 a1)
{
	__int64 v2; // rcx
	bool v3; // zf
	__int64 result; // rax

	v2 = qword_140C65898;
	if (qword_140C65898 && a1)
	{
		v3 = qword_140C65B78 == 0;
		*(_DWORD*)(qword_140C65898 + 28568) = 1;
		if (!v3)
		{
			sub_140575DD0();
			v2 = qword_140C65898;
		}
		return sub_1400EA3E0(*(_QWORD*)(v2 + 29504), "PlayerPathMissionUpdate", L"p", a1);
	}
	return result;
}
// 1409ED594: using guessed type wchar_t aP[2];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B78: using guessed type __int64 qword_140C65B78;

