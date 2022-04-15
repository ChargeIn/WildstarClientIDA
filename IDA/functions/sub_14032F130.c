#include "../winhttp.h"

//----- (000000014032F130) ----------------------------------------------------
void __fastcall sub_14032F130(__int64 a1, int a2)
{
	__int64 v2; // r8
	__int64 v4; // rax
	__int64 v5; // rdi
	__int64 v6; // rsi
	unsigned __int64 v7; // r9
	__int64 v8; // r8
	__int64 v9; // r10
	__int64 v10; // rcx
	__int64 v11; // rax
	int v12; // edx
	unsigned __int64 v13; // rcx
	_DWORD* v14; // rax
	__int64 v15; // rax
	float v16; // xmm6_4
	__int64 v17; // rbp
	__int64 v18; // rsi
	unsigned __int64 v19; // r11
	__int64 v20; // rdi
	__int64 v21; // r8
	__int64 v22; // rcx
	__int64 v23; // rax
	int v24; // edx
	unsigned __int64 v25; // rcx
	_DWORD* v26; // rax
	__int64 v27; // r10
	__int64 v28; // r11
	__int64 v29; // r9
	float v30; // xmm1_4

	v2 = *(_QWORD*)(a1 + 416);
	if (*(_WORD*)(v2 + 8) == 8)
		goto LABEL_20;
	if (*(_WORD*)(v2 + 8) == 9)
		goto LABEL_6;
	if (*(_WORD*)(v2 + 8) != 10)
	{
		if (*(_WORD*)(v2 + 8) != 11)
			return;
		v4 = *(_QWORD*)(*(_QWORD*)(a1 + 40) + 1216i64);
		if (v4)
		{
		LABEL_8:
			*(_DWORD*)(a1 + 1004) = 0;
			if ((*(_BYTE*)(v2 + 10) & 4) != 0)
			{
				v5 = *(_QWORD*)(v4 + 64);
				v6 = *(_QWORD*)(*(_QWORD*)(v4 + 56) + 64i64);
				sub_140052360((__int64*)(a1 + 1008), (unsigned int)(*(_DWORD*)(v6 + 128) + 1));
				v7 = 0i64;
				if (*(_DWORD*)(v6 + 128))
				{
					v8 = 0i64;
					do
					{
						v9 = *(_QWORD*)(v6 + 136);
						*(_DWORD*)(*(_QWORD*)(a1 + 1008) + 4 * v7) = *(_DWORD*)(a1 + 1004);
						if ((unsigned int)*(unsigned __int16*)(v8 + v9 + 30) < *(_DWORD*)(v5 + 512))
						{
							v10 = *(unsigned __int16*)(v8 + v9 + 30);
							v11 = *(_QWORD*)(v5 + 520);
							v12 = *(unsigned __int16*)(v11 + 4 * v10);
							if (*(_WORD*)(v11 + 4 * v10))
							{
								if ((unsigned int)*(unsigned __int16*)(v8 + v9 + 24) < *(_DWORD*)(v5 + 240)
									&& (*(_BYTE*)(184i64 * *(unsigned __int16*)(v8 + v9 + 24) + *(_QWORD*)(v5 + 248)) & 4) == 0)
								{
									v13 = 0i64;
									v14 = (_DWORD*)(*(_QWORD*)(a1 + 416) + 12i64);
									while (v12 != *v14)
									{
										++v13;
										++v14;
										if (v13 >= 4)
											goto LABEL_34;
									}
									*(_DWORD*)(a1 + 1004) += *(_DWORD*)(v8 + v9 + 12);
								}
							}
						}
					LABEL_34:
						++v7;
						v8 += 112i64;
					} while (v7 < *(unsigned int*)(v6 + 128));
				}
				*(_DWORD*)(*(_QWORD*)(a1 + 1008) + 4i64 * *(unsigned int*)(v6 + 128)) = *(_DWORD*)(a1 + 1004);
			}
			if (!*(_DWORD*)(a1 + 1004))
				*(_QWORD*)(a1 + 1016) = 0i64;
			return;
		}
	LABEL_6:
		if (a2)
			return;
		v4 = *(_QWORD*)(a1 + 40);
		goto LABEL_8;
	}
	v15 = *(_QWORD*)(*(_QWORD*)(a1 + 40) + 1216i64);
	if (!v15)
	{
	LABEL_20:
		if (a2)
			return;
		v15 = *(_QWORD*)(a1 + 40);
	}
	v16 = 0.0;
	if ((*(_BYTE*)(v2 + 10) & 4) == 0)
		goto LABEL_41;
	v17 = *(_QWORD*)(v15 + 64);
	v18 = *(_QWORD*)(*(_QWORD*)(v15 + 56) + 64i64);
	sub_140052360((__int64*)(a1 + 1024), (unsigned int)(*(_DWORD*)(v18 + 128) + 1));
	v19 = 0i64;
	if (*(_DWORD*)(v18 + 128))
	{
		v20 = 0i64;
		do
		{
			v21 = *(_QWORD*)(v18 + 136);
			*(float*)(*(_QWORD*)(a1 + 1024) + 4 * v19) = v16;
			if ((unsigned int)*(unsigned __int16*)(v20 + v21 + 30) < *(_DWORD*)(v17 + 512))
			{
				v22 = *(unsigned __int16*)(v20 + v21 + 30);
				v23 = *(_QWORD*)(v17 + 520);
				v24 = *(unsigned __int16*)(v23 + 4 * v22);
				if (*(_WORD*)(v23 + 4 * v22))
				{
					if ((unsigned int)*(unsigned __int16*)(v20 + v21 + 24) < *(_DWORD*)(v17 + 240)
						&& (*(_BYTE*)(184i64 * *(unsigned __int16*)(v20 + v21 + 24) + *(_QWORD*)(v17 + 248)) & 4) == 0)
					{
						v25 = 0i64;
						v26 = (_DWORD*)(*(_QWORD*)(a1 + 416) + 12i64);
						while (v24 != *v26)
						{
							++v25;
							++v26;
							if (v25 >= 4)
								goto LABEL_39;
						}
						v30 = sub_1401C9770((unsigned __int16*)(*(_QWORD*)(v18 + 176)
							+ 2i64 * *(unsigned int*)(*(_QWORD*)(v18 + 192) + 4 * v19 + 4)));
						v16 = v16
							+ (float)(v30 - sub_1401C9770((unsigned __int16*)(v29 + 2i64 * *(unsigned int*)(v27 + 4 * v28))));
					}
				}
			}
		LABEL_39:
			++v19;
			v20 += 112i64;
		} while (v19 < *(unsigned int*)(v18 + 128));
	}
	*(float*)(*(_QWORD*)(a1 + 1024) + 4i64 * *(unsigned int*)(v18 + 128)) = v16;
	if (v16 == 0.0)
		LABEL_41:
	*(_QWORD*)(a1 + 1032) = 0i64;
}
// 14032F3DB: variable 'v29' is possibly undefined
// 14032F3D7: variable 'v27' is possibly undefined
// 14032F3D7: variable 'v28' is possibly undefined
// 14032F3F5: variable 'v19' is possibly undefined

