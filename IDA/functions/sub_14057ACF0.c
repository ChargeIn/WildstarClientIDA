//----- (000000014057ACF0) ----------------------------------------------------
__int64 __fastcall sub_14057ACF0(__int64 a1, __int64 a2, _WORD* a3)
{
	int v4; // r9d
	__int64 v6[2]; // [rsp+40h] [rbp-38h] BYREF
	__int64 v7; // [rsp+50h] [rbp-28h] BYREF
	__int64 v8; // [rsp+58h] [rbp-20h]
	void(__fastcall * v9)(_QWORD*); // [rsp+60h] [rbp-18h]
	__int64 v10; // [rsp+68h] [rbp-10h]

	v6[1] = (__int64)sub_14057AE00;
	v4 = *(_DWORD*)(qword_140C635F0 + 5760);
	v6[0] = a1;
	LODWORD(v7) = v4;
	v8 = a2;
	if ((unsigned int)sub_1403F82F0(qword_140C65898, 8, &v7, a3, 0x21u, v6, ++qword_140C8AF40))
	{
		return 1i64;
	}
	else
	{
		if (++ * (_QWORD*)(a1 + 144) == 1i64)
		{
			(**(void(__fastcall***)(__int64))a1)(a1);
			LODWORD(v7) = 0;
			v10 = 0i64;
			v8 = a1;
			v9 = sub_14057ADD0;
			sub_140195960(a1 + 72, 60000, (__int64)&v7, 4);
		}
		return 0i64;
	}
}
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C8AF40: using guessed type __int64 qword_140C8AF40;

