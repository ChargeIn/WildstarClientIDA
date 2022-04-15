#include "../winhttp.h"

//----- (00000001403991B0) ----------------------------------------------------
__int64 __fastcall sub_1403991B0(__int64 a1, int* a2, __int64 a3)
{
	__int64 v7; // rax
	__int64 v8; // rcx
	__int64* v9; // rsi
	int v10; // edx
	__int64 v11; // r9
	int v12; // eax
	unsigned int v13; // ebx
	unsigned int v14; // eax
	int v15; // eax
	__int64 v16; // [rsp+40h] [rbp-C0h] BYREF
	__int64 v17; // [rsp+48h] [rbp-B8h]
	__int64 v18; // [rsp+50h] [rbp-B0h]
	__int64 v19[2]; // [rsp+58h] [rbp-A8h] BYREF
	int v20; // [rsp+68h] [rbp-98h]
	__int64 v21; // [rsp+6Ch] [rbp-94h]
	int v22; // [rsp+74h] [rbp-8Ch]
	__int64 v23; // [rsp+78h] [rbp-88h]
	unsigned int v24[7]; // [rsp+90h] [rbp-70h] BYREF
	int v25; // [rsp+ACh] [rbp-54h]
	int v26[43]; // [rsp+B4h] [rbp-4Ch] BYREF
	int v27; // [rsp+190h] [rbp+90h] BYREF
	__int64 v28; // [rsp+1A8h] [rbp+A8h] BYREF

	if (*(_DWORD*)(*(_QWORD*)(a1 + 25744) + 460i64))
	{
		sub_1403A2550(a1);
		return 2i64;
	}
	else
	{
		v7 = 0i64;
		if (!qword_140C7DE20)
			return 21i64;
		while (1)
		{
			v8 = *(_QWORD*)(qword_140C7DE18 + 8 * v7);
			if (*(_DWORD*)(v8 + 16) == 3)
				break;
			if (++v7 >= (unsigned __int64)qword_140C7DE20)
				return 21i64;
		}
		v9 = *(__int64**)(qword_140C7DE18 + 8 * v7);
		if (v8)
		{
			v10 = **(_DWORD**)(a3 + 112);
			v11 = *(_QWORD*)(a1 + 120);
			v19[0] = 0i64;
			v21 = 0i64;
			v20 = 0;
			v22 = 96;
			v19[1] = 0i64;
			v12 = sub_1403986F0((__int64)v19, v10, v11, v11, 0i64, 0i64, (__int64)v19, 0);
			v13 = v12;
			if (!v12 || v12 == 317)
			{
				sub_1407E4830((int*)v24, 0i64, 0xC8ui64);
				v25 = *(_DWORD*)(*(_QWORD*)(a1 + 120) + 8i64);
				v26[0] = v25;
				v26[13] = 1;
				v27 = 0;
				v14 = sub_1403988D0(a1, v24, a3, 0i64, v26, &v28, &v27);
				v13 = v14;
				if (!v14 || v14 == 317)
				{
					v18 = 0i64;
					v16 = 0i64;
					v17 = 0i64;
					v15 = *a2;
					HIDWORD(v18) = *(_DWORD*)(v28 + 96);
					LODWORD(v18) = v15;
					LODWORD(v23) = *(_DWORD*)(qword_140C635F0 + 5760);
					v17 = *v9;
					v16 = v23;
					sub_1403F4900(a1, 0x94Fu, (__int64)&v16);
					v13 = 0;
				}
			}
			else
			{
				sub_1403A12A0(a1, v12, a3, 0);
			}
			if (v19[0])
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v19[0] - 16) + 8i64))(v19[0] - 16);
			return v13;
		}
		else
		{
			return 21i64;
		}
	}
}
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;
// 1403991B0: using guessed type unsigned int var_F0[7];

