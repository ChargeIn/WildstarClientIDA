#include "../winhttp.h"

//----- (00000001401C0820) ----------------------------------------------------
__int64 sub_1401C0820(__int64 a1, int* a2, ...)
{
	__int64 v2; // rax
	unsigned int v3; // edi
	__int64 result; // rax
	unsigned __int64 v5; // rdx
	int* v6; // rcx
	__int64 v7; // rsi
	__int64 v8; // rbx
	int v9; // r8d
	_WORD* v10; // rax
	__int64 v11; // r9
	char* v12; // r10
	__int16 v13; // cx
	__int64 v14; // [rsp+30h] [rbp-38h]
	int* v15; // [rsp+70h] [rbp+8h] BYREF
	__int64 v16; // [rsp+80h] [rbp+18h] BYREF
	va_list va; // [rsp+80h] [rbp+18h]
	__int64 v18; // [rsp+88h] [rbp+20h] BYREF
	va_list va1; // [rsp+88h] [rbp+20h]
	__int64 v20; // [rsp+90h] [rbp+28h]
	va_list va2; // [rsp+98h] [rbp+30h] BYREF

	va_start(va2, a2);
	va_start(va1, a2);
	va_start(va, a2);
	v16 = va_arg(va1, _QWORD);
	va_copy(va2, va1);
	v18 = va_arg(va2, _QWORD);
	v20 = va_arg(va2, _QWORD);
	v2 = *(_QWORD*)(a1 + 88);
	v15 = a2;
	v3 = 0;
	v18 = 260i64;
	result = sub_1401A3210(
		a2,
		0x104ui64,
		(__int64*)&v15,
		(unsigned __int64*)va1,
		0,
		L"%s/%s%s",
		v2,
		&unk_1409E2BCC,
		&unk_1409E2B7C);
	if ((int)result >= 0)
	{
		v5 = v18;
		v6 = v15;
		v7 = v20;
		v16 = v18;
		v18 = (__int64)v15;
		v8 = 0i64;
		while (1)
		{
			LODWORD(v14) = *(unsigned __int8*)(v8 + v7);
			result = sub_1401A3210(v6, v5, (__int64*)va1, (unsigned __int64*)va, 0, L"%0.2x", v14);
			if ((int)result < 0)
				break;
			v5 = v16;
			if ((unsigned __int64)++v8 >= 0x14)
			{
				v9 = 0;
				if ((unsigned __int64)(v16 - 1) > 0x7FFFFFFE)
					v9 = -2147024809;
				if (v9 < 0)
				{
					if (v16)
						*(_WORD*)v18 = 0;
				}
				else
				{
					v10 = (_WORD*)v18;
					v9 = 0;
					if (!v16)
						goto LABEL_16;
					v11 = 2147483646 - v16;
					v12 = (char*)L".bin" - v18;
					while (v11 + v5)
					{
						v13 = *(_WORD*)((char*)v10 + (_QWORD)v12);
						if (!v13)
							break;
						*v10++ = v13;
						if (!--v5)
						{
							v9 = -2147024774;
							*(v10 - 1) = 0;
							goto LABEL_20;
						}
					}
					if (!v5)
					{
					LABEL_16:
						--v10;
						v9 = -2147024774;
					}
					*v10 = 0;
				}
			LABEL_20:
				if (v9 < 0)
					return (unsigned int)v9;
				return v3;
			}
			v6 = (int*)v18;
		}
	}
	return result;
}
// 1401C08F2: variable 'v14' is possibly undefined
// 140A475E8: using guessed type wchar_t aBin[5];
// 140A47610: using guessed type wchar_t aSSS_2[8];
// 140A47D08: using guessed type wchar_t a02x_0[6];

