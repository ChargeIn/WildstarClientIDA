//----- (00000001407E4734) ----------------------------------------------------
__int16* sub_1407E4734()
{
	__int16* v0; // rcx
	BOOL v1; // edx

	v0 = (__int16*)qword_140DC6340;
	v1 = 0;
	if (!qword_140DC6340)
		v0 = &word_140B7B704;
	while (1)
	{
		if ((unsigned __int16)*v0 <= 0x20u)
		{
			if (!*v0)
				return v0;
			if (!v1)
				break;
		}
		if (*v0 == 34)
			v1 = !v1;
		++v0;
	}
	while (*v0 && (unsigned __int16)*v0 <= 0x20u)
		++v0;
	return v0;
}
// 140B7B704: using guessed type __int16 word_140B7B704;
// 140DC6340: using guessed type __int64 qword_140DC6340;

