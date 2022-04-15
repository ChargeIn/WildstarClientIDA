#include "../winhttp.h"

//----- (00000001407DC888) ----------------------------------------------------
char* __fastcall sub_1407DC888(char* a1, char* a2, __int64 a3, char* a4, __int64 a5, int* a6)
{
	_QWORD* v10; // rax
	char* v11; // r15
	char* v12; // r14
	unsigned __int64 v14; // r13
	BOOL v15; // r15d
	bool v16; // zf
	int* v17; // r15
	int v18; // eax
	__int64 v19; // rax
	UINT ACP; // eax
	__int64 v21; // rax
	UINT v22; // [rsp+30h] [rbp-D0h] BYREF
	int* v23; // [rsp+38h] [rbp-C8h]
	_WORD* v24; // [rsp+40h] [rbp-C0h]
	_QWORD* v25; // [rsp+48h] [rbp-B8h]
	__int64 v26; // [rsp+50h] [rbp-B0h]
	__m128i v27[18]; // [rsp+60h] [rbp-A0h] BYREF
	_WORD v28[88]; // [rsp+180h] [rbp+80h] BYREF

	v26 = a3;
	v10 = sub_1407E3D94();
	v11 = (char*)v10 + 356;
	v12 = (char*)v10 + 618;
	v23 = (int*)(v10 + 44);
	v24 = (_WORD*)v10 + 178;
	v22 = 0;
	if (!a1)
		return 0i64;
	v25 = v10 + 115;
	if ((unsigned int)sub_1407E6D08((__int64)a4, a5, (char*)v10 + 920, 85i64))
	{
		sub_1407DC390();
		JUMPOUT(0x1407DCC59i64);
	}
	if (*(_WORD*)a1 == 67 && !*((_WORD*)a1 + 1))
	{
		if ((unsigned int)sub_1407E6BF4(a2, a3, (char*)L"C"))
		{
			sub_1407DC390();
			__debugbreak();
		}
		if (a6)
			*a6 = 0;
		return a2;
	}
	v14 = sub_1407E6CA0(a1);
	if (v14 >= 0x83 || (unsigned int)sub_1407E6BB8(v12, a1) && (unsigned int)sub_1407E6BB8(v11, a1))
	{
		v15 = _security_cookie == qword_140DC52E8;
		if ((unsigned int)sub_1407DC578((__int64)v27, a1))
		{
			v17 = v23;
		}
		else
		{
			v16 = !v15;
			v17 = v23;
			if (v16)
				v18 = sub_1407E7568((__int64)v27, v23, v27);
			else
				v18 = sub_1407E7EFC((__int64)v27, v23, (__int64)v27);
			if (v18)
			{
				sub_1407DC4D4(v12, 131i64, (__int64)v27);
				if (a4)
				{
					v19 = sub_1407E6CA0(v28);
					if ((unsigned int)sub_1407E6D08((__int64)a4, a5, (char*)v28, v19 + 1))
					{
						sub_1407DC390();
						__debugbreak();
					}
				}
			LABEL_29:
				if (*(_WORD*)a1 && v14 < 0x83)
				{
					if ((unsigned int)sub_1407E6D08((__int64)v24, 131i64, a1, v14 + 1))
					{
						sub_1407DC390();
						__debugbreak();
					}
				}
				else
				{
					*v24 = 0;
				}
				goto LABEL_35;
			}
		}
		if (!sub_1407E8794((__int64)a1))
		{
			v21 = sub_1407E6CA0(a4);
			if ((unsigned int)sub_1407E6D08((__int64)v25, 85i64, a4, v21 + 1))
			{
				sub_1407DC390();
				__debugbreak();
			}
			return 0i64;
		}
		if (!sub_1407E8688((__int64)a1, 0x20001004u, (WCHAR*)&v22, 2) || (LOWORD(ACP) = v22, !v22))
		{
			ACP = GetACP();
			v22 = ACP;
		}
		*v17 = (unsigned __int16)ACP;
		if ((unsigned int)sub_1407E6D08((__int64)v12, 131i64, a1, v14 + 1))
		{
			sub_1407DC390();
			__debugbreak();
		}
		if ((unsigned int)sub_1407E6D08((__int64)a4, a5, a1, v14 + 1))
		{
			sub_1407DC390();
			__debugbreak();
		}
		if ((unsigned int)sub_1407E6D08((__int64)v25, 85i64, a1, v14 + 1))
		{
			sub_1407DC390();
			__debugbreak();
		}
		goto LABEL_29;
	}
LABEL_35:
	if (a6)
		sub_1407DB590(a6, v23, 4ui64);
	if ((unsigned int)sub_1407E6BF4(a2, v26, v12))
	{
		sub_1407DC390();
		__debugbreak();
	}
	return v12;
}
// 1407DCC54: control flows out of bounds to 1407DCC59
// 14095D510: using guessed type wchar_t aC_1[2];
// 140DC52E8: using guessed type __int64 qword_140DC52E8;
// 1407DC888: using guessed type __m128i var_220[18];

