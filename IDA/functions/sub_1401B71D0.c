#include "../winhttp.h"

//----- (00000001401B71D0) ----------------------------------------------------
__int64 __fastcall sub_1401B71D0(__int64 a1, const __m128i* a2, __int64 a3)
{
	int v4; // eax
	__int64 v5; // rbx
	int v6; // r14d
	unsigned __int64 v7; // rax
	unsigned __int64 v8; // r15
	unsigned __int64 v9; // rsi
	int* v10; // rax
	__int64 v11; // rbp
	__int64 v12; // rdi
	__int64 v14; // [rsp+30h] [rbp-C8h] BYREF
	int v15[5]; // [rsp+40h] [rbp-B8h] BYREF
	__int64 v16; // [rsp+54h] [rbp-A4h]
	__int16 v17; // [rsp+5Ch] [rbp-9Ch]
	__int64 v18; // [rsp+A0h] [rbp-58h]

	if (!a2 || !a3)
		return 2147942487i64;
	v14 = 0i64;
	v4 = sub_1401B5B50(*(__int64*)&qword_140C63788, a2, 1i64, 3, &v14);
	v5 = v14;
	v6 = v4;
	if (v4 >= 0)
	{
		v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v14 + 24i64))(v14);
		v8 = 0x100000i64;
		v9 = v7;
		if (v7 < 0x100000)
			v8 = v7;
		if (v8)
		{
			v10 = sub_14018B280(v8 + 16, 0);
			if (v10)
			{
				v11 = (__int64)(v10 + 4);
				*(_QWORD*)v10 = &off_140B5F110;
			}
			else
			{
				v11 = 16i64;
			}
		}
		else
		{
			v11 = 0i64;
		}
		v16 = 0i64;
		v17 = 0;
		v15[0] = 1732584193;
		v15[1] = -271733879;
		v15[2] = -1732584194;
		v15[3] = 271733878;
		v15[4] = -1009589776;
		v18 = 0i64;
		if (v9)
		{
			while (1)
			{
				v12 = v8;
				if (v9 < v8)
					v12 = v9;
				v6 = (*(__int64(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v5 + 64i64))(v5, v11, v12);
				if (v6 < 0)
					break;
				if (v12)
					sub_1401C8C20((__int64)v15, (_BYTE*)v11, v12);
				v9 -= v12;
				if (!v9)
					goto LABEL_18;
			}
		}
		else
		{
		LABEL_18:
			sub_1401C8B70((__int64)v15, a3);
			v6 = 0;
		}
		if (v11)
			(**(void(__fastcall***)(__int64))(v11 - 16))(v11 - 16);
	}
	if (v5)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
	return (unsigned int)v6;
}
// 140B5F110: using guessed type __int64 (__fastcall *off_140B5F110)();

