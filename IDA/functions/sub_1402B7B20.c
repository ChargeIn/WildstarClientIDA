#include "../winhttp.h"

//----- (00000001402B7B20) ----------------------------------------------------
__int64 __fastcall sub_1402B7B20(__int64 a1, unsigned __int64 a2, __int64 a3)
{
	unsigned int v4; // esi
	LPVOID v7; // rax
	LPVOID v8; // rdi
	int v9; // ebx
	int v10; // eax
	__int64 v11; // rcx
	__int64 v12; // [rsp+30h] [rbp-48h] BYREF
	__int64 v13; // [rsp+38h] [rbp-40h] BYREF
	__int64 v14; // [rsp+40h] [rbp-38h] BYREF

	v4 = a2;
	if (!a2)
		return 2147942487i64;
	if (a2 > 0xFFFFFFFF)
		return 2147942623i64;
	v7 = sub_1402B21E0();
	v8 = v7;
	if (!v7)
		return 2147500034i64;
	v14 = 0i64;
	v9 = (*(__int64(__fastcall**)(LPVOID, __int64*))(*(_QWORD*)v7 + 112i64))(v7, &v14);
	if (v9 >= 0)
	{
		v9 = (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v14 + 128i64))(v14, a1, v4);
		if (v9 >= 0)
		{
			v12 = 0i64;
			v10 = (*(__int64(__fastcall**)(LPVOID, __int64, _QWORD, _QWORD, __int64*))(*(_QWORD*)v8 + 32i64))(
				v8,
				v14,
				0i64,
				0i64,
				&v12);
			v11 = v12;
			v9 = v10;
			if (v10 < 0)
			{
			LABEL_17:
				if (v11)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 16i64))(v11);
					v12 = 0i64;
				}
				goto LABEL_19;
			}
			v13 = 0i64;
			v9 = (*(__int64(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v12 + 104i64))(v12, 0i64, &v13);
			if (v9 >= 0)
			{
				v11 = v12;
				if (!v12)
				{
					v9 = -2147467261;
				LABEL_15:
					if (v13)
					{
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v13 + 16i64))(v13);
						v11 = v12;
						v13 = 0i64;
					}
					goto LABEL_17;
				}
				v9 = sub_1402B7430(v12, v13, a3, 0i64);
				if (v9 >= 0)
					v9 = 0;
			}
			v11 = v12;
			goto LABEL_15;
		}
	}
LABEL_19:
	if (v14)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v14 + 16i64))(v14);
	return (unsigned int)v9;
}

