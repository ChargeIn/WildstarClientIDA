//----- (00000001408FBDDC) ----------------------------------------------------
_WORD* __fastcall sub_1408FBDDC(_WORD* a1, _WORD* a2)
{
	_QWORD* v4; // rax
	_QWORD* v5; // r8
	_WORD* v6; // rax
	__int16 v7; // dx
	_WORD* result; // rax
	_WORD* v9; // rcx
	__int16 v10; // dx

	v4 = sub_1407E3D94();
	v5 = v4;
	if (!a1)
		a1 = (_WORD*)v4[5];
	while (*a1)
	{
		v6 = a2;
		if (*a2)
		{
			v7 = *a2;
			do
			{
				if (v7 == *a1)
					break;
				v7 = *++v6;
			} while (*v6);
		}
		if (!*v6)
			break;
		++a1;
	}
	result = a1;
	while (*a1)
	{
		v9 = a2;
		if (*a2)
		{
			v10 = *a2;
			do
			{
				if (v10 == *a1)
					break;
				v10 = *++v9;
			} while (*v9);
		}
		if (*v9)
		{
			*a1++ = 0;
			break;
		}
		++a1;
	}
	v5[5] = a1;
	if (result == a1)
		return 0i64;
	return result;
}

