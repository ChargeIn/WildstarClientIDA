#include "../winhttp.h"

//----- (0000000140047730) ----------------------------------------------------
__int64 sub_140047730()
{
	int* v0; // rax
	int v1; // r8d
	void(__fastcall * **v2)(_QWORD); // rbx
	__int64 v3; // rcx
	__int64 v4; // rsi
	__int64 v5; // rdi
	int v6; // eax
	__int64 v7; // r9
	__int64 v8; // rax
	__int64 v9; // rdx
	int v11; // [rsp+48h] [rbp+10h] BYREF
	__int64 v12; // [rsp+50h] [rbp+18h] BYREF
	__int64 v13; // [rsp+58h] [rbp+20h] BYREF

	v0 = sub_14018B280(720i64, 0);
	if (v0)
		v2 = (void(__fastcall***)(_QWORD))sub_140020730((__int64)v0);
	else
		v2 = 0i64;
	if ((int)sub_140020BC0((__int64)v2, *(void(__fastcall****)(_QWORD))(qword_140C66E40 + 176), v1) < 0
		|| (int)sub_14003E380(qword_140C66E40, v2) < 0)
	{
		sub_140046640(qword_140C66E40, 501422);
	}
	else
	{
		v3 = qword_140C635F0;
		*(_DWORD*)(qword_140C66E40 + 168) = 3;
		v11 = 0;
		v11 = *(_DWORD*)(v3 + 5760);
		v4 = *(_QWORD*)(qword_140C66E40 + 176);
		v12 = *(_QWORD*)(v3 + 280);
		if (!(*(unsigned int(__fastcall**)(__int64, __int64*, __int64, int*))(*(_QWORD*)qword_140C65808 + 264i64))(
			qword_140C65808,
			&v12,
			2015i64,
			&v11))
		{
			v5 = (*(__int64 (**)(void))(*(_QWORD*)v12 + 16i64))();
			v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v12 + 32i64))(v12);
			v7 = *(_QWORD*)(v4 + 16);
			if (v7)
				(*(void(__fastcall**)(_QWORD, __int64, _QWORD))(v7 + 16))(*(_QWORD*)(v7 + 8), v5 + 4, (unsigned int)(v6 - 4));
			v13 = 0i64;
			v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v12 + 16i64))(v12);
			v9 = *(unsigned int*)(v4 + 152);
			v13 = v8;
			(*(void(__fastcall**)(__int64, __int64, __int64, __int64*))(*(_QWORD*)qword_140C65808 + 240i64))(
				qword_140C65808,
				v9,
				580i64,
				&v13);
		}
	}
	if (v2)
		(*v2)[1](v2);
	return 0i64;
}
// 14004776C: variable 'v1' is possibly undefined
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65808: using guessed type __int64 qword_140C65808;
// 140C66E40: using guessed type __int64 qword_140C66E40;

