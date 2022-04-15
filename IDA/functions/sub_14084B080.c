//----- (000000014084B080) ----------------------------------------------------
void sub_14084B080()
{
	unsigned int v0; // edi
	_DWORD* v1; // rbx
	__m128 v2; // xmm6
	float* v3; // rax
	int v4; // [rsp+28h] [rbp-30h]
	float v5[4]; // [rsp+30h] [rbp-28h] BYREF

	v0 = 0;
	v1 = &unk_140C6206C;
	v2 = _mm_shuffle_ps((__m128)0x3F800000u, (__m128)0x3F800000u, 0);
	do
	{
		*(__m128*)(v1 - 15) = v2;
		*(__m128*)(v1 - 11) = v2;
		*((_BYTE*)v1 - 68) = 1;
		*(v1 - 18) = 1065353216;
		*((_WORD*)v1 + 4) = 256;
		*(v1 - 27) = dword_140C10FD8;
		*(v1 - 26) = dword_140C10FDC;
		*(v1 - 25) = dword_140C10FE0;
		*(v1 - 24) = dword_140C10FE4;
		*(v1 - 23) = dword_140C10FE8;
		*(v1 - 22) = dword_140C10FEC;
		*(v1 - 21) = dword_140C10FF0;
		*(v1 - 20) = dword_140C10FF4;
		*(v1 - 19) = dword_140C10FF8;
		v3 = sub_1408294F0(v5, (float*)&dword_140C10FE4, (float*)&dword_140C10FD8);
		v4 = *((_DWORD*)v3 + 2);
		*(_QWORD*)(v1 - 7) = *(_QWORD*)v3;
		*(v1 - 5) = v4;
		*(v1 - 4) = *(v1 - 24);
		*(v1 - 3) = *(v1 - 23);
		*(v1 - 2) = *(v1 - 22);
		*(v1 - 1) = *(v1 - 27);
		*v1 = *(v1 - 26);
		v1[1] = *(v1 - 25);
		*((_BYTE*)v1 + 9) = 1;
		++v0;
		v1 += 32;
	} while (v0 < 8);
	dword_140C61FF0 = 0;
	dword_140C10F80 = -1;
}
// 14084B0C0: conditional instruction was optimized away because edi.4<8u
// 140C10F80: using guessed type int dword_140C10F80;
// 140C10FD8: using guessed type int dword_140C10FD8;
// 140C10FDC: using guessed type int dword_140C10FDC;
// 140C10FE0: using guessed type int dword_140C10FE0;
// 140C10FE4: using guessed type int dword_140C10FE4;
// 140C10FE8: using guessed type int dword_140C10FE8;
// 140C10FEC: using guessed type int dword_140C10FEC;
// 140C10FF0: using guessed type int dword_140C10FF0;
// 140C10FF4: using guessed type int dword_140C10FF4;
// 140C10FF8: using guessed type int dword_140C10FF8;
// 140C61FF0: using guessed type int dword_140C61FF0;
// 14084B080: using guessed type float var_28[4];

