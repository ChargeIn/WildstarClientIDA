//----- (00000001404B89A0) ----------------------------------------------------
__int64 __fastcall sub_1404B89A0(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4)
{
	int v7; // eax
	__int64 v8; // r9
	__int64* v9; // rax
	__int64 v10; // rcx
	__int64 v11; // rsi
	__m128* v12; // rax
	__int64 result; // rax
	int v14; // xmm1_4
	int v15; // xmm0_4
	int v16; // xmm1_4
	int v17; // xmm0_4
	int v18; // xmm1_4
	int v19[8]; // [rsp+20h] [rbp-68h] BYREF
	__m128 v20[4]; // [rsp+40h] [rbp-48h] BYREF

	*(_QWORD*)(a2 + 16) = *(_QWORD*)(a3 + 88);
	*(_QWORD*)a2 = *a4;
	*(_QWORD*)(a2 + 8) = a4[1];
	*(_DWORD*)(a2 + 76) = *(_DWORD*)(a3 + 96);
	*(_DWORD*)(a2 + 36) = *(_DWORD*)(a3 + 120);
	v7 = *(_DWORD*)(a3 + 116);
	*(_DWORD*)(a2 + 40) = 0x7FFFFFFF;
	*(_DWORD*)(a2 + 32) = v7;
	*(_QWORD*)(a2 + 88) = *(_QWORD*)(a3 + 240);
	*(_DWORD*)(a2 + 28) = *(_DWORD*)(a3 + 100);
	*(_DWORD*)(a2 + 96) = *(_DWORD*)(a3 + 248);
	v8 = a4[1];
	if (v8)
	{
		v9 = (__int64*)xmmword_140C7DFC0;
		if ((_QWORD)xmmword_140C7DFC0 != *((_QWORD*)&xmmword_140C7DFC0 + 1))
		{
			while (1)
			{
				v10 = *v9;
				if (*(_DWORD*)(*v9 + 8) == *(_DWORD*)a4 && *(_QWORD*)(v10 + 16) == v8)
					break;
				if (++v9 == *((__int64**)&xmmword_140C7DFC0 + 1))
					goto LABEL_9;
			}
			v11 = *v9;
			if (v10)
			{
				v12 = (__m128*)(*(__int64(__fastcall**)(__int64, __m128*, __int64))(*(_QWORD*)a3 + 144i64))(a3, v20, 1i64);
				*(_DWORD*)(a2 + 40) = sub_1405B0840(v11, v12);
			}
		}
	}
LABEL_9:
	result = (unsigned int)(*(_DWORD*)(a3 + 128) - 5);
	if ((result & 0xFFFFFFFA) == 0)
	{
		(*(void(__fastcall**)(__int64, __m128*, _QWORD))(*(_QWORD*)a3 + 168i64))(a3, v20, 0i64);
		sub_1404BD000((__int64)v19, v20);
		if (((*(_DWORD*)(a3 + 128) - 5) & 0xFFFFFFFB) == 0)
			*(_DWORD*)(a2 + 44) = v19[7];
		result = (unsigned int)(*(_DWORD*)(a3 + 128) - 5);
		if ((result & 0xFFFFFFFA) == 0)
		{
			v14 = v19[5];
			*(_DWORD*)(a2 + 48) = v19[4];
			v15 = v19[6];
			*(_DWORD*)(a2 + 52) = v14;
			*(_DWORD*)(a2 + 56) = v15;
		}
		v16 = v19[1];
		*(_DWORD*)(a2 + 60) = v19[0];
		v17 = v19[2];
		*(_DWORD*)(a2 + 64) = v16;
		v18 = v19[3];
		*(_DWORD*)(a2 + 68) = v17;
		*(_DWORD*)(a2 + 72) = v18;
	}
	return result;
}
// 140C7DFC0: using guessed type __int128 xmmword_140C7DFC0;
// 1404B89A0: using guessed type __m128 var_48[4];

