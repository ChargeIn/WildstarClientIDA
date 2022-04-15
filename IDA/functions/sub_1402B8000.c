#include "../winhttp.h"

//----- (00000001402B8000) ----------------------------------------------------
__int64 __fastcall sub_1402B8000(__int64 a1)
{
	int v1; // eax
	__int64 v3; // rbx
	unsigned __int64 v4; // rsi
	__int64 v5; // rax
	__int64 result; // rax
	__int64 v7; // rbx
	unsigned __int64 v8; // rsi
	__int64 v9; // rax
	__int64 v10; // rbx
	unsigned __int64 v11; // rsi
	__int64 v12; // rax
	int v13; // eax
	int v14; // eax
	int v15; // eax
	int v16; // ecx
	int v17; // [rsp+20h] [rbp-48h] BYREF
	int v18; // [rsp+28h] [rbp-40h]
	__int64 v19; // [rsp+38h] [rbp-30h]
	int v20; // [rsp+40h] [rbp-28h]
	int v21; // [rsp+50h] [rbp-18h]
	int v22; // [rsp+54h] [rbp-14h]
	int v23; // [rsp+70h] [rbp+8h] BYREF

	v1 = *(_DWORD*)(a1 + 56);
	if (v1 == 1)
	{
		v10 = *(_QWORD*)(a1 + 64);
		v11 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v10 + 16i64))(v10);
		v12 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v10 + 32i64))(v10);
		if (v12)
		{
			result = sub_1402B5160(v12, v11, (__int64)&v17);
			if ((int)result < 0)
				return result;
			goto LABEL_13;
		}
		return 2147942487i64;
	}
	if (v1 != 2)
	{
		if ((unsigned int)(v1 - 3) > 2)
			goto LABEL_13;
		v3 = *(_QWORD*)(a1 + 64);
		v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 16i64))(v3);
		v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 32i64))(v3);
		if (v5)
		{
			result = sub_1402B7B20(v5, v4, (__int64)&v17);
			if ((int)result < 0)
				return result;
		LABEL_13:
			if (v22 == 2)
			{
				if (v19 != 1)
					return 2147500037i64;
				v15 = v17;
				*(_DWORD*)(a1 + 24) = 0;
				*(_DWORD*)(a1 + 32) = 1;
				*(_DWORD*)(a1 + 28) = v15;
			}
			else
			{
				if (v22 != 3)
				{
					if (v22 == 4 && v19 == 1)
					{
						*(_DWORD*)(a1 + 24) = 1;
					LABEL_26:
						v16 = v21;
						*(_DWORD*)(a1 + 40) = v20;
						*(_DWORD*)(a1 + 44) = sub_14027A000(v16);
						return 0i64;
					}
					return 2147500037i64;
				}
				if (v19 == 1)
				{
					v13 = v17;
					*(_DWORD*)(a1 + 24) = 0;
					*(_DWORD*)(a1 + 28) = v13;
					*(_DWORD*)(a1 + 32) = v18;
				}
				else
				{
					if (v19 != 6)
						return 2147500037i64;
					v14 = v17;
					*(_DWORD*)(a1 + 24) = 2;
					*(_DWORD*)(a1 + 28) = v14;
					*(_DWORD*)(a1 + 32) = v18;
				}
			}
			*(_DWORD*)(a1 + 36) = 1;
			goto LABEL_26;
		}
		return 2147942487i64;
	}
	v7 = *(_QWORD*)(a1 + 64);
	v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 16i64))(v7);
	v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 32i64))(v7);
	if (!v9 || !v8)
		return 2147942487i64;
	v23 = 0;
	result = sub_1402B5780(v9, v8, (__int64)&v17, &v23);
	if ((int)result >= 0)
		goto LABEL_13;
	return result;
}

