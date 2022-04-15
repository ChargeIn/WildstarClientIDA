#include "../winhttp.h"

//----- (0000000140047E50) ----------------------------------------------------
__int64 __fastcall sub_140047E50(__int64 a1, float a2, __int64 a3)
{
	__int64 result; // rax
	float v5; // xmm2_4
	float v6; // xmm3_4
	__int64 v7; // rax
	int v8; // xmm0_4
	__int64 v9; // rbx
	int v10; // eax
	__int64 v11; // r9
	__int64 v12; // rax
	__int64 v13; // rdx
	__int64 v14; // [rsp+30h] [rbp+8h] BYREF
	char v15; // [rsp+38h] [rbp+10h] BYREF
	__int64 v16; // [rsp+48h] [rbp+20h] BYREF

	v14 = a1;
	result = (unsigned int)dword_140C8B438;
	v5 = *(float*)&dword_140C7F928 + a2;
	v6 = *(float*)&dword_140C7F92C + a2;
	*(float*)&dword_140C7F928 = *(float*)&dword_140C7F928 + a2;
	*(float*)&dword_140C7F92C = *(float*)&dword_140C7F92C + a2;
	if ((dword_140C8B438 & 1) != 0)
	{
		v8 = dword_140C8B43C;
	}
	else
	{
		dword_140C8B438 |= 1u;
		v7 = sub_140200220(0x20Du);
		if (v7)
			result = *(unsigned int*)(v7 + 4);
		else
			result = 60000i64;
		v6 = *(float*)&dword_140C7F92C;
		v5 = *(float*)&dword_140C7F928;
		*(float*)&v8 = (float)(int)result * 0.001;
		dword_140C8B43C = v8;
	}
	if (v6 > *(float*)&v8 && v5 < *(float*)&v8)
	{
		v15 = 0;
		dword_140C7F92C = 0;
		v14 = *(_QWORD*)(qword_140C635F0 + 280);
		result = (*(__int64(__fastcall**)(__int64, __int64*, __int64, char*))(*(_QWORD*)qword_140C65808 + 264i64))(
			qword_140C65808,
			&v14,
			577i64,
			&v15);
		if (!(_DWORD)result)
		{
			v9 = (*(__int64 (**)(void))(*(_QWORD*)v14 + 16i64))();
			v10 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v14 + 32i64))(v14);
			v11 = *(_QWORD*)(a3 + 16);
			if (v11)
				(*(void(__fastcall**)(_QWORD, __int64, _QWORD))(v11 + 16))(
					*(_QWORD*)(v11 + 8),
					v9 + 4,
					(unsigned int)(v10 - 4));
			v16 = 0i64;
			v12 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v14 + 16i64))(v14);
			v13 = *(unsigned int*)(a3 + 152);
			v16 = v12;
			return (*(__int64(__fastcall**)(__int64, __int64, __int64, __int64*))(*(_QWORD*)qword_140C65808 + 240i64))(
				qword_140C65808,
				v13,
				580i64,
				&v16);
		}
	}
	return result;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65808: using guessed type __int64 qword_140C65808;
// 140C7F928: using guessed type int dword_140C7F928;
// 140C7F92C: using guessed type int dword_140C7F92C;
// 140C8B438: using guessed type int dword_140C8B438;
// 140C8B43C: using guessed type int dword_140C8B43C;

