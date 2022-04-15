//----- (00000001403EC5A0) ----------------------------------------------------
__int64 __fastcall sub_1403EC5A0(__int64 a1, _DWORD* a2)
{
	__int64 result; // rax
	__int64 v5; // rcx
	int v6; // edx
	__int16* v7; // rax
	__int64 v8; // rdx
	__int64 v9; // rcx

	if (!a2)
		return 2147942487i64;
	if (*a2 != 24)
		return 1i64;
	sub_1403FA730(a1);
	sub_1403FA3D0(a1);
	sub_140016480(qword_140C635F0);
	sub_14039F920(a1);
	v5 = (unsigned int)a2[10];
	v6 = 196357;
	if ((_DWORD)v5)
	{
		v5 = (unsigned int)(v5 - 1);
		if ((_DWORD)v5)
		{
			v5 = (unsigned int)(v5 - 1);
			if ((_DWORD)v5)
			{
				v5 = (unsigned int)(v5 - 1);
				if (!(_DWORD)v5)
					v6 = 405366;
			}
			else
			{
				v6 = 405365;
			}
		}
		else
		{
			v6 = 405363;
		}
	}
	else
	{
		v6 = 405362;
	}
	v7 = sub_14034BDD0(v5, v6);
	result = sub_1400481B0(a1, (__int64)v7, 0i64);
	if ((int)result >= 0)
	{
		v8 = *(_QWORD*)(a1 + 31016);
		if (v8)
		{
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65808 + 40i64))(
				qword_140C65808,
				*(unsigned int*)(v8 + 152));
			v9 = *(_QWORD*)(a1 + 31016);
			if (v9)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
				*(_QWORD*)(a1 + 31016) = 0i64;
			}
		}
		return 0i64;
	}
	return result;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65808: using guessed type __int64 qword_140C65808;

