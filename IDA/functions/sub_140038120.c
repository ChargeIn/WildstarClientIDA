//----- (0000000140038120) ----------------------------------------------------
__int64 __fastcall sub_140038120(__int64 a1, __int64 a2)
{
	__int64 result; // rax
	__int64 v5; // rsi
	__int64 v6; // rax
	__int64 v7; // rbx
	int v8; // eax
	__int64 v9; // r9
	__int64 v10; // rax
	__int64 v11; // rdx
	void(__fastcall * **v12)(_QWORD); // rbx
	__int64 v13; // rdx
	__int64 v14; // rcx
	unsigned int v15; // r8d
	__int64 v16; // rdx
	int* v17; // rax
	int v18; // r8d
	__int64 v19; // rcx
	bool v20; // zf
	__int64 v21; // [rsp+20h] [rbp-58h] BYREF
	__int64 v22; // [rsp+28h] [rbp-50h] BYREF
	__int64 v23; // [rsp+30h] [rbp-48h] BYREF
	__int64 v24; // [rsp+38h] [rbp-40h]
	__int64 v25; // [rsp+40h] [rbp-38h]
	__int64 v26; // [rsp+48h] [rbp-30h]
	__int64 v27; // [rsp+50h] [rbp-28h]
	__int64 v28; // [rsp+58h] [rbp-20h]

	if (*(_DWORD*)(a1 + 168) != 10)
		return 0i64;
	v23 = 0i64;
	v24 = 0i64;
	v25 = 0i64;
	v27 = 0i64;
	v28 = 0i64;
	v26 = 0i64;
	HIDWORD(v23) = *(_DWORD*)(qword_140C635F0 + 5688);
	LODWORD(v24) = *(_DWORD*)(qword_140C635F0 + 5692);
	v5 = *(_QWORD*)(a1 + 240);
	HIDWORD(v24) = *(_DWORD*)(qword_140C635F0 + 5696);
	LODWORD(v25) = *(_DWORD*)(qword_140C635F0 + 5700);
	v6 = *(_QWORD*)(qword_140C635F0 + 5744);
	LODWORD(v28) = 3;
	v27 = v6;
	LODWORD(v23) = *(_DWORD*)(qword_140C635F0 + 5736);
	v21 = *(_QWORD*)(qword_140C635F0 + 280);
	if (!(*(unsigned int(__fastcall**)(__int64, __int64*, __int64, __int64*))(*(_QWORD*)qword_140C65808 + 264i64))(
		qword_140C65808,
		&v21,
		1423i64,
		&v23))
	{
		v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v21 + 16i64))(v21);
		v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v21 + 32i64))(v21);
		v9 = *(_QWORD*)(v5 + 16);
		if (v9)
			(*(void(__fastcall**)(_QWORD, __int64, _QWORD))(v9 + 16))(*(_QWORD*)(v9 + 8), v7 + 4, (unsigned int)(v8 - 4));
		v22 = 0i64;
		v10 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v21 + 16i64))(v21);
		v11 = *(unsigned int*)(v5 + 152);
		v22 = v10;
		(*(void(__fastcall**)(__int64, __int64, __int64, __int64*))(*(_QWORD*)qword_140C65808 + 240i64))(
			qword_140C65808,
			v11,
			580i64,
			&v22);
	}
	v12 = 0i64;
	v13 = 0x718DA9074F2DEB91i64;
	v14 = 0i64;
	v15 = 0;
	do
	{
		++v15;
		v16 = *(unsigned __int8*)(v14 + qword_140C635F0 + 5688) + v13;
		v14 = v15;
		v13 = 2860486313i64 * v16;
	} while (v15 < 0x10ui64);
	result = sub_14002A050(*(_QWORD*)(a1 + 240), v13, 2860486313i64 * (v13 + *(_QWORD*)(qword_140C635F0 + 5680)));
	if ((int)result >= 0)
	{
		v17 = sub_14018B280(720i64, 8u);
		if (v17)
			v12 = (void(__fastcall***)(_QWORD))sub_140020730((__int64)v17);
		if ((int)sub_140020BC0((__int64)v12, *(void(__fastcall****)(_QWORD))(a1 + 240), v18) < 0
			|| (int)sub_14003E380(a1, v12) < 0)
		{
			sub_1400383A0(a1, 501422, 0);
		}
		else
		{
			v20 = qword_140C65908 == 0;
			*(_DWORD*)(qword_140C635F0 + 5760) = *(_DWORD*)(a2 + 4);
			if (!v20)
				sub_14044DB80(v19);
			*(_DWORD*)(a1 + 168) = 11;
			sub_14003E470(a1, 538780, 0i64);
		}
		if (v12)
			(*v12)[1](v12);
		return 0i64;
	}
	return result;
}
// 1400382FE: variable 'v18' is possibly undefined
// 140038330: variable 'v19' is possibly undefined
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65808: using guessed type __int64 qword_140C65808;
// 140C65908: using guessed type __int64 qword_140C65908;

