//----- (00000001408315A0) ----------------------------------------------------
__int64 __fastcall sub_1408315A0(__int64 a1, __int64 a2)
{
	__int64 v3; // rcx
	__int64 v4; // rbx
	float v5; // xmm0_4
	float v6; // xmm1_4
	unsigned __int8* v7; // r8
	unsigned int v8; // r9d
	__int64 v9; // rcx
	__int64 v10; // rdx
	__int64 v11; // rdx
	int* v12; // rax
	char v13; // al
	double v14; // xmm0_8
	__int64 result; // rax
	int v16; // [rsp+30h] [rbp+8h] BYREF
	__int64 v17; // [rsp+38h] [rbp+10h]

	v17 = a2;
	v3 = a1 + 32;
	*(_DWORD*)(v3 - 32) = 0;
	*(_QWORD*)(v3 - 24) = 0i64;
	*(_QWORD*)(v3 - 16) = 0i64;
	sub_140862A10(v3);
	v4 = v17;
	*(_QWORD*)(a1 + 1088) = 0i64;
	*(_BYTE*)(a1 + 1124) &= 0xF6u;
	*(_BYTE*)(a1 + 1124) |= 2u;
	*(_DWORD*)(a1 + 1120) = 1065353216;
	*(_DWORD*)(a1 + 1136) = -981467136;
	*(_DWORD*)(a1 + 1140) = -981467136;
	*(_DWORD*)(a1 + 1148) = 0;
	sub_140832C30(v4, (int*)(a1 + 1156), &v16);
	v5 = 1.0 / *(float*)&v16;
	*(float*)(a1 + 1160) = 1.0 - (float)(1.0 / *(float*)&v16);
	if ((*(_QWORD*)(v4 + 96) & 0x200000000i64) != 0)
	{
		sub_140836340(qword_140C61BB0, v4, 33, 0i64);
		v6 = v5;
	}
	else
	{
		v7 = *(unsigned __int8**)(v4 + 80);
		v16 = dword_140C11070;
		if (v7)
		{
			v8 = *v7;
			v9 = 0i64;
			while (1)
			{
				v10 = (unsigned int)(v9 + 1);
				if (v7[v10] == 28)
					break;
				v9 = (unsigned int)v10;
				if ((unsigned int)v10 >= v8)
					goto LABEL_7;
			}
			v11 = (__int64)&v7[4 * v9 + ((v8 + 4) & 0xFFFFFFFC)];
		}
		else
		{
		LABEL_7:
			v11 = 0i64;
		}
		v12 = &v16;
		if (v11)
			v12 = (int*)v11;
		v16 = *v12;
		v6 = *(float*)&v16;
	}
	v13 = *(_BYTE*)(v4 + 328);
	*(_BYTE*)(v4 + 328) = v13 & 0xDF;
	*(_BYTE*)(a1 + 1124) &= ~4u;
	*(_BYTE*)(a1 + 1124) |= 4 * ((v13 & 0x10) != 0);
	if (v6 <= 0.0)
	{
		*(_DWORD*)(a1 + 1148) = 0;
		return a1;
	}
	else
	{
		HIDWORD(v14) = 0;
		*(float*)&v14 = -1024.0 / (float)(v6 * 48000.0);
		*(float*)&v14 = sub_1408FC7F0(v14);
		result = a1;
		*(_DWORD*)(a1 + 1148) = LODWORD(v14);
	}
	return result;
}
// 140C11070: using guessed type int dword_140C11070;
// 140C61BB0: using guessed type __int64 qword_140C61BB0;

