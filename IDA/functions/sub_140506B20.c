//----- (0000000140506B20) ----------------------------------------------------
char __fastcall sub_140506B20(__int64 a1)
{
	unsigned int v2; // ecx
	int v3; // ebp
	unsigned int v4; // edx
	unsigned int v5; // r11d
	unsigned int v6; // r14d
	unsigned int v7; // ebx
	unsigned __int64* v8; // rsi
	unsigned int v9; // eax
	char v10; // r8
	__int64 v11; // r9
	__int64 v12; // r10
	int v13; // ebp
	__int64 v14; // rax
	__int64 v15; // rax
	int v16; // ebp
	unsigned int v17; // esi
	float v18; // xmm0_4
	int v19; // r15d
	int v20; // ebp
	unsigned __int64 v21; // r8
	__m128* v22; // r8
	_QWORD* v23; // rcx
	unsigned int v25; // [rsp+50h] [rbp-48h] BYREF
	unsigned int v26; // [rsp+54h] [rbp-44h]
	unsigned int v27; // [rsp+58h] [rbp-40h]
	int v28; // [rsp+5Ch] [rbp-3Ch]
	unsigned int v29[4]; // [rsp+60h] [rbp-38h] BYREF

	v2 = *(_DWORD*)(a1 + 716);
	v3 = 0;
	v4 = *(_DWORD*)(a1 + 720);
	v5 = *(_DWORD*)(a1 + 724);
	v6 = *(_DWORD*)(a1 + 728);
	v26 = v4;
	v27 = v5;
	v28 = v6;
	v25 = v2;
	v7 = 0;
	v8 = (unsigned __int64*)(a1 + 1096);
	do
	{
		if (!v7 || *(v8 - 2))
		{
			v25 = v3 + v2;
			v29[0] = v3 + v2;
			v29[1] = v4;
			v29[2] = v5;
			v29[3] = v6;
			v9 = sub_140506500(a1);
			v13 = sub_140506750(v9, 232i64 * v7 + a1 + 1080, v29, v11, *v8, v10, v9, v12, 0);
			if ((*(_BYTE*)(a1 + 664) & 1) != 0)
				break;
			v14 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 696) + 96i64) + 32i64))(*(_QWORD*)(*(_QWORD*)(a1 + 696) + 96i64));
			v6 = v28;
			v5 = v27;
			v4 = v26;
			v2 = v25;
			v3 = (int)(float)(*(float*)(v14 + 20) + 1.0) + v13;
		}
		++v7;
		v8 += 29;
	} while (v7 < 2);
	LOBYTE(v15) = ~*(_BYTE*)(a1 + 664);
	if ((*(_BYTE*)(a1 + 664) & 1) != 0 && (*(_BYTE*)(a1 + 28) & 8) != 0)
	{
		v15 = *(_QWORD*)(a1 + 32);
		if (v15)
		{
			if (*(_QWORD*)(v15 + 2880) == a1)
			{
				LOWORD(v15) = sub_14018CDF0();
				if ((v15 & 0x200) != 0)
				{
					if ((*(_DWORD*)(a1 + 704) & 2) != 0)
						v16 = 2;
					else
						v16 = *(_DWORD*)(a1 + 704) & 1;
					v17 = v25;
					LODWORD(v18) = sub_140506520(
						(*(_BYTE*)(a1 + 664) & 2) != 0,
						*(_QWORD*)(a1 + 1112),
						*(_QWORD*)(*(_QWORD*)(a1 + 696) + 96i64),
						*(_QWORD*)(a1 + 1096),
						(*(_BYTE*)(a1 + 664) & 2) != 0).m128_u32[0];
					v19 = (int)(v28 - v26 - HIDWORD(qword_140C46108)) / 2 + v26;
					v20 = v16 - 1;
					if (v20)
					{
						if (v20 == 1)
							v17 = v27 - (int)v18;
					}
					else
					{
						v17 = (int)(v27 - (int)v18 - v25) / 2 + v25;
					}
					v28 = v19 + HIDWORD(qword_140C46108);
					v21 = *(unsigned int*)(a1 + 708);
					v26 = v19;
					v25 = -2 - qword_140C46108 + (int)v18 + v17;
					v27 = (int)v18 + v17 - qword_140C46108;
					LOBYTE(v15) = qword_140C63678;
					if (v21 >= *(_QWORD*)(qword_140C63678 + 48))
						v22 = *(__m128**)(qword_140C63678 + 40);
					else
						v22 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v21);
					v23 = *(_QWORD**)(a1 + 1024);
					if (v23)
						LOBYTE(v15) = sub_140103CF0(
							v23,
							&v25,
							v22,
							0,
							COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)(a1 + 1032)) * *(float*)(a1 + 1036)));
				}
			}
		}
	}
	return v15;
}
// 140506C20: variable 'v11' is possibly undefined
// 140506C20: variable 'v10' is possibly undefined
// 140506C20: variable 'v12' is possibly undefined
// 140C46108: using guessed type __int64 qword_140C46108;
// 140C63664: using guessed type int dword_140C63664;
// 140C63678: using guessed type __int64 qword_140C63678;

