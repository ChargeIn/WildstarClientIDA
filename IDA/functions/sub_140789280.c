#include "../winhttp.h"

//----- (0000000140789280) ----------------------------------------------------
__int64 __fastcall sub_140789280(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, __int64 a6)
{
	int v6; // edx
	__int64* v7; // r8
	__int64 result; // rax
	__int64 v9; // [rsp+20h] [rbp-60h] BYREF
	int v10; // [rsp+28h] [rbp-58h]
	__int64 v11; // [rsp+2Ch] [rbp-54h]
	__int64 v12; // [rsp+34h] [rbp-4Ch]
	int v13; // [rsp+3Ch] [rbp-44h]
	__int64 v14; // [rsp+40h] [rbp-40h] BYREF
	int v15; // [rsp+48h] [rbp-38h]
	__int64 v16; // [rsp+4Ch] [rbp-34h]
	__int64 v17; // [rsp+54h] [rbp-2Ch]
	int v18; // [rsp+5Ch] [rbp-24h]
	__int64 v19; // [rsp+60h] [rbp-20h] BYREF
	int v20; // [rsp+68h] [rbp-18h]
	__int64 v21; // [rsp+6Ch] [rbp-14h]
	__int64 v22; // [rsp+74h] [rbp-Ch]
	int v23; // [rsp+7Ch] [rbp-4h]

	if (!a4 && a6)
	{
		v6 = *(_DWORD*)(a6 + 48);
		if (v6)
		{
			if (v6 == 1)
			{
				v15 = 1065353216;
				v14 = 1120i64;
				v16 = 0i64;
				v17 = 0i64;
				v18 = 0;
				v7 = &v14;
			}
			else
			{
				v10 = 1065353216;
				v9 = 1118i64;
				v11 = 0i64;
				v12 = 0i64;
				v13 = 0;
				v7 = &v9;
			}
		}
		else
		{
			v20 = 1065353216;
			v19 = 1118i64;
			v21 = 0i64;
			v22 = 0i64;
			v23 = 0;
			v7 = &v19;
		}
		return (*(__int64(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)a1 + 584i64))(a1, 0i64, v7);
	}
	return result;
}

