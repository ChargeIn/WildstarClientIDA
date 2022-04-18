#include "../winhttp.h"

//----- (0000000140046340) ----------------------------------------------------
__int64 __fastcall sub_140046340(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rsi
	__int64 v4; // rax
	__int64 v5; // rdi
	int v6; // eax
	__int64 v7; // r9
	__int64 v8; // rax
	__int64 v9; // rdx
	unsigned int v10; // esi
	__int64 v11; // rdx
	__int64 v12; // rcx
	unsigned int v13; // r8d
	__int64 v14; // rdx
	int* v15; // rax
	int v16; // r8d
	void(__fastcall * **v17)(_QWORD); // rdi
	__int64 v18; // rcx
	__int64 v19; // rcx
	__int64 v20; // [rsp+20h] [rbp-58h] BYREF
	__int64 v21; // [rsp+28h] [rbp-50h] BYREF
	__int64 v22; // [rsp+30h] [rbp-48h] BYREF
	__int64 v23; // [rsp+38h] [rbp-40h]
	__int64 v24; // [rsp+40h] [rbp-38h]
	__int64 v25; // [rsp+48h] [rbp-30h]
	__int64 v26; // [rsp+50h] [rbp-28h]
	__int64 v27; // [rsp+58h] [rbp-20h]

	if (*(_DWORD*)(a1 + 168) != 2)
		return 0i64;
	v3 = *(_QWORD*)(a1 + 184);
	v22 = 0i64;
	v23 = 0i64;
	v24 = 0i64;
	v26 = 0i64;
	v27 = 0i64;
	v25 = 0i64;
	HIDWORD(v22) = *(_DWORD*)(qword_140C635F0 + 5688);
	v23 = *(_QWORD*)(qword_140C635F0 + 5692);
	LODWORD(v24) = *(_DWORD*)(qword_140C635F0 + 5700);
	v4 = *(_QWORD*)(qword_140C635F0 + 5744);
	LODWORD(v27) = 3;
	v26 = v4;
	LODWORD(v22) = *(_DWORD*)(qword_140C635F0 + 5736);
	v20 = *(_QWORD*)(qword_140C635F0 + 280);
	if (!(*(unsigned int(__fastcall**)(__int64, __int64*, __int64, __int64*))(*(_QWORD*)qword_140C65808 + 264i64))(
		qword_140C65808,
		&v20,
		1423i64,
		&v22))
	{
		v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v20 + 16i64))(v20);
		v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v20 + 32i64))(v20);
		v7 = *(_QWORD*)(v3 + 16);
		if (v7)
			(*(void(__fastcall**)(_QWORD, __int64, _QWORD))(v7 + 16))(*(_QWORD*)(v7 + 8), v5 + 4, (unsigned int)(v6 - 4));
		v21 = 0i64;
		v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v20 + 16i64))(v20);
		v9 = *(unsigned int*)(v3 + 152);
		v21 = v8;
		(*(void(__fastcall**)(__int64, __int64, __int64, __int64*))(*(_QWORD*)qword_140C65808 + 240i64))(
			qword_140C65808,
			v9,
			580i64,
			&v21);
	}
	v10 = 0;
	v11 = 0x718DA9074F2DEB91i64;
	v12 = 0i64;
	v13 = 0;
	do
	{
		++v13;
		v14 = *(unsigned __int8*)(v12 + qword_140C635F0 + 5688) + v11;
		v12 = v13;
		v11 = 2860486313i64 * v14;
	} while (v13 < 0x10ui64);
	result = sub_14002A050(*(_QWORD*)(a1 + 184), v11, 2860486313i64 * (v11 + *(_QWORD*)(qword_140C635F0 + 5680)));
	if ((int)result >= 0)
	{
		v15 = sub_14018B280(720i64, 0);
		if (v15)
			v17 = (void(__fastcall***)(_QWORD))sub_140020730((__int64)v15);
		else
			v17 = 0i64;
		if ((int)sub_140020BC0((__int64)v17, *(void(__fastcall****)(_QWORD))(a1 + 184), v16) < 0
			|| (int)sub_14003E380(a1, v17) < 0)
		{
			v10 = sub_140046640(a1, 501422);
		}
		else
		{
			*(_DWORD*)(a1 + 168) = 3;
			v18 = *(_QWORD*)(a1 + 176);
			if (v18)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v18 + 8i64))(v18);
				*(_QWORD*)(a1 + 176) = 0i64;
			}
			v19 = *(_QWORD*)(a1 + 72);
			if (v19)
				Apollo_LUAEvent(v19, "NetworkStatus", &unk_1409D01F2);
		}
		if (v17)
			(*v17)[1](v17);
		return v10;
	}
	return result;
}
// 14004651F: variable 'v16' is possibly undefined
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65808: using guessed type __int64 qword_140C65808;

