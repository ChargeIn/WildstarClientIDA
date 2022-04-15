#include "../winhttp.h"

//----- (00000001402B7950) ----------------------------------------------------
__int64 __fastcall sub_1402B7950(unsigned int* a1, __int64 a2, _QWORD* a3, __int64 a4)
{
	LPVOID v8; // rax
	int v9; // ebx
	__int64 v10; // rdx
	__int64 v11; // [rsp+30h] [rbp-31h] BYREF
	__int64 v12; // [rsp+38h] [rbp-29h] BYREF
	__int64* v13; // [rsp+40h] [rbp-21h] BYREF
	__int16 v14[12]; // [rsp+48h] [rbp-19h] BYREF
	__int64 v15[5]; // [rsp+60h] [rbp-1h] BYREF

	if (!a4)
		return 2147942487i64;
	v8 = sub_1402B21E0();
	if (!v8)
		return 2147500034i64;
	v12 = 0i64;
	v9 = (*(__int64(__fastcall**)(LPVOID, _QWORD*, _QWORD, __int64*))(*(_QWORD*)v8 + 64i64))(v8, a3, 0i64, &v12);
	if (v9 >= 0)
	{
		v9 = (*(__int64(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v12 + 24i64))(v12, a4, 2i64);
		if (v9 >= 0)
		{
			v13 = 0i64;
			v11 = 0i64;
			v9 = (*(__int64(__fastcall**)(__int64, __int64**, __int64*))(*(_QWORD*)v12 + 80i64))(v12, &v13, &v11);
			if (v9 >= 0)
			{
				if (*a3 == 0x4188FCFE0AF1D87Ei64 && a3[1] == 0xE3CB716490A7EBBDui64)
				{
					v15[0] = 0i64;
					v15[1] = 0i64;
					v15[3] = 0i64;
					v15[4] = 0i64;
					v15[2] = (__int64)L"EnableV5Header32bppBGRA";
					v14[0] = 11;
					v14[4] = -1;
					if ((*(int(__fastcall**)(__int64, __int64, __int64*, __int16*))(*(_QWORD*)v11 + 32i64))(
						v11,
						1i64,
						v15,
						v14) < 0)
					{
						if (v11)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 16i64))(v11);
						v11 = 0i64;
					}
				}
				v9 = sub_1402B76C0(a1, v10, v13);
				if (v9 >= 0)
				{
					v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v12 + 88i64))(v12);
					if (v9 >= 0)
						v9 = 0;
				}
			}
			if (v11)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 16i64))(v11);
				v11 = 0i64;
			}
			if (v13)
			{
				(*(void(__fastcall**)(__int64*))(*v13 + 16))(v13);
				v13 = 0i64;
			}
		}
	}
	if (v12)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 16i64))(v12);
	return (unsigned int)v9;
}
// 1402B7A96: variable 'v10' is possibly undefined
// 140964790: using guessed type __int64 qword_140964790;
// 140AECFA0: using guessed type wchar_t aEnablev5header[24];

