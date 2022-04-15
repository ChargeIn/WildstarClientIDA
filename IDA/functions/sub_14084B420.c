//----- (000000014084B420) ----------------------------------------------------
__int64 __fastcall sub_14084B420(unsigned int a1, float* a2)
{
	float* v4; // rdx
	float* v5; // rbx
	float* v6; // rax
	int v7; // [rsp+28h] [rbp-20h]
	float v8[4]; // [rsp+30h] [rbp-18h] BYREF

	if (a1 >= 8)
		return 31i64;
	v4 = a2 + 3;
	v5 = (float*)&byte_140C62000[128 * (unsigned __int64)a1];
	*v5 = *(v4 - 3);
	v5[1] = *(v4 - 2);
	v5[2] = *(v4 - 1);
	v5[3] = *v4;
	v5[4] = v4[1];
	v5[5] = v4[2];
	v5[6] = v4[3];
	v5[7] = v4[4];
	v5[8] = v4[5];
	v6 = sub_1408294F0(v8, v4, a2);
	v7 = *((_DWORD*)v6 + 2);
	*((_QWORD*)v5 + 10) = *(_QWORD*)v6;
	*((_DWORD*)v5 + 22) = v7;
	v5[23] = v5[3];
	v5[24] = v5[4];
	v5[25] = v5[5];
	v5[26] = *v5;
	v5[27] = v5[1];
	v5[28] = v5[2];
	*((_BYTE*)v5 + 117) = 1;
	return 1i64;
}
// 140C62000: using guessed type _BYTE byte_140C62000[80];
// 14084B420: using guessed type float var_18[4];

