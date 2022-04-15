#include "../winhttp.h"

//----- (00000001401B1580) ----------------------------------------------------
__int64 __fastcall sub_1401B1580(__int64 a1, int* a2, __int64 a3, int a4)
{
	__int64 v9; // rax
	__int64 v10; // rbx
	__int64 v11; // rdi
	__int64 v12[5]; // [rsp+30h] [rbp-B8h] BYREF
	__int64 v13; // [rsp+58h] [rbp-90h]
	__int64 v14; // [rsp+78h] [rbp-70h]
	__int64 v15; // [rsp+98h] [rbp-50h]
	char v16[48]; // [rsp+B0h] [rbp-38h] BYREF

	if (!a2)
		return 2147942487i64;
	(*(void (**)(void))(*(_QWORD*)a1 + 48i64))();
	v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 48i64))(a1);
	if (v9)
	{
		v10 = *(_QWORD*)(v9 + 48);
		if (v10)
		{
			while (1)
			{
				v11 = (**(__int64(__fastcall***)(__int64))v10)(v10);
				if (v11)
					break;
				v10 = *(_QWORD*)(v10 + 72);
				if (!v10)
					goto LABEL_7;
			}
		}
		else
		{
		LABEL_7:
			v11 = 0i64;
		}
	}
	else
	{
		v11 = (**(__int64(__fastcall***)(__int64))a1)(a1);
		if (!v11)
			return 2147942487i64;
	}
	if (v11)
	{
		sub_1401B0CE0((__int64)v12, v11, a2, a3, a4);
		(*(void(__fastcall**)(__int64, __int64*))(*(_QWORD*)v11 + 112i64))(v11, v12);
		v12[0] = (__int64)off_140B5F040;
		sub_14002C630((__int64)v16);
		if (v15)
			sub_14018B900(v15, 0);
		if (v14)
			sub_14018B900(v14, 0);
		if (v13)
			sub_14018B900(v13, 0);
	}
	return 0i64;
}
// 140B5F040: using guessed type __int64 (__fastcall *off_140B5F040[9])();
// 1401B1580: using guessed type char var_38[48];

