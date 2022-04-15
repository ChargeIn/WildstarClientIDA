//----- (0000000140791BD0) ----------------------------------------------------
unsigned __int8* __fastcall sub_140791BD0(_QWORD* a1, unsigned __int8* a2, _BYTE* a3)
{
	unsigned __int8* i; // rbx
	int v7; // ecx

	for (i = a2; *i; ++i)
	{
		if (!sub_1407DE0B4((__int64)a0, *i))
			break;
	}
	if ((unsigned __int64)(i - a2) >= 6)
		sub_140056830(a1, (unsigned __int64*)aInvalidFormatR);
	if ((unsigned int)sub_1407DE874(*i))
		++i;
	if ((unsigned int)sub_1407DE874(*i))
		++i;
	if (*i == 46)
	{
		v7 = *++i;
		if ((unsigned int)sub_1407DE874(v7))
			++i;
		if ((unsigned int)sub_1407DE874(*i))
			++i;
	}
	if ((unsigned int)sub_1407DE874(*i))
		sub_140056830(a1, (unsigned __int64*)aInvalidFormatW);
	*a3 = 37;
	sub_1407DEB70((__int64)(a3 + 1), a2, i - a2 + 1);
	a3[i - a2 + 2] = 0;
	return i;
}

