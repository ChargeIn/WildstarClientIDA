//----- (0000000140906E48) ----------------------------------------------------
__int64 __fastcall sub_140906E48(WCHAR* a1, __int64 a2, _WORD* a3, unsigned int* a4, __int64 a5, _OWORD* a6)
{
	int v10; // r14d
	__int64 v11; // rsi
	__int64 v12; // rax
	WCHAR* v13; // rcx
	int v14; // edx
	unsigned __int16* v15; // rdi
	int v16; // eax
	__int64 v17; // rbx
	__int64 v19; // [rsp+40h] [rbp-30h] BYREF
	__int64 v20[2]; // [rsp+48h] [rbp-28h] BYREF
	__int64 v21; // [rsp+58h] [rbp-18h]
	char v22; // [rsp+60h] [rbp-10h]
	WCHAR* v23; // [rsp+A0h] [rbp+30h] BYREF

	v23 = a1;
	v10 = 0;
	sub_1407DE348((__int64)v20, a6);
	if (!v23)
		goto LABEL_24;
	if (!a2)
		goto LABEL_24;
	*v23 = 0;
	if (!a3)
		goto LABEL_24;
	v11 = a5;
	if (!a5)
		v11 = *(_QWORD*)(v20[0] + 288);
	v12 = a2;
	v19 = a2;
	v13 = v23;
	do
	{
		v14 = (unsigned __int16)*a3;
		if (!*a3)
			break;
		if (v14 == 37)
		{
			if (!a4)
				goto LABEL_24;
			v15 = a3 + 1;
			v16 = 0;
			if (*v15 == 35)
			{
				v16 = 1;
				++v15;
			}
			if (!sub_140906224((__int64)v20, *v15, a4, &v23, &v19, v11, v16))
			{
				if (v19)
					v10 = 1;
				goto LABEL_21;
			}
			v13 = v23;
			v12 = v19;
			a3 = v15 + 1;
		}
		else
		{
			*v13 = v14;
			v13 = v23 + 1;
			++a3;
			v12 = --v19;
			++v23;
		}
	} while (v12);
	if (v12)
	{
		*v13 = 0;
		v17 = a2 - v19;
		goto LABEL_26;
	}
LABEL_21:
	*a1 = 0;
	if (!v10 && !v19)
	{
		*(_DWORD*)sub_1407DE1B0() = 34;
	}
	else
	{
	LABEL_24:
		*(_DWORD*)sub_1407DE1B0() = 22;
		sub_1407DC370();
	}
	v17 = 0i64;
LABEL_26:
	if (v22)
		*(_DWORD*)(v21 + 200) &= ~2u;
	return v17;
}
// 140906ECB: conditional instruction was optimized away because rbx.8!=0

