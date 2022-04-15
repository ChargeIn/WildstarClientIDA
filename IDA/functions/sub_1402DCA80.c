#include "../winhttp.h"

//----- (00000001402DCA80) ----------------------------------------------------
__int64 __fastcall sub_1402DCA80(unsigned __int16* a1, const __m128i* a2, __int64 a3)
{
	const __m128i* v6; // rax
	__int64 v7; // rbx
	unsigned __int16* v8; // rdx
	__int64 v9; // rax
	__int64 v10; // rdi
	bool v11; // zf
	WCHAR* v12; // rbx
	int v13; // eax
	int v15; // [rsp+48h] [rbp+10h] BYREF
	int v16; // [rsp+4Ch] [rbp+14h]
	WCHAR* v17; // [rsp+58h] [rbp+20h] BYREF

	if (!a2 || !a2->m128i_i16[0])
		return 2147942487i64;
	v6 = sub_1407DD8D8(a2, 0x5Cu);
	if (v6)
		v7 = (__int64)v6->m128i_i64 + 2;
	else
		v7 = (__int64)a2;
	v8 = a1 + 268;
	v9 = -1i64;
	do
		++v9;
	while (v8[v9]);
	v10 = (unsigned int)v9;
	if (!(unsigned int)sub_14018E3E0(v7, v8, (unsigned int)v9)
		&& (v11 = *(_WORD*)(v7 + 2 * v10) == 46, v12 = (WCHAR*)(v7 + 2 * v10), v11)
		&& (unsigned int)sub_1407DFF44(v12[1])
		&& (unsigned int)sub_1407DFF44(v12[2])
		&& (unsigned int)sub_1407DFF44(v12[3])
		&& (unsigned int)sub_1407DFF44(v12[4])
		&& v12[5] == 46
		&& (v13 = sub_1407E1968(v12 + 1, &v17, 0x10u), v17 == v12 + 5)
		&& (v15 = (unsigned __int8)v13, v16 = v13 >> 8, (unsigned __int8)v13 <= 0x80u)
		&& (unsigned int)(v13 >> 8) <= 0x80
		&& !(unsigned int)sub_14018E2C0((__int64)v17, L".area"))
	{
		return (*(__int64(__fastcall**)(unsigned __int16*, int*, __int64))(*(_QWORD*)a1 + 120i64))(a1, &v15, a3);
	}
	else
	{
		return 2147500037i64;
	}
}
// 140AF0DF0: using guessed type wchar_t aArea_0[6];

