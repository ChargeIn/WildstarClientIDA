//----- (0000000140116940) ----------------------------------------------------
void __fastcall sub_140116940(__int64 a1, float a2)
{
	__int64 v3; // rdi
	__int64 v4; // rcx
	float v5; // xmm0_4
	float v6; // xmm6_4
	int v7[4]; // [rsp+20h] [rbp-28h] BYREF

	if (!*(_BYTE*)(a1 + 1888))
		return;
	v3 = 0i64;
	v7[0] = 0;
	if (*(_BYTE*)(a1 + 1848))
	{
	LABEL_7:
		v5 = *(float*)(a1 + 1852);
		v6 = (float)(a2 * *(float*)(a1 + 1896)) + *(float*)(a1 + 1892);
		*(float*)(a1 + 1892) = v6;
		if (v6 > v5)
		{
			*(float*)(a1 + 1892) = v5;
			*(_BYTE*)(a1 + 1888) = 0;
		}
		return;
	}
	if (!*(_QWORD*)(a1 + 1840))
	{
	LABEL_6:
		*(_BYTE*)(a1 + 1848) = 1;
		goto LABEL_7;
	}
	while (1)
	{
		v4 = *(_QWORD*)(*(_QWORD*)(a1 + 1832) + 8 * v3);
		if (!(*(unsigned __int8(__fastcall**)(__int64, int*))(*(_QWORD*)v4 + 72i64))(v4, v7))
			break;
		if ((unsigned __int64)++v3 >= *(_QWORD*)(a1 + 1840))
			goto LABEL_6;
	}
}
// 140116940: using guessed type int var_28[4];

