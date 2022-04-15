//----- (00000001407DE3F0) ----------------------------------------------------
__m128 __fastcall sub_1407DE3F0(char* a1, char** a2, _OWORD* a3)
{
	char* v4; // rbx
	__int128 v6; // xmm6
	__int64 v7; // rdx
	int v8; // eax
	__int64 v9; // rax
	__int128 v11; // [rsp+20h] [rbp-58h] BYREF
	__int64 v12; // [rsp+30h] [rbp-48h]
	char v13; // [rsp+38h] [rbp-40h]
	char v14[24]; // [rsp+40h] [rbp-38h] BYREF

	v4 = a1;
	sub_1407DE348((__int64)&v11, a3);
	if (a2)
		*a2 = v4;
	if (!a1)
	{
		*(_DWORD*)sub_1407DE1B0() = 22;
		sub_1407DC370();
		v6 = 0i64;
		goto LABEL_23;
	}
	v7 = v11;
	while (1)
	{
		if (*(int*)(v7 + 212) <= 1)
		{
			v8 = *(_WORD*)(*(_QWORD*)(v7 + 264) + 2i64 * (unsigned __int8)*v4) & 8;
		}
		else
		{
			v8 = sub_1407EA448((unsigned __int8)*v4, 8, &v11);
			v7 = v11;
		}
		if (!v8)
			break;
		++v4;
	}
	v9 = sub_1407EA384((__int64)v14, v4, (__int64)&v11);
	if (a2)
		*a2 = &v4[*(int*)(v9 + 4)];
	if ((*(_DWORD*)v9 & 0x240) == 0)
	{
		if ((*(_BYTE*)v9 & 0x81) != 0)
		{
			v6 = (unsigned __int64)qword_140C104A0;
			if (*v4 == 45)
			{
				*(double*)&v6 = -*(double*)&qword_140C104A0;
				*((double*)&v6 + 1) = -0.0;
			}
		}
		else if ((*(_DWORD*)v9 & 0x100) == 0 || (v6 = 0i64, *(double*)(v9 + 16) != 0.0))
		{
			v6 = *(unsigned __int64*)(v9 + 16);
			goto LABEL_23;
		}
		*(_DWORD*)sub_1407DE1B0() = 34;
		goto LABEL_23;
	}
	v6 = 0i64;
	if (a2)
		*a2 = a1;
LABEL_23:
	if (v13)
		*(_DWORD*)(v12 + 200) &= ~2u;
	return (__m128)v6;
}
// 140C104A0: using guessed type __int64 qword_140C104A0;
// 1407DE3F0: using guessed type char var_38[24];

