//----- (000000014082CB30) ----------------------------------------------------
__int64 __fastcall sub_14082CB30(__int64 a1, _QWORD* a2, __int64 a3, int a4, unsigned int a5, int a6, int a7)
{
	__int64 result; // rax
	int v9; // r9d
	int v10; // r9d
	int v11; // [rsp+30h] [rbp-38h] BYREF
	__int64 v12; // [rsp+38h] [rbp-30h]
	int v13; // [rsp+40h] [rbp-28h]
	unsigned int v14; // [rsp+44h] [rbp-24h]
	int v15; // [rsp+48h] [rbp-20h]
	__int16 v16; // [rsp+4Ch] [rbp-1Ch]
	char v17; // [rsp+4Eh] [rbp-1Ah]
	_QWORD* v18; // [rsp+50h] [rbp-18h]

	if (a2)
	{
		v15 = a6;
		result = a5;
		v16 = 0;
		v17 = 0;
		v12 = a3;
		v13 = a7;
		v14 = a5;
		v18 = a2;
		if (a4)
		{
			v9 = a4 - 1;
			if (v9)
			{
				v10 = v9 - 1;
				if (v10)
				{
					if (v10 != 1)
						return result;
					sub_14082B4E0((__int64)qword_140C61B68, (__int64)a2, a3, a7);
					v11 = 3;
				}
				else
				{
					sub_14082EAB0((__int64)qword_140C61B68, (__int64)a2, a3, 0, a7);
					v11 = 2;
				}
			}
			else
			{
				sub_14082C3B0((__int64)qword_140C61B68, a2, a3, 1, a7);
				v11 = 1;
			}
		}
		else
		{
			sub_14082F330((__int64)qword_140C61B68, (__int64)a2, a3, a7);
			v11 = 0;
		}
		return (*(__int64(__fastcall**)(_QWORD*, int*))(*a2 + 128i64))(a2, &v11);
	}
	return result;
}

