//----- (000000014049F5B0) ----------------------------------------------------
__int64 __fastcall sub_14049F5B0(__int64 a1, __int64 a2, int a3, int a4, unsigned int a5, __int64 a6)
{
	int v6; // eax
	__int64 v8; // rsi
	int v9; // eax
	__int64 v10; // rax
	unsigned int v11; // ebx
	unsigned int v12; // r10d
	__int64 v13; // r11
	int v14; // edi

	v6 = *(_DWORD*)(a2 + 128);
	v8 = a2;
	if ((v6 == 20 || v6 == 23) && ((v8 = a6) == 0 || (v9 = *(_DWORD*)(a6 + 128), v9 == 20) || v9 == 23)
		|| (v10 = sub_1405A8A40(a1, a4)) == 0)
	{
		if (a3 == 2)
			return 1i64;
	}
	else
	{
		v11 = 0;
		if ((unsigned int)sub_140552F50(v10))
			v12 = sub_140551730(v13, a5, *(_DWORD*)(v8 + 13816));
		v14 = a3 - 1;
		if (!v14)
			return v12;
		if (v14 == 1)
		{
			LOBYTE(v11) = v12 == 0;
			return v11;
		}
	}
	return 0i64;
}
// 14049F61E: variable 'v13' is possibly undefined
// 14049F631: variable 'v12' is possibly undefined

