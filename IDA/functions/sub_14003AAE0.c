//----- (000000014003AAE0) ----------------------------------------------------
_QWORD* __fastcall sub_14003AAE0(_QWORD* a1, unsigned __int64 a2, unsigned __int64 a3)
{
	unsigned __int64 v3; // rdi
	bool v5; // cf
	_QWORD* v7; // rax
	unsigned __int64 v8; // rdi

	v3 = a1[2];
	if (v3 < a2)
		sub_1407DB458("invalid string position");
	if (v3 - a2 > a3)
	{
		if (a3)
		{
			if (a1[3] < 0x10ui64)
				v7 = a1;
			else
				v7 = (_QWORD*)*a1;
			v8 = v3 - a3;
			if (v8 != a2)
				sub_1407DB590((int*)((char*)v7 + a2), (int*)((char*)v7 + a2 + a3), v8 - a2);
			v5 = a1[3] < 0x10ui64;
			a1[2] = v8;
			if (!v5)
			{
				*(_BYTE*)(*a1 + v8) = 0;
				return a1;
			}
			*((_BYTE*)a1 + v8) = 0;
		}
		return a1;
	}
	else
	{
		v5 = a1[3] < 0x10ui64;
		a1[2] = a2;
		if (v5)
			*((_BYTE*)a1 + a2) = 0;
		else
			*(_BYTE*)(*a1 + a2) = 0;
		return a1;
	}
}

