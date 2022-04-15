//----- (000000014056B5A0) ----------------------------------------------------
__int64 sub_14056B5A0()
{
	__int64 v0; // rcx
	bool v1; // zf
	__int64 result; // rax

	v0 = qword_140C65898;
	if (qword_140C65898)
	{
		v1 = qword_140C65B78 == 0;
		*(_DWORD*)(qword_140C65898 + 28568) = 1;
		if (!v1)
		{
			sub_140575DD0();
			v0 = qword_140C65898;
		}
		return sub_1400EA3E0(*(_QWORD*)(v0 + 29504), "PlayerPathRefresh", byte_1409D10FF);
	}
	return result;
}
// 1409D10FF: using guessed type _BYTE byte_1409D10FF[67];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B78: using guessed type __int64 qword_140C65B78;

