#include "../winhttp.h"

//----- (00000001407F1618) ----------------------------------------------------
__int64 __fastcall sub_1407F1618(__int64* a1, _BYTE* a2, unsigned __int64 a3, unsigned int a4, int a5, _OWORD* a6)
{
	unsigned __int64 v8; // rbx
	__int64 v10; // r12
	__int16 v11; // bp
	_QWORD* v12; // rax
	unsigned int v13; // ebx
	unsigned __int64 v14; // r8
	__m128i* v15; // rax
	_BYTE* v16; // rdi
	_BYTE* v17; // rdi
	__int64 v18; // rdx
	int* v19; // rdi
	int* v20; // r15
	int* v21; // rdi
	unsigned __int64 v22; // r8
	unsigned __int16 v23; // ax
	int* i; // rcx
	_BYTE* v25; // rdi
	__int64 v26; // rcx
	_BYTE* v27; // rdi
	_BYTE* v28; // r8
	__int64 v30; // [rsp+30h] [rbp-48h] BYREF
	__int64 v31; // [rsp+40h] [rbp-38h]
	char v32; // [rsp+48h] [rbp-30h]

	v8 = a4;
	v10 = 1023i64;
	v11 = 48;
	sub_1407DE348((__int64)&v30, a6);
	if ((v8 & 0x80000000) != 0i64)
		v8 = 0i64;
	if (!a2 || !a3)
	{
		v12 = sub_1407DE1B0();
		v13 = 22;
	LABEL_8:
		*(_DWORD*)v12 = v13;
		sub_1407DC370();
		goto LABEL_58;
	}
	*a2 = 0;
	if (a3 <= (int)v8 + 11)
	{
		v12 = sub_1407DE1B0();
		v13 = 34;
		goto LABEL_8;
	}
	if ((((unsigned __int64)*a1 >> 52) & 0x7FF) == 2047)
	{
		v14 = a3 - 2;
		if (a3 == -1i64)
			v14 = -1i64;
		v13 = sub_1407F1BC4(a1, a2 + 2, v14, v8, 0, 0i64);
		if (v13)
		{
			*a2 = 0;
			goto LABEL_58;
		}
		if (a2[2] == 45)
			*a2++ = 45;
		*a2 = 48;
		a2[1] = a5 != 0 ? 88 : 120;
		v15 = sub_1407E05F0((__m128i*)(a2 + 2), 101);
		if (v15)
		{
			v15->m128i_i8[0] = a5 != 0 ? 80 : 112;
			v15->m128i_i8[3] = 0;
		}
	}
	else
	{
		if (*a1 < 0)
			*a2++ = 45;
		*a2 = 48;
		v16 = a2 + 1;
		*v16 = a5 != 0 ? 88 : 120;
		v17 = v16 + 1;
		v18 = a5 != 0 ? 7 : 39;
		if ((*a1 & 0x7FF0000000000000i64) != 0)
		{
			*v17 = 49;
			v19 = (int*)(v17 + 1);
		}
		else
		{
			*v17 = 48;
			v19 = (int*)(v17 + 1);
			v10 = (*a1 & 0xFFFFFFFFFFFFFi64) != 0 ? 0x3FE : 0;
		}
		v20 = v19;
		v21 = (int*)((char*)v19 + 1);
		if ((_DWORD)v8)
			*(_BYTE*)v20 = ***(_BYTE***)(v30 + 240);
		else
			*(_BYTE*)v20 = 0;
		if ((*a1 & 0xFFFFFFFFFFFFFi64) != 0)
		{
			v22 = 0xF000000000000i64;
			do
			{
				if ((int)v8 <= 0)
					break;
				v23 = ((v22 & *a1 & 0xFFFFFFFFFFFFFi64) >> v11) + 48;
				if (v23 > 0x39u)
					LOBYTE(v23) = (a5 != 0 ? 7 : 39) + v23;
				*(_BYTE*)v21 = v23;
				v22 >>= 4;
				v8 = (unsigned int)(v8 - 1);
				v21 = (int*)((char*)v21 + 1);
				v11 -= 4;
			} while (v11 >= 0);
			if (v11 >= 0 && (unsigned __int16)((v22 & *a1 & 0xFFFFFFFFFFFFFi64) >> v11) > 8u)
			{
				for (i = (int*)((char*)v21 - 1); ((*(_BYTE*)i - 70) & 0xDF) == 0; i = (int*)((char*)i - 1))
					*(_BYTE*)i = 48;
				if (i == v20)
				{
					++* ((_BYTE*)i - 1);
				}
				else if (*(_BYTE*)i == 57)
				{
					*(_BYTE*)i = a5 != 0 ? 65 : 97;
				}
				else
				{
					++* (_BYTE*)i;
				}
			}
		}
		if ((int)v8 > 0)
		{
			LOBYTE(v18) = 48;
			sub_1407E4830(v21, v18, v8);
			v21 = (int*)((char*)v21 + v8);
		}
		if (!*(_BYTE*)v20)
			v21 = v20;
		*(_BYTE*)v21 = a5 != 0 ? 80 : 112;
		v25 = (char*)v21 + 1;
		v26 = (((unsigned __int64)*a1 >> 52) & 0x7FF) - v10;
		if (v26 < 0)
		{
			*v25 = 45;
			v27 = v25 + 1;
			v26 = -v26;
		}
		else
		{
			*v25 = 43;
			v27 = v25 + 1;
		}
		v28 = v27;
		*v27 = 48;
		if (v26 >= 1000 && (*v27 = v26 / 1000 + 48, ++v27, v26 %= 1000i64, v27 != v28) || v26 >= 100)
		{
			*v27++ = v26 / 100 + 48;
			v26 %= 100i64;
		}
		if (v27 != v28 || v26 >= 10)
		{
			*v27++ = v26 / 10 + 48;
			v26 %= 10i64;
		}
		*v27 = v26 + 48;
		v27[1] = 0;
	}
	v13 = 0;
LABEL_58:
	if (v32)
		*(_DWORD*)(v31 + 200) &= ~2u;
	return v13;
}

