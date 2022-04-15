#include "../winhttp.h"

//----- (00000001402B7CA0) ----------------------------------------------------
__int64 __fastcall sub_1402B7CA0(__int64 a1, unsigned __int64 a2, _QWORD* a3, _QWORD* a4)
{
	unsigned int v6; // r14d
	LPVOID v9; // rsi
	int v10; // ebx
	__int64 v11; // [rsp+30h] [rbp-59h] BYREF
	__int64 v12; // [rsp+38h] [rbp-51h] BYREF
	__int64 v13; // [rsp+40h] [rbp-49h] BYREF
	__int64 v14[7]; // [rsp+48h] [rbp-41h] BYREF
	__int64 v15[2]; // [rsp+80h] [rbp-9h] BYREF

	v6 = a2;
	if (!a2)
		return 2147942487i64;
	if (a2 > 0xFFFFFFFF)
		return 2147942623i64;
	v9 = sub_1402B21E0();
	if (!v9)
		return 2147500034i64;
	sub_1402B34D0(a4);
	v13 = 0i64;
	v10 = (*(__int64(__fastcall**)(LPVOID, __int64*))(*(_QWORD*)v9 + 112i64))(v9, &v13);
	if (v10 >= 0)
	{
		v10 = (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v13 + 128i64))(v13, a1, v6);
		if (v10 >= 0)
		{
			v12 = 0i64;
			v10 = (*(__int64(__fastcall**)(LPVOID, __int64, _QWORD, _QWORD, __int64*))(*(_QWORD*)v9 + 32i64))(
				v9,
				v13,
				0i64,
				0i64,
				&v12);
			if (v10 >= 0)
			{
				v11 = 0i64;
				v10 = (*(__int64(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v12 + 104i64))(v12, 0i64, &v11);
				if (v10 >= 0)
				{
					v15[0] = 0i64;
					v15[1] = 0i64;
					if (v12)
					{
						v10 = sub_1402B7430(v12, v11, (__int64)v14, v15);
						if (v10 >= 0)
						{
							if (v11)
							{
								v10 = sub_1402B7500((__int64)v14, v15, v11, (__int64)a4);
								if (v10 >= 0)
								{
									if (a3)
									{
										*a3 = v14[0];
										a3[1] = v14[1];
										a3[2] = v14[2];
										a3[3] = v14[3];
										a3[4] = v14[4];
										a3[5] = v14[5];
										a3[6] = v14[6];
									}
									v10 = 0;
								}
								else
								{
									sub_1402B34D0(a4);
								}
							}
							else
							{
								v10 = -2147467261;
								sub_1402B34D0(a4);
							}
						}
					}
					else
					{
						v10 = -2147467261;
					}
				}
				if (v11)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 16i64))(v11);
					v11 = 0i64;
				}
			}
			if (v12)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 16i64))(v12);
				v12 = 0i64;
			}
		}
	}
	if (v13)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v13 + 16i64))(v13);
	return (unsigned int)v10;
}

